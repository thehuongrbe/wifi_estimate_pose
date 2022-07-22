#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/srv/sum_int.hpp"
#include <memory>
void add(const std::shared_ptr<test_interfaces::srv::SumInt::Request> request,
	std::shared_ptr<test_interfaces::srv::SumInt::Response> response)
{
	response->sum =request->a +request->b;
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Tinh tong 2 so\na: %ld""b: %ld", request->a,request->b);
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "KQ: [%ld]", (int)response->sum);
}

int main(int argc, char **argv){
	rclcpp::init(argc,argv);
	std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("tong");
	rclcpp::Service<test_interfaces::srv::SumInt>::SharedPtr service = node->create_service<test_interfaces::srv::SumInt>("tong",&add);
	RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ok");
	rclcpp::spin(node);
	rclcpp::shutdown(); 
}
