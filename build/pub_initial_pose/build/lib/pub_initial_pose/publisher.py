import rclpy
from rclpy.node import Node
import rssi
import math
import numpy
from scipy.optimize import least_squares
from std_msgs.msg import String


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('init_pose_publisher')
        self.publisher_ = self.create_publisher(String, '/initialpose', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
    def getDist(self):
        interface = 'wlp4s0'
        rssi_scanner = rssi.RSSI_Scan(interface)

        ssids = ['NTH2','RTC Office']
        mac_router =['F0:5C:19:AD:46:93','BE:5F:A1:8F:7E:0F']
        n=0
        tong=[0]*20
        id_wifi =['']*20
        mac =['']*20
        for i in range(0,10):
            ap_info = rssi_scanner.getAPinfo(networks=False,networks_mac=mac_router,sudo=True)
            n=len(ap_info)
            signal_level =[0]*n
            frequency =[0]*n
            dist = [0]*n
            
            for j in range(0,n):
                if i ==0 :
                    id_wifi[j] = ap_info[j]['ssid']
                    mac[j] = ap_info[j]['mac'] 
                signal_level[j] = ap_info[j]['signal']
                frequency[j] = ap_info[j]['frequency']
                dist[j] = 10**((27.55-(20*math.log10(frequency[j]))-signal_level[j])/20)
                tong[j]+=dist[j]
                # print(tong)
                print( print("id thu: "+str(j)+" "+ id_wifi[j]+ "mac: "+ mac[j]))
            
            # print(ap_info)
        avg =[0]*n
        h=0
        dist2D = [0]*n
        for i in range(0,n):
            avg[i]=tong[i]/10
            dist2D[i]= math.sqrt(avg[i]**2 - h**2)
            print("dist to router id "+ id_wifi[i]+" mac: "+mac[i]+" "+str(i)+" " +str(avg[i]) +"m")
        return dist2D

    def intersectionPoint(self,p1,p2,p3):

        x1, y1, dist_1 = (p1[0], p1[1], p1[2])
        x2, y2, dist_2 = (p2[0], p2[1], p2[2])
        x3, y3, dist_3 = (p3[0], p3[1], p3[2])
        
        def eq(g):
            x, y = g

            return (
                (x - x1)**2 + (y - y1)**2 - dist_1**2,
                (x - x2)**2 + (y - y2)**2 - dist_2**2,
                (x - x3)**2 + (y - y3)**2 - dist_3**2,)
                
        guess = (x1, y1 + dist_1)

        ans = least_squares(eq, guess, ftol=None, xtol=None)

        return ans
    #     return poseR
    def timer_callback(self):
        msg = String()
        dist2D=self.getDist()
        p1=(0,0,dist2D[0])
        p2=(0,3.5,dist2D[1])
        p3=(2.4,0,dist2D[2])
    
        ans=self.intersectionPoint(p1,p2,p3)
        msg.data = str(ans.x[0]) +", "+str(ans.x[1])
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1
        rclpy.shutdown()
    

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
