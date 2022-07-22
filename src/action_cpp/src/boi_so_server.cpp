#include <functional>
#include <memory>
#include <thread>

#include "action_tutorials_interfaces/action/boiso.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

#include "action_cpp/visibility_control.h"
namespace action_cpp
{
    class BoisoActionServer : public rclcpp::Node
    {
        public:
            using Boiso = action_tutorials_interfaces::action::Boiso;
            using GoalHandleBoiso = rclcpp_action::ServerGoalHandle<Boiso>;
            ACTION_CPP_PUBLIC
            explicit BoisoActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("boi_so_server",options)
            {
                using namespace std::placeholders;
                this->action_server_ = rclcpp_action::create_server<Boiso>(this,"boiso",
                std::bind(&BoisoActionServer::handle_goal,this,_1,_2),
                std::bind(&BoisoActionServer::handle_cancel,this,_1),
                std::bind(&BoisoActionServer::handle_accepted,this,_1));
                
            }
        private:
            rclcpp_action::Server<Boiso>::SharedPtr action_server_;
            rclcpp_action::GoalResponse handle_goal(
                const rclcpp_action::GoalUUID & uuid,
                std::shared_ptr<const Boiso::Goal> goal
            ){
                RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->request);//RCLCPP_INFO(this->get_logger(),"",info) xuat thong tin 
                (void)uuid;
                return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
             }
            rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleBoiso> goal_handle){
                RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");// gui phan hoi ve lenh huy action
                 (void)goal_handle;
                return rclcpp_action::CancelResponse::ACCEPT;
            }
            void handle_accepted(const std::shared_ptr<GoalHandleBoiso> goal_handle){
                using namespace std::placeholders;
                std::thread{std::bind(&BoisoActionServer::execute,this,_1), goal_handle}.detach();
            }
            void execute(const std::shared_ptr<GoalHandleBoiso> goal_handle){
                RCLCPP_INFO(this->get_logger(), "goal...");
                rclcpp::Rate loop_rate(1);
                const auto goal = goal_handle->get_goal();
                auto feedback = std::make_shared<Boiso::Feedback>();
                auto & sequence = feedback->feedback;
                sequence.push_back(0);
                auto result = std::make_shared<Boiso::Result>();
                for (int i=1;(i<goal->request)&&rclcpp::ok();i++){
                    if(goal_handle->is_canceling()){
                        result->result =sequence;
                        goal_handle->canceled(result);
                        RCLCPP_INFO(this->get_logger(),"Goal cancle");
                        return;
                    }
                    sequence.push_back(i*5);
                    goal_handle->publish_feedback(feedback);
                    loop_rate.sleep();
                }
                if(rclcpp::ok()){
                    result->result=sequence;
                    goal_handle->succeed(result);
                    RCLCPP_INFO(this->get_logger(), "Goal succeed");
                }
            }
    };
}
RCLCPP_COMPONENTS_REGISTER_NODE(action_cpp::BoisoActionServer)