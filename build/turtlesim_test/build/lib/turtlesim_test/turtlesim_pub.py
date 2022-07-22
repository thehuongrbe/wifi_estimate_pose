import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
class Turtlseim_pub(Node):
    def __init__(self):
        super().__init__('turtlesim_pub')
        self.pose_x=5
        self.subscription = self.create_subscription(Pose, '/turtle1/pose',self.listen_callback,10)
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel',10)
        timer_period =0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
    def listen_callback(self,pose):
        self.pose_x = pose.x
        self.theta= pose.theta
    def timer_callback(self):

        vel = Twist()
        if  self.pose_x < 8:
            vel.linear.x = 0.2
        else:
            if self.theta < (3.14/2):
                vel.linear.x = 0.0
                vel.linear.y = 0.0
                vel.linear.z = 0.0
                vel.angular.x = 0.0
                vel.angular.y = 0.0
                vel.angular.z = 0.2
        self.publisher_.publish(vel)
        self.get_logger().info('ok:' + str(self.pose_x))
        self.i+=1  
    
        
def main(args=None):
    rclpy.init(args=args)
    turtlesim_pub = Turtlseim_pub()
    rclpy.spin(turtlesim_pub)
  
if __name__ == '__main__':
    main()

