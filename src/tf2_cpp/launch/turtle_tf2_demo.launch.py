from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
def generate_launch_description():
    return LaunchDescription([
        Node(package = 'turtlesim',executable ='turtlesim_node',name='sim'),
        Node(package = 'tf2_cpp',executable = 'turtle_tf2', name='broadcaster1', parameters=[{'turtlename':'turtle1'}]),
        DeclareLaunchArgument(
            'target_frame', default_value='turtle1',
            description='Target frame name.'
        ),
        Node(
            package='tf2_cpp',
            executable='turtle_tf2',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),
        Node(
            package='tf2_cpp',
            executable='turtle_tf2_listener',
            name='listener',
            parameters=[
                {'target_frame': LaunchConfiguration('target_frame')}
            ]
        ),
    ])
