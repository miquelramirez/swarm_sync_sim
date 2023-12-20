/****************************************************************************
 *
 *   Copyright (C) 2013-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/spx/PX4-Autopilot/msg/manual_control_setpoint.msg */


#pragma once

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

struct manual_control_setpoint_s {
	uint64_t timestamp;
	uint64_t timestamp_sample;
	float x;
	float y;
	float z;
	float r;
	float flaps;
	float aux1;
	float aux2;
	float aux3;
	float aux4;
	float aux5;
	float aux6;
	bool valid;
	uint8_t data_source;
	bool sticks_moving;
	uint8_t _padding0[1]; // required for logger



	static constexpr uint8_t SOURCE_UNKNOWN = 0;
	static constexpr uint8_t SOURCE_RC = 1;
	static constexpr uint8_t SOURCE_MAVLINK_0 = 2;
	static constexpr uint8_t SOURCE_MAVLINK_1 = 3;
	static constexpr uint8_t SOURCE_MAVLINK_2 = 4;
	static constexpr uint8_t SOURCE_MAVLINK_3 = 5;
	static constexpr uint8_t SOURCE_MAVLINK_4 = 6;
	static constexpr uint8_t SOURCE_MAVLINK_5 = 7;

};
