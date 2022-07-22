import rclpy
from rclpy.node import Node
from geometry_msgs.msgs import Twist

class Turtlseim_pub(Node):
    def __init__(self):
        super().__init__('turtlesim_pub')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel',10)
        timer_period =0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
    def timer_callback(self):
        vel = Twist()
        vel.linear.x = 0.01
        vel.linear.y = 0
        vel.linear.z = 0
        vel.angular.x = 0
        vel.angular.y = 0
        vel.angular.z = 0
        self.publisher_.publish(vel)
        self.get_logger().info('ok:' vel)
        self.i+=1
def main(args=None):
    rclpy.init(args=args)
    turtlesim_pub = Turtlseim_pub()
    rclpy.spin(turtlesim_pub)
if __name__ == '__main__':
    main()

