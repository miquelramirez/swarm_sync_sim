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

/* Auto-generated by genmsg_cpp from file /home/spx/PX4-Autopilot/msg/battery_status.msg */


#pragma once

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

struct battery_status_s {
	uint64_t timestamp;
	float voltage_v;
	float voltage_filtered_v;
	float current_a;
	float current_filtered_a;
	float current_average_a;
	float discharged_mah;
	float remaining;
	float scale;
	float time_remaining_s;
	float temperature;
	float voltage_cell_v[14];
	float max_cell_voltage_delta;
	uint32_t custom_faults;
	float average_power;
	float available_energy;
	float full_charge_capacity_wh;
	float remaining_capacity_wh;
	float design_capacity;
	float nominal_voltage;
	uint16_t capacity;
	uint16_t cycle_count;
	uint16_t average_time_to_empty;
	uint16_t serial_number;
	uint16_t manufacture_date;
	uint16_t state_of_health;
	uint16_t max_error;
	uint16_t interface_error;
	uint16_t faults;
	uint16_t average_time_to_full;
	uint16_t over_discharge_count;
	bool connected;
	uint8_t cell_count;
	uint8_t source;
	uint8_t priority;
	uint8_t id;
	bool is_powering_off;
	bool is_required;
	uint8_t warning;
	uint8_t mode;
	uint8_t _padding0[1]; // required for logger

	static constexpr uint8_t BATTERY_SOURCE_POWER_MODULE = 0;
	static constexpr uint8_t BATTERY_SOURCE_EXTERNAL = 1;
	static constexpr uint8_t BATTERY_SOURCE_ESCS = 2;
	static constexpr uint8_t BATTERY_WARNING_NONE = 0;
	static constexpr uint8_t BATTERY_WARNING_LOW = 1;
	static constexpr uint8_t BATTERY_WARNING_CRITICAL = 2;
	static constexpr uint8_t BATTERY_WARNING_EMERGENCY = 3;
	static constexpr uint8_t BATTERY_WARNING_FAILED = 4;
	static constexpr uint8_t BATTERY_STATE_UNHEALTHY = 6;
	static constexpr uint8_t BATTERY_STATE_CHARGING = 7;
	static constexpr uint8_t BATTERY_FAULT_DEEP_DISCHARGE = 0;
	static constexpr uint8_t BATTERY_FAULT_SPIKES = 1;
	static constexpr uint8_t BATTERY_FAULT_CELL_FAIL = 2;
	static constexpr uint8_t BATTERY_FAULT_OVER_CURRENT = 3;
	static constexpr uint8_t BATTERY_FAULT_OVER_TEMPERATURE = 4;
	static constexpr uint8_t BATTERY_FAULT_UNDER_TEMPERATURE = 5;
	static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_VOLTAGE = 6;
	static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_FIRMWARE = 7;
	static constexpr uint8_t BATTERY_FAULT_INCOMPATIBLE_MODEL = 8;
	static constexpr uint8_t BATTERY_FAULT_HARDWARE_FAILURE = 9;
	static constexpr uint8_t BATTERY_WARNING_OVER_TEMPERATURE = 10;
	static constexpr uint8_t BATTERY_FAULT_COUNT = 11;
	static constexpr uint8_t BATTERY_MODE_UNKNOWN = 0;
	static constexpr uint8_t BATTERY_MODE_AUTO_DISCHARGING = 1;
	static constexpr uint8_t BATTERY_MODE_HOT_SWAP = 2;
	static constexpr uint8_t BATTERY_MODE_COUNT = 3;
	static constexpr uint8_t MAX_INSTANCES = 4;

};