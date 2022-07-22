#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "action_tutorials_interfaces/action/boiso.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"
namespace action_cpp
{
    class BoisoActionClient : public rclcpp::Node
    {
        public:
            using Boiso = action_tutorials_interfaces::action::Boiso;
            using GoalHandleBoiso = rclcpp_action::ClientGoalHandle<Boiso>;
            explicit BoisoActionClient(const rclcpp::NodeOptions & options) : Node("boi_so_client", options) {
                this->client_ptr_ = rclcpp_action::create_client<Boiso>(
                    this,"boiso");
            this->timer_ =this->create_wall_timer(
                std::chrono::milliseconds(500),
                std::bind(&BoisoActionClient::send_goal,this));
            }
            void send_goal(){
                using namespace std::placeholders;
                this->timer_->cancel();
                if(!this->client_ptr_->wait_for_action_server()){
                    RCLCPP_ERROR(this->get_logger(),"Waiting...");
                    rclcpp::shutdown();
                }
                auto goal_msg = Boiso::Goal();
                goal_msg.request=5;
                RCLCPP_INFO(this->get_logger(),"sending goal");
                auto send_goal_options = rclcpp_action::Client<Boiso>::SendGoalOptions();
                send_goal_options.goal_response_callback = std::bind(&BoisoActionClient::goal_response_callback,this,_1);
                send_goal_options.feedback_callback=std::bind(&BoisoActionClient::feedback_callback,this,_1,_2);
                send_goal_options.result_callback = std::bind(&BoisoActionClient::result_callback,this,_1);
                this->client_ptr_->async_send_goal(goal_msg,send_goal_options);
            }
        private:
            rclcpp_action::Client<Boiso>::SharedPtr client_ptr_;
            rclcpp::TimerBase::SharedPtr timer_;
            void goal_response_callback(std::shared_future<GoalHandleBoiso::SharedPtr>future){
                auto goal_handle = future.get();
                if(!goal_handle){
                    RCLCPP_ERROR(this->get_logger(), "goal was rejected by server");
                } else {
                    RCLCPP_INFO(this->get_logger(),"Goal accepted,wating...");
                }
            }
            void feedback_callback(GoalHandleBoiso::SharedPtr,const std::shared_ptr<const Boiso::Feedback>feedback)
            {
                std::stringstream ss;
                ss << "Next number in sequence received: ";
                for (auto number : feedback->feedback) {
                 ss << number << " ";
                }
                RCLCPP_INFO(this->get_logger(), ss.str().c_str());
            }
            void result_callback(const GoalHandleBoiso::WrappedResult & result){ //nhan ve trang thai ket qua cua chuong trinh
                switch (result.code) {
                    case rclcpp_action::ResultCode::SUCCEEDED:
                        break;
                    case rclcpp_action::ResultCode::ABORTED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
                        return;
                    case rclcpp_action::ResultCode::CANCELED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
                        return;
                    default:
                        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                        return;
                }
                std::stringstream ss;
                ss << "Result received: ";
                for (auto number : result.result->result) {
                    ss << number << " ";
                }
                    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
                    rclcpp::shutdown();
  }
};  

} 

RCLCPP_COMPONENTS_REGISTER_NODE(action_cpp::BoisoActionClient)