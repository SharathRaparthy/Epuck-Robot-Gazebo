#include "ros/ros.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"
void odomCallback(const nav_msgs::Odometry::ConstPtr& odom)

{
double x_pos = odom->pose.pose.position.x;
double y_pos = odom->pose.pose.position.y;

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "location_monitor");
  ros::NodeHandle nh;
  ros::Subscriber sub_odom = nh.subscribe("/position", 1000, odomCallback);
ros::spin();
 return 0;
}
