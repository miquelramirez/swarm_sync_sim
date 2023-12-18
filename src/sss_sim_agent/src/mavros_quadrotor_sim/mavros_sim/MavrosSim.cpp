/**
 * @file MavrosSim.cpp
 * @author Peixuan Shu (shupeixuan@qq.com)
 * @brief Simulated mavros that receives ROS topics and transfer to the
 * quadrotor dynamics and broadcast quadrotor states to ROS topics.
 * 
 * Note: This program relies on 
 * 
 * @version 1.0
 * @date 2023-11-29
 * 
 * @license BSD 3-Clause License
 * @copyright (c) 2023, Peixuan Shu
 * All rights reserved.
 * 
 */
 

#include "MavrosSim.hpp"

namespace mavros_sim
{

MavrosSim::MavrosSim(const ros::NodeHandle &nh, const ros::NodeHandle &nh_private)
    : nh_(nh), nh_private_(nh_private)
{
    /* Load mavros_sim plugins(mavlink msg -> mavros ROS msg; mavros ROS msg -> mavlink msg)*/

    // std_plugins::SetpointRawPlugin* setpoint_raw_plugin = new std_plugins::SetpointRawPlugin(); //unsafe pointer (need manual delete)
    setpoint_raw_plugin_ = std::make_unique<std_plugins::SetpointRawPlugin>();

}

/* Publish all updated mavlink messages into ROS topics (Added by Peixuan Shu) */
void MavrosSim::Publish()
{
	/* Search for mavlink streaming list and handle the updated messages */
	for (int i=0; i<MAVLINK_STREAM_NUM; ++i)
	{
		mavlink_info_s mavlink_info = px4::mavlink_stream_list[i];
		
		if (mavlink_info.updated)
		{
			handle_message(mavlink_info.msg);
			mavlink_info.updated = false; // waiting for the next update
		}
	}
}

/* Publish mavlink messages into ROS topics (Added by Peixuan Shu) */
void MavrosSim::handle_message(const mavlink_message_t &msg)
{
	switch (msg.msgid) 
    {
        /* setpoint_raw_plugin_ */
        case MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED:
            setpoint_raw_plugin_->handle_position_target_local_ned(msg);
            break;
        case MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT:
            setpoint_raw_plugin_->handle_position_target_global_int(msg);
            break;
        case MAVLINK_MSG_ID_ATTITUDE_TARGET:
            setpoint_raw_plugin_->handle_attitude_target(msg);
            break;
        
        default:
		    std::cout << "[MavrosSim::handle_message] Unknown mavlink message id: " << msg.msgid << std::endl;
		    break;
    }
}

}
