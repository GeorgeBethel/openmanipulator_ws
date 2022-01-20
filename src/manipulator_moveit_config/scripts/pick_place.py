#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from math import pi
from std_msgs.msg import String
from moveit_commander.conversions import pose_to_list

#First initialize moveit_commander and a rospy node

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node("move_group_tutorial", anonymous=True)

#Instantiate a RobotCommander object. Provides information such as 
# the robot’s kinematic model and the robot’s current joint states

arm = moveit_commander.RobotCommander()

#Instantiate a PlanningSceneInterface object. This provides 
# a remote interface for getting, setting, and updating the 
# robot’s internal understanding of the surrounding world

world_scene = moveit_commander.PlanningSceneInterface()

'''
Instantiate a MoveGroupCommander object. This object is an interface to a 
planning group (group of joints). In this tutorial the group is the 
primary arm joints in the Panda robot, so we set the group’s name to “panda_arm”. 
If you are using a different robot, change this value to the name of 
your robot arm planning group. This interface can be used to plan and execute motions:

'''

group_name = "manipulator"
move_group = moveit_commander.MoveGroupCommander(group_name)

#Create a DisplayTrajectory ROS publisher which is used 
# to display trajectories in Rviz

display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path',
                                               moveit_msgs.msg.DisplayTrajectory,
                                               queue_size=20)

# We can get the name of the reference frame for this robot:
planning_frame = move_group.get_planning_frame()
print ("============ Planning frame: %s" % planning_frame)

# We can also print the name of the end-effector link for this group:
eef_link = move_group.get_end_effector_link()
print ("============ End effector link: %s" % eef_link)

# We can get a list of all the groups in the robot:
group_names = arm.get_group_names()
print ("============ Available Planning Groups:", arm.get_group_names())

# Sometimes for debugging it is useful to print the entire state of the
# robot:
print ("============ Printing robot state")
print (arm.get_current_state())
print ("")


#We can get the joint values from the group and adjust some of the values:
joint_goal = move_group.get_current_joint_values()
joint_goal[0] = 0
joint_goal[1] = -pi/4
joint_goal[2] = -pi/4
joint_goal[3] = -pi/2
joint_goal[4] = pi/2
# joint_goal[5] = pi/3
# joint_goal[6] = 0

# The go command can be called with joint values, poses, or without any
# parameters if you have already set the pose or joint target for the group
move_group.go(joint_goal, wait=True)

# Calling ``stop()`` ensures that there is no residual movement
move_group.stop()