import sys
from test_interfaces.srv import SumInt
import rclpy
from rclpy.node import Node

class Test_client(Node):
    def __init__(self):
        super().__init__("client")
        self.cli = self.create_client(SumInt,'Tong')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger.info("Cho phan hoi tu server...")
        self.req = SumInt.Request()
    def send_req(self, a, b):
        self.req.a =a
        self.req.b = b
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
def main():
        rclpy.init()
        test_client =Test_client()
        response = test_client.send_req(int(sys.argv[1]), int(sys.argv[2]))
        test_client.get_logger().info('Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))
        test_client.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()
