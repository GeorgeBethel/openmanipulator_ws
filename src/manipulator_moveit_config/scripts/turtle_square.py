#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Twist
import time

def Move_turtle():
    
    square_move = Twist()

    move_base = rospy.Publisher("/turtle1/cmd_vel", Twist, queue_size = 5)
    rospy.init_node("square_move", anonymous = False)
    rate = rospy.Rate(2)

    while not rospy.is_shutdown():

        square_move.linear.x = 2.0

        move_base.publish(square_move)

        time.sleep(1)

        square_move.angular.z = 0.4

        square_move.linear.x = 0.0

        move_base.publish(square_move)

        rate.sleep()

if __name__ == '__main__':

    Move_turtle()
    
