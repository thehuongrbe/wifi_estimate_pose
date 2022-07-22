#include <geometry_msgs/msg/transform_stamped.hpp>
#include <rclcpp/rclcpp.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <memory>
using std::placeholders::_1;
class StaticFramePublisher : public rclcpp::Node{
public: 
    explicit StaticFramePublisher(char * transformation[]) : Node("turtle_tf2_broadcaster"){
        tf_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
        this->make_transforms(transformation);
    }
private:
    void make_transforms(char * transformation[])
    {
        rclcpp::Time now = this->get_clock()->now();
        geometry_msgs::msg::TransformStamped t;
        t.header.stamp = now;
        t.header.frame_id = "world";
        t.child_frame_id =transformation[1];
        t.transform.translation.x =atof(transformation[2]);
        t.transform.translation.y =atof(transformation[3]);
        t.transform.translation.z = atof(transformation[4]);
        tf2::Quaternion q;
        q.setRPY(atof(transformation[5]), atof(transformation[6]),atof(transformation[7]));
        t.transform.rotation.x =q.x();
        t.transform.rotation.y=q.y();
        t.transform.rotation.z=q.z();
        t.transform.rotation.w=q.w();
        tf_publisher_->sendTransform(t);
    }
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster>tf_publisher_;
};
int main(int argc, char *argv[])
{ 
    auto logger = rclcpp::get_logger("logger");
    if(argc!=8){
        RCLCPP_INFO(logger,"tf2");
        return 1;
    }
    if(strcmp(argv[1],"world")==0){
        RCLCPP_INFO(logger,"issus world frame");
        return 1;
    }
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StaticFramePublisher>(argv));
    rclcpp::shutdown();
    return 0;  
}