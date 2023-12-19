/**
 * @file mavlink_msg_list.hpp
 * @author Peixuan Shu (shupeixuan@qq.com)
 * @brief Store the mavlink messages to simulate the send and receive of mavlink messages. 
 * 
 * Note: This program relies on 
 * 
 * @version 1.0
 * @date 2023-12-17
 * 
 * @license BSD 3-Clause License
 * @copyright (c) 2023, Peixuan Shu
 * All rights reserved.
 * 
 */

#ifndef __MAVLINK_MSG_LIST_HPP__
#define __MAVLINK_MSG_LIST_HPP__

#include <mavlink/v2.0/common/mavlink.h> // mavlink c headers from ros-noetic-mavlink


struct mavlink_info_s
{
	bool updated;
	mavlink_message_t msg;
};


namespace px4 
{ 

#define MAVLINK_STREAM_NUM 5 // number of mavlink_receive
enum class mavlink_stream_handle : uint16_t {
	ATTITUDE_QUATERNION,
	ATTITUDE_TARGET,
	HEARTBEAT,
	LOCAL_POSITION_NED,
	POSITION_TARGET_LOCAL_NED,
	Cout = MAVLINK_STREAM_NUM  // number of mavlink_stream
};
// Store the streaming mavlink messages (declaring global)
extern mavlink_info_s mavlink_stream_list[(int) mavlink_stream_handle::Cout]; // declare global


#define MAVLINK_RECEIVE_NUM 3 // number of mavlink_receive
enum class mavlink_receive_handle : uint16_t {
	SET_POSITION_TARGET_LOCAL_NED,
	SET_POSITION_TARGET_GLOBAL_INT,
	SET_ATTITUDE_TARGET,
	Cout = MAVLINK_RECEIVE_NUM 
};
// Store the receiving mavlink messages
extern mavlink_info_s mavlink_receive_list[(int) mavlink_receive_handle::Cout]; // declare global


}

#endif