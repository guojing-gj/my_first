#include<ros/ros.h>  
#include<pcl/point_cloud.h>  
#include<pcl_conversions/pcl_conversions.h>  
#include<sensor_msgs/PointCloud2.h>  
#include<pcl/io/pcd_io.h>

int count=0;
void lidarcallback(const sensor_msgs::PointCloud2ConstPtr& p2)
{
    pcl::PointCloud<pcl::PointXYZ> outp2;
    pcl::fromROSMsg (*p2, outp2);
    if(count==5)
    {
      pcl::io::savePCDFileASCII ("test.pcd", outp2);
      std::cerr << "Saved" << "data points to test.pcd" << std::endl;
    }
    count++;
}

 
int main(int argc,char** argv)
{
  ros::init (argc, argv, "pcd");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe ("livox/lidar", 100, lidarcallback);
  ros::spin ();
}
 
