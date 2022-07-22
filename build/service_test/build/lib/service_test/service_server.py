from test_interfaces.srv import SumInt
import rclpy
from rclpy.node import Node

class Sum_service(Node):
    def __init__(self):
        super().__init__("Tinhtong")
        self.srv = self.create_service(SumInt, 'Tong', self.sum_cal)
    def sum_cal(self,request,response):
        response.sum = request.a +request.b
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b) % response.sum)
        return response
def main():
    rclpy.init()
    sum_service = Sum_service()
    rclpy.spin(sum_service)
    rclpy.shutdown()
if __name__== '__main__':
    main()

