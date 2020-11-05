#!/usr/bin/env python
import rospy
import std_msgs


rospy.init_node('test_node')
publisher1=rospy.Publisher('test_name',std_msgs.msg.String,queue_size=10)
publisher2=rospy.Publisher('test_index',std_msgs.msg.Int32,queue_size=10)
r=rospy.Rate(10)
number=0
while not rospy.is_shutdown():
    publisher1.publish(std_msgs.msg.String("wattman"))
    publisher2.publish(number)
    number+=1
    r.sleep()


