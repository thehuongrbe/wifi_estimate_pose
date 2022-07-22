#include "rclcpp/rclcpp.hpp"
#include "test_interfaces/srv/sum_int.hpp"
#include <chrono>
#include <cstdlib>
#include <memory>
using namespace std::chrono_literals;
int main(int argc, char **argv){
    rclcpp::init(argc,argv);

    if(argc !=3){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp")," tong x y");
        return 1;
    }
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("tong");
    rclcpp::Client<test_interfaces::srv::SumInt>::SharedPtr client = node->create_client<test_interfaces::srv::SumInt>("tong");
    auto request = std::make_shared<test_interfaces::srv::SumInt::Request>();
    request->a = atoll(argv[1]);
    request->b = atoll(argv[2]);
    while(!client->wait_for_service(1s)){
        if(!rclcpp::ok()){
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "loi");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"service not available");
    }
    auto result = client->async_send_request(request);
    if(rclcpp::spin_until_future_complete(node,result)==rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Sum: %ld",result.get()->sum);
    }else{
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "loi");
    }
    rclcpp::shutdown();
    return 0;
}