#include <functional>
#include <memory>
#include <thread>

#include "action_tutorials_interfaces/action/fibonacci.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

#include "action_cpp/visibility_control.h"

namespace action_cpp
{
class FibonacciActionServer : public rclcpp::Node
{
public:
  using Fibonacci = action_tutorials_interfaces::action::Fibonacci;
  using GoalHandleFibonacci = rclcpp_action::ServerGoalHandle<Fibonacci>;

  ACTION_CPP_PUBLIC
  explicit FibonacciActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("fibonacci_action_server", options) //khoi tao node
  {
    using namespace std::placeholders; // tao khong gian tham so ap dung cho ham blind voi cac doi so [_1,_2 ..._N]

    this->action_server_ = rclcpp_action::create_server<Fibonacci>(
      this,
      "fibonacci",
      std::bind(&FibonacciActionServer::handle_goal, this, _1, _2),// ham tra ve cua handle_goal voi tham so  _1,_2
      std::bind(&FibonacciActionServer::handle_cancel, this, _1),  //ham tra ve cua handle_cancel voi tham so _1
      std::bind(&FibonacciActionServer::handle_accepted, this, _1));// ham tra ve cua handle_accepted voi tham so  _1
  }
/* Cau truc 1 action server:
  namespace ten_thu_muc
  {
    class Ten_ActionServer : public rclcpp::Node
    {
      public:
        Kieu_bien_du_lieu;
        visibility_space
        explicit Ten_ActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()): Node("ten_node",options)
        {
          using namespace std::placeholders;
          this->action_server_ = rclcpp_action::create_server<kieu_du_lieu>(this,"ten_action",std::blind(Ten_ActionSerVer::ten_ham,this,tham_so));
        }
      private: // public
        ten_ham(tham_so){};
        execute(const std::shared_ptr<kieu_du_lieu> goal_handle){
          xu ly lenh cancle;
          gui feedback...
        };//
  }
  
*/
private:
  rclcpp_action::Server<Fibonacci>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const Fibonacci::Goal> goal)//ham handle_goal voi tham so _1: uuid, _2 Fibonacci::Goal
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->order);//RCLCPP_INFO(this->get_logger(),"",info) xuat thong tin 
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleFibonacci> goal_handle)//ham handle_cancel voi tham so _1:GoalHandleFibonacci
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");// gui phan hoi ve lenh huy action
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleFibonacci> goal_handle)
  {
    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&FibonacciActionServer::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleFibonacci> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(1); //toc do vong lap
    const auto goal = goal_handle->get_goal(); 
    auto feedback = std::make_shared<Fibonacci::Feedback>();
    auto & sequence = feedback->partial_sequence;
    sequence.push_back(0);
    sequence.push_back(1);
    auto result = std::make_shared<Fibonacci::Result>();

    for (int i = 1; (i < goal->order) && rclcpp::ok(); ++i) {
      // Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->sequence = sequence;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }
      // Update sequence
      sequence.push_back(sequence[i] + sequence[i - 1]);
      // Publish feedback
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Publish feedback");

      loop_rate.sleep();
    }

    // Check if goal is done
    if (rclcpp::ok()) {
      result->sequence = sequence;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }
  }
};  // class FibonacciActionServer

}  // namespace action_tutorials_cpp

RCLCPP_COMPONENTS_REGISTER_NODE(action_cpp::FibonacciActionServer)