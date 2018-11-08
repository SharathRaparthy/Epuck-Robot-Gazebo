#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include<geometry_msgs/Twist.h>
#include "std_msgs/String.h"
void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
ros::NodeHandle n;
ros::Publisher pub = n.advertise<geometry_msgs::Twist>("epuck2/cmd_vel",1000);

    for (int i=0; i<msg->ranges.size(); ++i)
    {
      float r = msg->ranges[i];

     if (msg->ranges[i]<0.2886)
    {    geometry_msgs::Twist turn;
         turn.angular.z = 2;
         pub.publish(turn);
         if (msg->ranges[i]>0.2886)
{
             turn.linear.y = -0.20;
             pub.publish(turn);
}
}
     else 
{
geometry_msgs::Twist move;
move.linear.x=-0.20;
pub.publish(move);
}
    }


ros::spin();
  }
   
int main(int argc, char **argv)
{
ros::init(argc,argv,"laser_scan_subscriber");
ros::NodeHandle n;
ros::Subscriber sub = n.subscribe("scan",1000,scanCallback);
ros::spin();

return 0;

}

