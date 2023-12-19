/**
 * Copied from px4_sitl_default build.
 * Modified by Peixuan Shu
 * Store all global(extern) px4 parameters
 * Peixuan Shu
 */

#include "px4_parameters.hpp"

namespace px4 { 

// Store all global(extern) px4 parameters (Created by Peixuan Shu)
param_info_s parameters[param_num] = {

	{
		"ASPD_BETA_GATE",
		.val = { .i = 1},
	},

	{
		"ASPD_BETA_NOISE",
		.val = { .f = 0.3 },
	},

	{
		"ASPD_DO_CHECKS",
		.val = { .i = 7},
	},

	{
		"ASPD_FALLBACK_GW",
		.val = { .i = 0},
	},

	{
		"ASPD_FS_INNOV",
		.val = { .f = 5. },
	},

	{
		"ASPD_FS_INTEG",
		.val = { .f = 10. },
	},

	{
		"ASPD_FS_T_START",
		.val = { .i = -1},
	},

	{
		"ASPD_FS_T_STOP",
		.val = { .i = 2},
	},

	{
		"ASPD_PRIMARY",
		.val = { .i = 1},
	},

	{
		"ASPD_SCALE_1",
		.val = { .f = 1.0 },
	},

	{
		"ASPD_SCALE_2",
		.val = { .f = 1.0 },
	},

	{
		"ASPD_SCALE_3",
		.val = { .f = 1.0 },
	},

	{
		"ASPD_SCALE_APPLY",
		.val = { .i = 1},
	},

	{
		"ASPD_SC_P_NOISE",
		.val = { .f = 0.0001 },
	},

	{
		"ASPD_TAS_GATE",
		.val = { .i = 3},
	},

	{
		"ASPD_TAS_NOISE",
		.val = { .f = 1.4 },
	},

	{
		"ASPD_W_P_NOISE",
		.val = { .f = 0.1 },
	},

	{
		"ATT_ACC_COMP",
		.val = { .i = 1},
	},

	{
		"ATT_BIAS_MAX",
		.val = { .f = 0.05 },
	},

	{
		"ATT_EXT_HDG_M",
		.val = { .i = 0},
	},

	{
		"ATT_MAG_DECL",
		.val = { .f = 0.0 },
	},

	{
		"ATT_MAG_DECL_A",
		.val = { .i = 1},
	},

	{
		"ATT_W_ACC",
		.val = { .f = 0.2 },
	},

	{
		"ATT_W_EXT_HDG",
		.val = { .f = 0.1 },
	},

	{
		"ATT_W_GYRO_BIAS",
		.val = { .f = 0.1 },
	},

	{
		"ATT_W_MAG",
		.val = { .f = 0.1 },
	},

	{
		"BAT1_CAPACITY",
		.val = { .f = -1.0 },
	},

	{
		"BAT1_N_CELLS",
		.val = { .i = 0},
	},

	{
		"BAT1_R_INTERNAL",
		.val = { .f = -1.0 },
	},

	{
		"BAT1_SOURCE",
		.val = { .i = 0},
	},

	{
		"BAT1_V_CHARGED",
		.val = { .f = 4.05 },
	},

	{
		"BAT1_V_EMPTY",
		.val = { .f = 3.5 },
	},

	{
		"BAT1_V_LOAD_DROP",
		.val = { .f = 0.3 },
	},

	{
		"BAT2_CAPACITY",
		.val = { .f = -1.0 },
	},

	{
		"BAT2_N_CELLS",
		.val = { .i = 0},
	},

	{
		"BAT2_R_INTERNAL",
		.val = { .f = -1.0 },
	},

	{
		"BAT2_SOURCE",
		.val = { .i = -1},
	},

	{
		"BAT2_V_CHARGED",
		.val = { .f = 4.05 },
	},

	{
		"BAT2_V_EMPTY",
		.val = { .f = 3.5 },
	},

	{
		"BAT2_V_LOAD_DROP",
		.val = { .f = 0.3 },
	},

	{
		"BAT_AVRG_CURRENT",
		.val = { .f = 15.0 },
	},

	{
		"BAT_CRIT_THR",
		.val = { .f = 0.07 },
	},

	{
		"BAT_EMERGEN_THR",
		.val = { .f = 0.05 },
	},

	{
		"BAT_LOW_THR",
		.val = { .f = 0.15 },
	},

	{
		"BAT_N_CELLS",
		.val = { .i = 3},
	},

	{
		"BAT_V_CHARGED",
		.val = { .f = 4.05 },
	},

	{
		"BAT_V_EMPTY",
		.val = { .f = 3.5 },
	},

	{
		"BAT_V_LOAD_DROP",
		.val = { .f = 0.3 },
	},

	{
		"CAL_ACC0_ID",
		.val = { .i = 0},
	},

	{
		"CAL_ACC0_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_ACC0_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_ACC0_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC0_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC0_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC0_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC0_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC0_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC1_ID",
		.val = { .i = 0},
	},

	{
		"CAL_ACC1_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_ACC1_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_ACC1_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC1_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC1_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC1_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC1_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC1_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC2_ID",
		.val = { .i = 0},
	},

	{
		"CAL_ACC2_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_ACC2_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_ACC2_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC2_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC2_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC2_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC2_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC2_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC3_ID",
		.val = { .i = 0},
	},

	{
		"CAL_ACC3_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_ACC3_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_ACC3_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC3_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC3_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC3_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_ACC3_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_ACC3_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_AIR_CMODEL",
		.val = { .i = 0},
	},

	{
		"CAL_AIR_TUBED_MM",
		.val = { .f = 1.5 },
	},

	{
		"CAL_AIR_TUBELEN",
		.val = { .f = 0.2 },
	},

	{
		"CAL_BARO0_ID",
		.val = { .i = 0},
	},

	{
		"CAL_BARO0_OFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_BARO0_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_BARO1_ID",
		.val = { .i = 0},
	},

	{
		"CAL_BARO1_OFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_BARO1_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_BARO2_ID",
		.val = { .i = 0},
	},

	{
		"CAL_BARO2_OFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_BARO2_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_BARO3_ID",
		.val = { .i = 0},
	},

	{
		"CAL_BARO3_OFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_BARO3_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO0_ID",
		.val = { .i = 0},
	},

	{
		"CAL_GYRO0_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO0_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO0_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO0_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO0_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO1_ID",
		.val = { .i = 0},
	},

	{
		"CAL_GYRO1_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO1_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO1_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO1_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO1_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO2_ID",
		.val = { .i = 0},
	},

	{
		"CAL_GYRO2_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO2_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO2_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO2_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO2_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO3_ID",
		.val = { .i = 0},
	},

	{
		"CAL_GYRO3_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO3_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_GYRO3_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO3_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_GYRO3_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_ID",
		.val = { .i = 0},
	},

	{
		"CAL_MAG0_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_MAG0_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_MAG0_XCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_XODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG0_YCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_YODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG0_ZCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_ZODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG0_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG1_ID",
		.val = { .i = 0},
	},

	{
		"CAL_MAG1_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_MAG1_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_MAG1_XCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_XODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG1_YCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_YODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG1_ZCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_ZODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG1_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG2_ID",
		.val = { .i = 0},
	},

	{
		"CAL_MAG2_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_MAG2_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_MAG2_XCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_XODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG2_YCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_YODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG2_ZCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_ZODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG2_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG3_ID",
		.val = { .i = 0},
	},

	{
		"CAL_MAG3_PRIO",
		.val = { .i = -1},
	},

	{
		"CAL_MAG3_ROT",
		.val = { .i = -1},
	},

	{
		"CAL_MAG3_XCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_XODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_XOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_XSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG3_YCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_YODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_YOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_YSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG3_ZCOMP",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_ZODIAG",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_ZOFF",
		.val = { .f = 0.0 },
	},

	{
		"CAL_MAG3_ZSCALE",
		.val = { .f = 1.0 },
	},

	{
		"CAL_MAG_COMP_TYP",
		.val = { .i = 0},
	},

	{
		"CAL_MAG_ROT_AUTO",
		.val = { .i = 1},
	},

	{
		"CAL_MAG_SIDES",
		.val = { .i = 63},
	},

	{
		"CA_AIRFRAME",
		.val = { .i = 0},
	},

	{
		"CA_METHOD",
		.val = { .i = 2},
	},

	{
		"CA_R0_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R1_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R2_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R3_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R4_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R5_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R6_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_R7_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR0_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR0_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR0_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR0_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR1_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR1_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR1_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR1_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR1_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR1_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR1_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR1_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR1_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR2_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR2_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR2_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR2_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR2_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR2_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR2_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR2_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR2_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR3_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR3_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR3_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR3_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR3_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR3_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR3_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR3_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR3_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR4_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR4_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR4_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR4_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR4_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR4_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR4_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR4_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR4_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR5_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR5_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR5_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR5_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR5_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR5_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR5_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR5_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR5_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR6_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR6_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR6_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR6_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR6_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR6_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR6_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR6_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR6_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR7_AX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR7_AY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR7_AZ",
		.val = { .f = -1.0 },
	},

	{
		"CA_ROTOR7_CT",
		.val = { .f = 6.5 },
	},

	{
		"CA_ROTOR7_KM",
		.val = { .f = 0.05 },
	},

	{
		"CA_ROTOR7_PX",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR7_PY",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR7_PZ",
		.val = { .f = 0.0 },
	},

	{
		"CA_ROTOR7_TILT",
		.val = { .i = 0},
	},

	{
		"CA_ROTOR_COUNT",
		.val = { .i = 0},
	},

	{
		"CA_R_REV",
		.val = { .i = 0},
	},

	{
		"CA_SV0_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV1_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV2_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV3_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV4_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV5_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV6_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV7_SLEW",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS0_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS0_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS0_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS0_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS0_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS1_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS1_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS1_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS1_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS1_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS2_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS2_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS2_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS2_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS2_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS3_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS3_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS3_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS3_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS3_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS4_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS4_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS4_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS4_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS4_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS5_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS5_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS5_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS5_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS5_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS6_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS6_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS6_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS6_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS6_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS7_TRIM",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS7_TRQ_P",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS7_TRQ_R",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS7_TRQ_Y",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_CS7_TYPE",
		.val = { .i = 1},
	},

	{
		"CA_SV_CS_COUNT",
		.val = { .i = 0},
	},

	{
		"CA_SV_TL0_CT",
		.val = { .i = 1},
	},

	{
		"CA_SV_TL0_MAXA",
		.val = { .f = 90.0 },
	},

	{
		"CA_SV_TL0_MINA",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_TL0_TD",
		.val = { .i = 0},
	},

	{
		"CA_SV_TL1_CT",
		.val = { .i = 1},
	},

	{
		"CA_SV_TL1_MAXA",
		.val = { .f = 90.0 },
	},

	{
		"CA_SV_TL1_MINA",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_TL1_TD",
		.val = { .i = 0},
	},

	{
		"CA_SV_TL2_CT",
		.val = { .i = 1},
	},

	{
		"CA_SV_TL2_MAXA",
		.val = { .f = 90.0 },
	},

	{
		"CA_SV_TL2_MINA",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_TL2_TD",
		.val = { .i = 0},
	},

	{
		"CA_SV_TL3_CT",
		.val = { .i = 1},
	},

	{
		"CA_SV_TL3_MAXA",
		.val = { .f = 90.0 },
	},

	{
		"CA_SV_TL3_MINA",
		.val = { .f = 0.0 },
	},

	{
		"CA_SV_TL3_TD",
		.val = { .i = 0},
	},

	{
		"CA_SV_TL_COUNT",
		.val = { .i = 0},
	},

	{
		"CBRK_AIRSPD_CHK",
		.val = { .i = 0},
	},

	{
		"CBRK_BUZZER",
		.val = { .i = 0},
	},

	{
		"CBRK_ENGINEFAIL",
		.val = { .i = 284953},
	},

	{
		"CBRK_FLIGHTTERM",
		.val = { .i = 121212},
	},

	{
		"CBRK_IO_SAFETY",
		.val = { .i = 22027},
	},

	{
		"CBRK_RATE_CTRL",
		.val = { .i = 0},
	},

	{
		"CBRK_SUPPLY_CHK",
		.val = { .i = 0},
	},

	{
		"CBRK_USB_CHK",
		.val = { .i = 197848},
	},

	{
		"CBRK_VELPOSERR",
		.val = { .i = 0},
	},

	{
		"CBRK_VTOLARMING",
		.val = { .i = 0},
	},

	{
		"COM_ARM_ARSP_EN",
		.val = { .i = 1},
	},

	{
		"COM_ARM_AUTH_ID",
		.val = { .i = 10},
	},

	{
		"COM_ARM_AUTH_MET",
		.val = { .i = 0},
	},

	{
		"COM_ARM_AUTH_REQ",
		.val = { .i = 0},
	},

	{
		"COM_ARM_AUTH_TO",
		.val = { .f = 1 },
	},

	{
		"COM_ARM_CHK_ESCS",
		.val = { .i = 0},
	},

	{
		"COM_ARM_EKF_HGT",
		.val = { .f = 1.0 },
	},

	{
		"COM_ARM_EKF_POS",
		.val = { .f = 0.5 },
	},

	{
		"COM_ARM_EKF_VEL",
		.val = { .f = 0.5 },
	},

	{
		"COM_ARM_EKF_YAW",
		.val = { .f = 0.5 },
	},

	{
		"COM_ARM_IMU_ACC",
		.val = { .f = 0.7 },
	},

	{
		"COM_ARM_IMU_GYR",
		.val = { .f = 0.25 },
	},

	{
		"COM_ARM_MAG_ANG",
		.val = { .i = 45},
	},

	{
		"COM_ARM_MAG_STR",
		.val = { .i = 2},
	},

	{
		"COM_ARM_MIS_REQ",
		.val = { .i = 0},
	},

	{
		"COM_ARM_SDCARD",
		.val = { .i = 1},
	},

	{
		"COM_ARM_SWISBTN",
		.val = { .i = 0},
	},

	{
		"COM_ARM_WO_GPS",
		.val = { .i = 1},
	},

	{
		"COM_BAT_ACT_T",
		.val = { .f = 10.0 },
	},

	{
		"COM_CPU_MAX",
		.val = { .f = 90.0 },
	},

	{
		"COM_DISARM_LAND",
		.val = { .f = 2.0 },
	},

	{
		"COM_DISARM_PRFLT",
		.val = { .f = 10.0 },
	},

	{
		"COM_DL_LOSS_T",
		.val = { .i = 10},
	},

	{
		"COM_EF_C2T",
		.val = { .f = 5.0 },
	},

	{
		"COM_EF_THROT",
		.val = { .f = 0.5 },
	},

	{
		"COM_EF_TIME",
		.val = { .f = 10.0 },
	},

	{
		"COM_FLIGHT_UUID",
		.val = { .i = 0},
	},

	{
		"COM_FLTMODE1",
		.val = { .i = -1},
	},

	{
		"COM_FLTMODE2",
		.val = { .i = -1},
	},

	{
		"COM_FLTMODE3",
		.val = { .i = -1},
	},

	{
		"COM_FLTMODE4",
		.val = { .i = -1},
	},

	{
		"COM_FLTMODE5",
		.val = { .i = -1},
	},

	{
		"COM_FLTMODE6",
		.val = { .i = -1},
	},

	{
		"COM_FLT_PROFILE",
		.val = { .i = 0},
	},

	{
		"COM_FORCE_SAFETY",
		.val = { .i = 0},
	},

	{
		"COM_HLDL_LOSS_T",
		.val = { .i = 120},
	},

	{
		"COM_HLDL_REG_T",
		.val = { .i = 0},
	},

	{
		"COM_HOME_EN",
		.val = { .i = 1},
	},

	{
		"COM_HOME_IN_AIR",
		.val = { .i = 0},
	},

	{
		"COM_IMB_PROP_ACT",
		.val = { .i = 0},
	},

	{
		"COM_KILL_DISARM",
		.val = { .f = 5.0 },
	},

	{
		"COM_LKDOWN_TKO",
		.val = { .f = 3.0 },
	},

	{
		"COM_LOW_BAT_ACT",
		.val = { .i = 0},
	},

	{
		"COM_MOT_TEST_EN",
		.val = { .i = 1},
	},

	{
		"COM_OBC_LOSS_T",
		.val = { .f = 5.0 },
	},

	{
		"COM_OBL_ACT",
		.val = { .i = 0},
	},

	{
		"COM_OBL_RC_ACT",
		.val = { .i = 0},
	},

	{
		"COM_OBS_AVOID",
		.val = { .i = 0},
	},

	{
		"COM_OF_LOSS_T",
		.val = { .f = 1.0 },
	},

	{
		"COM_PARACHUTE",
		.val = { .i = 0},
	},

	{
		"COM_POSCTL_NAVL",
		.val = { .i = 0},
	},

	{
		"COM_POS_FS_DELAY",
		.val = { .i = 1},
	},

	{
		"COM_POS_FS_EPH",
		.val = { .f = 5 },
	},

	{
		"COM_POS_FS_EPV",
		.val = { .f = 10 },
	},

	{
		"COM_POWER_COUNT",
		.val = { .i = 1},
	},

	{
		"COM_PREARM_MODE",
		.val = { .i = 0},
	},

	{
		"COM_QC_ACT",
		.val = { .i = 0},
	},

	{
		"COM_RCL_ACT_T",
		.val = { .f = 15.0 },
	},

	{
		"COM_RCL_EXCEPT",
		.val = { .i = 0},
	},

	{
		"COM_RC_ARM_HYST",
		.val = { .i = 1000},
	},

	{
		"COM_RC_IN_MODE",
		.val = { .i = 3},
	},

	{
		"COM_RC_LOSS_T",
		.val = { .f = 0.5 },
	},

	{
		"COM_RC_OVERRIDE",
		.val = { .i = 1},
	},

	{
		"COM_RC_STICK_OV",
		.val = { .f = 30.0 },
	},

	{
		"COM_TAKEOFF_ACT",
		.val = { .i = 0},
	},

	{
		"COM_VEL_FS_EVH",
		.val = { .f = 1 },
	},

	{
		"COM_WIND_WARN",
		.val = { .f = -1. },
	},

	{
		"CP_DELAY",
		.val = { .f = 0.4 },
	},

	{
		"CP_DIST",
		.val = { .f = -1.0 },
	},

	{
		"CP_GO_NO_DATA",
		.val = { .i = 0},
	},

	{
		"CP_GUIDE_ANG",
		.val = { .f = 30. },
	},

	{
		"EKF2_ABIAS_INIT",
		.val = { .f = 0.2 },
	},

	{
		"EKF2_ABL_ACCLIM",
		.val = { .f = 25.0 },
	},

	{
		"EKF2_ABL_GYRLIM",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_ABL_LIM",
		.val = { .f = 0.4 },
	},

	{
		"EKF2_ABL_TAU",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_ACC_B_NOISE",
		.val = { .f = 3.0e-3 },
	},

	{
		"EKF2_ACC_NOISE",
		.val = { .f = 3.5e-1 },
	},

	{
		"EKF2_AID_MASK",
		.val = { .i = 1},
	},

	{
		"EKF2_ANGERR_INIT",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_ARSP_THR",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_ASPD_MAX",
		.val = { .f = 20.0 },
	},

	{
		"EKF2_ASP_DELAY",
		.val = { .f = 100 },
	},

	{
		"EKF2_AVEL_DELAY",
		.val = { .f = 5 },
	},

	{
		"EKF2_BARO_DELAY",
		.val = { .f = 0 },
	},

	{
		"EKF2_BARO_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_BARO_NOISE",
		.val = { .f = 3.5 },
	},

	{
		"EKF2_BCOEF_X",
		.val = { .f = 100.0 },
	},

	{
		"EKF2_BCOEF_Y",
		.val = { .f = 100.0 },
	},

	{
		"EKF2_BETA_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_BETA_NOISE",
		.val = { .f = 0.3 },
	},

	{
		"EKF2_DECL_TYPE",
		.val = { .i = 7},
	},

	{
		"EKF2_DRAG_NOISE",
		.val = { .f = 2.5 },
	},

	{
		"EKF2_EAS_NOISE",
		.val = { .f = 1.4 },
	},

	{
		"EKF2_EVA_NOISE",
		.val = { .f = 0.05 },
	},

	{
		"EKF2_EVP_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_EVP_NOISE",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_EVV_GATE",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_EVV_NOISE",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_EV_DELAY",
		.val = { .f = 175 },
	},

	{
		"EKF2_EV_NOISE_MD",
		.val = { .i = 0},
	},

	{
		"EKF2_EV_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_EV_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_EV_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_FUSE_BETA",
		.val = { .i = 0},
	},

	{
		"EKF2_GBIAS_INIT",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_GND_EFF_DZ",
		.val = { .f = 4.0 },
	},

	{
		"EKF2_GND_MAX_HGT",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_GPS_CHECK",
		.val = { .i = 245},
	},

	{
		"EKF2_GPS_DELAY",
		.val = { .f = 110 },
	},

	{
		"EKF2_GPS_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_GPS_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_GPS_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_GPS_P_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_GPS_P_NOISE",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_GPS_V_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_GPS_V_NOISE",
		.val = { .f = 0.3 },
	},

	{
		"EKF2_GSF_TAS",
		.val = { .f = 15.0 },
	},

	{
		"EKF2_GYR_B_NOISE",
		.val = { .f = 1.0e-3 },
	},

	{
		"EKF2_GYR_NOISE",
		.val = { .f = 1.5e-2 },
	},

	{
		"EKF2_HDG_GATE",
		.val = { .f = 2.6 },
	},

	{
		"EKF2_HEAD_NOISE",
		.val = { .f = 0.3 },
	},

	{
		"EKF2_HGT_MODE",
		.val = { .i = 0},
	},

	{
		"EKF2_IMU_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_IMU_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_IMU_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_MAG_ACCLIM",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_MAG_B_NOISE",
		.val = { .f = 1.0e-4 },
	},

	{
		"EKF2_MAG_CHECK",
		.val = { .i = 1},
	},

	{
		"EKF2_MAG_DECL",
		.val = { .f = 0 },
	},

	{
		"EKF2_MAG_DELAY",
		.val = { .f = 0 },
	},

	{
		"EKF2_MAG_E_NOISE",
		.val = { .f = 1.0e-3 },
	},

	{
		"EKF2_MAG_GATE",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_MAG_NOISE",
		.val = { .f = 5.0e-2 },
	},

	{
		"EKF2_MAG_TYPE",
		.val = { .i = 0},
	},

	{
		"EKF2_MAG_YAWLIM",
		.val = { .f = 0.25 },
	},

	{
		"EKF2_MCOEF",
		.val = { .f = 0.15 },
	},

	{
		"EKF2_MIN_RNG",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_MULTI_IMU",
		.val = { .i = 0},
	},

	{
		"EKF2_MULTI_MAG",
		.val = { .i = 0},
	},

	{
		"EKF2_NOAID_NOISE",
		.val = { .f = 10.0 },
	},

	{
		"EKF2_NOAID_TOUT",
		.val = { .i = 5000000},
	},

	{
		"EKF2_OF_DELAY",
		.val = { .f = 20 },
	},

	{
		"EKF2_OF_GATE",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_OF_N_MAX",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_OF_N_MIN",
		.val = { .f = 0.15 },
	},

	{
		"EKF2_OF_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_OF_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_OF_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_OF_QMIN",
		.val = { .i = 1},
	},

	{
		"EKF2_PCOEF_XN",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_PCOEF_XP",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_PCOEF_YN",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_PCOEF_YP",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_PCOEF_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_PREDICT_US",
		.val = { .i = 10000},
	},

	{
		"EKF2_REQ_EPH",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_REQ_EPV",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_REQ_GPS_H",
		.val = { .f = 10.0 },
	},

	{
		"EKF2_REQ_HDRIFT",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_REQ_NSATS",
		.val = { .i = 6},
	},

	{
		"EKF2_REQ_PDOP",
		.val = { .f = 2.5 },
	},

	{
		"EKF2_REQ_SACC",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_REQ_VDRIFT",
		.val = { .f = 0.2 },
	},

	{
		"EKF2_RNG_AID",
		.val = { .i = 1},
	},

	{
		"EKF2_RNG_A_HMAX",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_RNG_A_IGATE",
		.val = { .f = 1.0 },
	},

	{
		"EKF2_RNG_A_VMAX",
		.val = { .f = 1.0 },
	},

	{
		"EKF2_RNG_DELAY",
		.val = { .f = 5 },
	},

	{
		"EKF2_RNG_GATE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_RNG_K_GATE",
		.val = { .f = 1.0 },
	},

	{
		"EKF2_RNG_NOISE",
		.val = { .f = 0.1 },
	},

	{
		"EKF2_RNG_PITCH",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_RNG_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_RNG_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_RNG_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"EKF2_RNG_QLTY_T",
		.val = { .f = 1.0 },
	},

	{
		"EKF2_RNG_SFE",
		.val = { .f = 0.05 },
	},

	{
		"EKF2_SEL_ERR_RED",
		.val = { .f = 0.2 },
	},

	{
		"EKF2_SEL_IMU_ACC",
		.val = { .f = 1.0 },
	},

	{
		"EKF2_SEL_IMU_ANG",
		.val = { .f = 15.0 },
	},

	{
		"EKF2_SEL_IMU_RAT",
		.val = { .f = 7.0 },
	},

	{
		"EKF2_SEL_IMU_VEL",
		.val = { .f = 2.0 },
	},

	{
		"EKF2_SYNT_MAG_Z",
		.val = { .i = 0},
	},

	{
		"EKF2_TAS_GATE",
		.val = { .f = 3.0 },
	},

	{
		"EKF2_TAU_POS",
		.val = { .f = 0.25 },
	},

	{
		"EKF2_TAU_VEL",
		.val = { .f = 0.25 },
	},

	{
		"EKF2_TERR_GRAD",
		.val = { .f = 0.5 },
	},

	{
		"EKF2_TERR_MASK",
		.val = { .i = 3},
	},

	{
		"EKF2_TERR_NOISE",
		.val = { .f = 5.0 },
	},

	{
		"EKF2_WIND_NOISE",
		.val = { .f = 1.0e-1 },
	},

	{
		"EV_TSK_RC_LOSS",
		.val = { .i = 0},
	},

	{
		"EV_TSK_STAT_DIS",
		.val = { .i = 0},
	},

	{
		"EXFW_HDNG_P",
		.val = { .f = 0.1 },
	},

	{
		"EXFW_PITCH_P",
		.val = { .f = 0.2 },
	},

	{
		"EXFW_ROLL_P",
		.val = { .f = 0.2 },
	},

	{
		"FD_ESCS_EN",
		.val = { .i = 1},
	},

	{
		"FD_EXT_ATS_EN",
		.val = { .i = 0},
	},

	{
		"FD_EXT_ATS_TRIG",
		.val = { .i = 1900},
	},

	{
		"FD_FAIL_P",
		.val = { .i = 60},
	},

	{
		"FD_FAIL_P_TTRI",
		.val = { .f = 0.3 },
	},

	{
		"FD_FAIL_R",
		.val = { .i = 60},
	},

	{
		"FD_FAIL_R_TTRI",
		.val = { .f = 0.3 },
	},

	{
		"FD_IMB_PROP_THR",
		.val = { .i = 30},
	},

	{
		"FW_ACRO_X_MAX",
		.val = { .f = 90 },
	},

	{
		"FW_ACRO_Y_MAX",
		.val = { .f = 90 },
	},

	{
		"FW_ACRO_Z_MAX",
		.val = { .f = 45 },
	},

	{
		"FW_AIRSPD_MAX",
		.val = { .f = 20.0 },
	},

	{
		"FW_AIRSPD_MIN",
		.val = { .f = 10.0 },
	},

	{
		"FW_AIRSPD_STALL",
		.val = { .f = 7.0 },
	},

	{
		"FW_AIRSPD_TRIM",
		.val = { .f = 15.0 },
	},

	{
		"FW_ARSP_MODE",
		.val = { .i = 0},
	},

	{
		"FW_ARSP_SCALE_EN",
		.val = { .i = 1},
	},

	{
		"FW_AT_APPLY",
		.val = { .i = 2},
	},

	{
		"FW_AT_AXES",
		.val = { .i = 3},
	},

	{
		"FW_AT_START",
		.val = { .i = 0},
	},

	{
		"FW_AT_SYSID_AMP",
		.val = { .f = 1.0 },
	},

	{
		"FW_BAT_SCALE_EN",
		.val = { .i = 0},
	},

	{
		"FW_CLMBOUT_DIFF",
		.val = { .f = 10.0 },
	},

	{
		"FW_DTRIM_P_FLPS",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_P_VMAX",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_P_VMIN",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_R_FLPS",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_R_VMAX",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_R_VMIN",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_Y_VMAX",
		.val = { .f = 0.0 },
	},

	{
		"FW_DTRIM_Y_VMIN",
		.val = { .f = 0.0 },
	},

	{
		"FW_FLAPERON_SCL",
		.val = { .f = 0.0 },
	},

	{
		"FW_FLAPS_LND_SCL",
		.val = { .f = 1.0 },
	},

	{
		"FW_FLAPS_SCL",
		.val = { .f = 1.0 },
	},

	{
		"FW_FLAPS_TO_SCL",
		.val = { .f = 0.0 },
	},

	{
		"FW_GND_SPD_MIN",
		.val = { .f = 5.0 },
	},

	{
		"FW_GPSF_LT",
		.val = { .i = 30},
	},

	{
		"FW_GPSF_R",
		.val = { .f = 15.0 },
	},

	{
		"FW_L1_DAMPING",
		.val = { .f = 0.75 },
	},

	{
		"FW_L1_PERIOD",
		.val = { .f = 20.0 },
	},

	{
		"FW_L1_R_SLEW_MAX",
		.val = { .f = 90.0 },
	},

	{
		"FW_LND_AIRSPD_SC",
		.val = { .f = 1.3 },
	},

	{
		"FW_LND_ANG",
		.val = { .f = 5.0 },
	},

	{
		"FW_LND_EARLYCFG",
		.val = { .i = 0},
	},

	{
		"FW_LND_FLALT",
		.val = { .f = 3.0 },
	},

	{
		"FW_LND_FL_PMAX",
		.val = { .f = 15.0 },
	},

	{
		"FW_LND_FL_PMIN",
		.val = { .f = 2.5 },
	},

	{
		"FW_LND_HHDIST",
		.val = { .f = 15.0 },
	},

	{
		"FW_LND_HVIRT",
		.val = { .f = 10.0 },
	},

	{
		"FW_LND_THRTC_SC",
		.val = { .f = 1.0 },
	},

	{
		"FW_LND_TLALT",
		.val = { .f = -1.0 },
	},

	{
		"FW_LND_USETER",
		.val = { .i = 0},
	},

	{
		"FW_MAN_P_MAX",
		.val = { .f = 45.0 },
	},

	{
		"FW_MAN_P_SC",
		.val = { .f = 1.0 },
	},

	{
		"FW_MAN_R_MAX",
		.val = { .f = 45.0 },
	},

	{
		"FW_MAN_R_SC",
		.val = { .f = 1.0 },
	},

	{
		"FW_MAN_Y_SC",
		.val = { .f = 1.0 },
	},

	{
		"FW_POS_STK_CONF",
		.val = { .i = 2},
	},

	{
		"FW_PR_FF",
		.val = { .f = 0.5 },
	},

	{
		"FW_PR_I",
		.val = { .f = 0.1 },
	},

	{
		"FW_PR_IMAX",
		.val = { .f = 0.4 },
	},

	{
		"FW_PR_P",
		.val = { .f = 0.08 },
	},

	{
		"FW_PSP_OFF",
		.val = { .f = 0.0 },
	},

	{
		"FW_P_LIM_MAX",
		.val = { .f = 45.0 },
	},

	{
		"FW_P_LIM_MIN",
		.val = { .f = -45.0 },
	},

	{
		"FW_P_RMAX_NEG",
		.val = { .f = 60.0 },
	},

	{
		"FW_P_RMAX_POS",
		.val = { .f = 60.0 },
	},

	{
		"FW_P_TC",
		.val = { .f = 0.4 },
	},

	{
		"FW_RLL_TO_YAW_FF",
		.val = { .f = 0.0 },
	},

	{
		"FW_RR_FF",
		.val = { .f = 0.5 },
	},

	{
		"FW_RR_I",
		.val = { .f = 0.1 },
	},

	{
		"FW_RR_IMAX",
		.val = { .f = 0.2 },
	},

	{
		"FW_RR_P",
		.val = { .f = 0.05 },
	},

	{
		"FW_R_LIM",
		.val = { .f = 50.0 },
	},

	{
		"FW_R_RMAX",
		.val = { .f = 70.0 },
	},

	{
		"FW_R_TC",
		.val = { .f = 0.4 },
	},

	{
		"FW_THR_ALT_SCL",
		.val = { .f = 0.0 },
	},

	{
		"FW_THR_CRUISE",
		.val = { .f = 0.6 },
	},

	{
		"FW_THR_IDLE",
		.val = { .f = 0.15 },
	},

	{
		"FW_THR_LND_MAX",
		.val = { .f = 1.0 },
	},

	{
		"FW_THR_MAX",
		.val = { .f = 1.0 },
	},

	{
		"FW_THR_MIN",
		.val = { .f = 0.0 },
	},

	{
		"FW_THR_SLEW_MAX",
		.val = { .f = 0.0 },
	},

	{
		"FW_TKO_PITCH_MIN",
		.val = { .f = 10.0 },
	},

	{
		"FW_T_ALT_TC",
		.val = { .f = 5.0 },
	},

	{
		"FW_T_CLMB_MAX",
		.val = { .f = 5.0 },
	},

	{
		"FW_T_CLMB_R_SP",
		.val = { .f = 3.0 },
	},

	{
		"FW_T_HRATE_FF",
		.val = { .f = 0.3 },
	},

	{
		"FW_T_I_GAIN_PIT",
		.val = { .f = 0.1 },
	},

	{
		"FW_T_I_GAIN_THR",
		.val = { .f = 0.3 },
	},

	{
		"FW_T_PTCH_DAMP",
		.val = { .f = 0.1 },
	},

	{
		"FW_T_RLL2THR",
		.val = { .f = 15.0 },
	},

	{
		"FW_T_SEB_R_FF",
		.val = { .f = 1.0 },
	},

	{
		"FW_T_SINK_MAX",
		.val = { .f = 5.0 },
	},

	{
		"FW_T_SINK_MIN",
		.val = { .f = 2.0 },
	},

	{
		"FW_T_SINK_R_SP",
		.val = { .f = 2.0 },
	},

	{
		"FW_T_SPDWEIGHT",
		.val = { .f = 1.0 },
	},

	{
		"FW_T_SPD_OMEGA",
		.val = { .f = 2.0 },
	},

	{
		"FW_T_STE_R_TC",
		.val = { .f = 0.4 },
	},

	{
		"FW_T_TAS_R_TC",
		.val = { .f = 0.2 },
	},

	{
		"FW_T_TAS_TC",
		.val = { .f = 5.0 },
	},

	{
		"FW_T_THR_DAMP",
		.val = { .f = 0.1 },
	},

	{
		"FW_T_VERT_ACC",
		.val = { .f = 7.0 },
	},

	{
		"FW_USE_NPFG",
		.val = { .i = 0},
	},

	{
		"FW_WR_FF",
		.val = { .f = 0.2 },
	},

	{
		"FW_WR_I",
		.val = { .f = 0.1 },
	},

	{
		"FW_WR_IMAX",
		.val = { .f = 1.0 },
	},

	{
		"FW_WR_P",
		.val = { .f = 0.5 },
	},

	{
		"FW_W_EN",
		.val = { .i = 0},
	},

	{
		"FW_W_RMAX",
		.val = { .f = 30.0 },
	},

	{
		"FW_YR_FF",
		.val = { .f = 0.3 },
	},

	{
		"FW_YR_I",
		.val = { .f = 0.1 },
	},

	{
		"FW_YR_IMAX",
		.val = { .f = 0.2 },
	},

	{
		"FW_YR_P",
		.val = { .f = 0.05 },
	},

	{
		"FW_Y_RMAX",
		.val = { .f = 50.0 },
	},

	{
		"GF_ACTION",
		.val = { .i = 2},
	},

	{
		"GF_ALTMODE",
		.val = { .i = 0},
	},

	{
		"GF_COUNT",
		.val = { .i = -1},
	},

	{
		"GF_MAX_HOR_DIST",
		.val = { .f = 0 },
	},

	{
		"GF_MAX_VER_DIST",
		.val = { .f = 0 },
	},

	{
		"GF_PREDICT",
		.val = { .i = 1},
	},

	{
		"GF_SOURCE",
		.val = { .i = 0},
	},

	{
		"GND_L1_DAMPING",
		.val = { .f = 0.75 },
	},

	{
		"GND_L1_DIST",
		.val = { .f = 1.0 },
	},

	{
		"GND_L1_PERIOD",
		.val = { .f = 5.0 },
	},

	{
		"GND_MAN_Y_MAX",
		.val = { .f = 150.0 },
	},

	{
		"GND_MAX_ANG",
		.val = { .f = 0.7854 },
	},

	{
		"GND_SPEED_D",
		.val = { .f = 0.001 },
	},

	{
		"GND_SPEED_I",
		.val = { .f = 3.0 },
	},

	{
		"GND_SPEED_IMAX",
		.val = { .f = 1.0 },
	},

	{
		"GND_SPEED_MAX",
		.val = { .f = 10.0 },
	},

	{
		"GND_SPEED_P",
		.val = { .f = 2.0 },
	},

	{
		"GND_SPEED_THR_SC",
		.val = { .f = 1.0 },
	},

	{
		"GND_SPEED_TRIM",
		.val = { .f = 3.0 },
	},

	{
		"GND_SP_CTRL_MODE",
		.val = { .i = 1},
	},

	{
		"GND_THR_CRUISE",
		.val = { .f = 0.1 },
	},

	{
		"GND_THR_MAX",
		.val = { .f = 0.3 },
	},

	{
		"GND_THR_MIN",
		.val = { .f = 0.0 },
	},

	{
		"GND_WHEEL_BASE",
		.val = { .f = 0.31 },
	},

	{
		"GPS_1_GNSS",
		.val = { .i = 0},
	},

	{
		"GPS_1_PROTOCOL",
		.val = { .i = 1},
	},

	{
		"GPS_2_GNSS",
		.val = { .i = 0},
	},

	{
		"GPS_2_PROTOCOL",
		.val = { .i = 1},
	},

	{
		"GPS_DUMP_COMM",
		.val = { .i = 0},
	},

	{
		"GPS_SAT_INFO",
		.val = { .i = 0},
	},

	{
		"GPS_UBX_DYNMODEL",
		.val = { .i = 7},
	},

	{
		"GPS_UBX_MODE",
		.val = { .i = 0},
	},

	{
		"GPS_YAW_OFFSET",
		.val = { .f = 0. },
	},

	{
		"HTE_ACC_GATE",
		.val = { .f = 3.0 },
	},

	{
		"HTE_HT_ERR_INIT",
		.val = { .f = 0.1 },
	},

	{
		"HTE_HT_NOISE",
		.val = { .f = 0.0036 },
	},

	{
		"HTE_THR_RANGE",
		.val = { .f = 0.2 },
	},

	{
		"HTE_VXY_THR",
		.val = { .f = 10.0 },
	},

	{
		"HTE_VZ_THR",
		.val = { .f = 2.0 },
	},

	{
		"IMU_ACCEL_CUTOFF",
		.val = { .f = 30.0 },
	},

	{
		"IMU_DGYRO_CUTOFF",
		.val = { .f = 30.0 },
	},

	{
		"IMU_GYRO_CAL_EN",
		.val = { .i = 1},
	},

	{
		"IMU_GYRO_CUTOFF",
		.val = { .f = 40.0 },
	},

	{
		"IMU_GYRO_DNF_BW",
		.val = { .f = 15. },
	},

	{
		"IMU_GYRO_DNF_EN",
		.val = { .i = 0},
	},

	{
		"IMU_GYRO_DNF_HMC",
		.val = { .i = 3},
	},

	{
		"IMU_GYRO_FFT_EN",
		.val = { .i = 0},
	},

	{
		"IMU_GYRO_FFT_LEN",
		.val = { .i = 512},
	},

	{
		"IMU_GYRO_FFT_MAX",
		.val = { .f = 150. },
	},

	{
		"IMU_GYRO_FFT_MIN",
		.val = { .f = 30. },
	},

	{
		"IMU_GYRO_FFT_SNR",
		.val = { .f = 10. },
	},

	{
		"IMU_GYRO_NF0_BW",
		.val = { .f = 20.0 },
	},

	{
		"IMU_GYRO_NF0_FRQ",
		.val = { .f = 0.0 },
	},

	{
		"IMU_GYRO_NF1_BW",
		.val = { .f = 20.0 },
	},

	{
		"IMU_GYRO_NF1_FRQ",
		.val = { .f = 0.0 },
	},

	{
		"IMU_GYRO_RATEMAX",
		.val = { .i = 400},
	},

	{
		"IMU_INTEG_RATE",
		.val = { .i = 200},
	},

	{
		"LAUN_ALL_ON",
		.val = { .i = 0},
	},

	{
		"LAUN_CAT_A",
		.val = { .f = 30.0 },
	},

	{
		"LAUN_CAT_MDEL",
		.val = { .f = 0.0 },
	},

	{
		"LAUN_CAT_PMAX",
		.val = { .f = 30.0 },
	},

	{
		"LAUN_CAT_T",
		.val = { .f = 0.05 },
	},

	{
		"LNDFW_AIRSPD_MAX",
		.val = { .f = 6.00 },
	},

	{
		"LNDFW_VEL_XY_MAX",
		.val = { .f = 5.0 },
	},

	{
		"LNDFW_VEL_Z_MAX",
		.val = { .f = 2.0 },
	},

	{
		"LNDFW_XYACC_MAX",
		.val = { .f = 8.0 },
	},

	{
		"LNDMC_ALT_GND",
		.val = { .f = 2. },
	},

	{
		"LNDMC_ALT_MAX",
		.val = { .f = -1.0 },
	},

	{
		"LNDMC_ROT_MAX",
		.val = { .f = 20.0 },
	},

	{
		"LNDMC_TRIG_TIME",
		.val = { .f = 1.0 },
	},

	{
		"LNDMC_XY_VEL_MAX",
		.val = { .f = 1.5 },
	},

	{
		"LNDMC_Z_VEL_MAX",
		.val = { .f = 0.50 },
	},

	{
		"LND_FLIGHT_T_HI",
		.val = { .i = 0},
	},

	{
		"LND_FLIGHT_T_LO",
		.val = { .i = 0},
	},

	{
		"LPE_ACC_XY",
		.val = { .f = 0.012 },
	},

	{
		"LPE_ACC_Z",
		.val = { .f = 0.02 },
	},

	{
		"LPE_BAR_Z",
		.val = { .f = 3.0 },
	},

	{
		"LPE_EPH_MAX",
		.val = { .f = 3.0 },
	},

	{
		"LPE_EPV_MAX",
		.val = { .f = 5.0 },
	},

	{
		"LPE_FAKE_ORIGIN",
		.val = { .i = 0},
	},

	{
		"LPE_FGYRO_HP",
		.val = { .f = 0.001 },
	},

	{
		"LPE_FLW_OFF_Z",
		.val = { .f = 0.0 },
	},

	{
		"LPE_FLW_QMIN",
		.val = { .i = 150},
	},

	{
		"LPE_FLW_R",
		.val = { .f = 7.0 },
	},

	{
		"LPE_FLW_RR",
		.val = { .f = 7.0 },
	},

	{
		"LPE_FLW_SCALE",
		.val = { .f = 1.3 },
	},

	{
		"LPE_FUSION",
		.val = { .i = 145},
	},

	{
		"LPE_GPS_DELAY",
		.val = { .f = 0.29 },
	},

	{
		"LPE_GPS_VXY",
		.val = { .f = 0.25 },
	},

	{
		"LPE_GPS_VZ",
		.val = { .f = 0.25 },
	},

	{
		"LPE_GPS_XY",
		.val = { .f = 1.0 },
	},

	{
		"LPE_GPS_Z",
		.val = { .f = 3.0 },
	},

	{
		"LPE_LAND_VXY",
		.val = { .f = 0.05 },
	},

	{
		"LPE_LAND_Z",
		.val = { .f = 0.03 },
	},

	{
		"LPE_LAT",
		.val = { .f = 47.397742 },
	},

	{
		"LPE_LDR_OFF_Z",
		.val = { .f = 0.00 },
	},

	{
		"LPE_LDR_Z",
		.val = { .f = 0.03 },
	},

	{
		"LPE_LON",
		.val = { .f = 8.545594 },
	},

	{
		"LPE_LT_COV",
		.val = { .f = 0.0001 },
	},

	{
		"LPE_PN_B",
		.val = { .f = 1e-3 },
	},

	{
		"LPE_PN_P",
		.val = { .f = 0.1 },
	},

	{
		"LPE_PN_T",
		.val = { .f = 0.001 },
	},

	{
		"LPE_PN_V",
		.val = { .f = 0.1 },
	},

	{
		"LPE_SNR_OFF_Z",
		.val = { .f = 0.00 },
	},

	{
		"LPE_SNR_Z",
		.val = { .f = 0.05 },
	},

	{
		"LPE_T_MAX_GRADE",
		.val = { .f = 1.0 },
	},

	{
		"LPE_VIC_P",
		.val = { .f = 0.001 },
	},

	{
		"LPE_VIS_DELAY",
		.val = { .f = 0.1 },
	},

	{
		"LPE_VIS_XY",
		.val = { .f = 0.1 },
	},

	{
		"LPE_VIS_Z",
		.val = { .f = 0.5 },
	},

	{
		"LPE_VXY_PUB",
		.val = { .f = 0.3 },
	},

	{
		"LPE_X_LP",
		.val = { .f = 5.0 },
	},

	{
		"LPE_Z_PUB",
		.val = { .f = 1.0 },
	},

	{
		"LTEST_ACC_UNC",
		.val = { .f = 10.0 },
	},

	{
		"LTEST_MEAS_UNC",
		.val = { .f = 0.005 },
	},

	{
		"LTEST_MODE",
		.val = { .i = 0},
	},

	{
		"LTEST_POS_UNC_IN",
		.val = { .f = 0.1 },
	},

	{
		"LTEST_SCALE_X",
		.val = { .f = 1.0 },
	},

	{
		"LTEST_SCALE_Y",
		.val = { .f = 1.0 },
	},

	{
		"LTEST_SENS_POS_X",
		.val = { .f = 0.0 },
	},

	{
		"LTEST_SENS_POS_Y",
		.val = { .f = 0.0 },
	},

	{
		"LTEST_SENS_POS_Z",
		.val = { .f = 0.0 },
	},

	{
		"LTEST_SENS_ROT",
		.val = { .i = 2},
	},

	{
		"LTEST_VEL_UNC_IN",
		.val = { .f = 0.1 },
	},

	{
		"MAN_ARM_GESTURE",
		.val = { .i = 1},
	},

	{
		"MAV_0_BROADCAST",
		.val = { .i = 1},
	},

	{
		"MAV_0_FLOW_CTRL",
		.val = { .i = 2},
	},

	{
		"MAV_0_FORWARD",
		.val = { .i = 1},
	},

	{
		"MAV_0_MODE",
		.val = { .i = 0},
	},

	{
		"MAV_0_RADIO_CTL",
		.val = { .i = 1},
	},

	{
		"MAV_0_RATE",
		.val = { .i = 1200},
	},

	{
		"MAV_0_REMOTE_PRT",
		.val = { .i = 14550},
	},

	{
		"MAV_0_UDP_PRT",
		.val = { .i = 14556},
	},

	{
		"MAV_1_BROADCAST",
		.val = { .i = 0},
	},

	{
		"MAV_1_FLOW_CTRL",
		.val = { .i = 2},
	},

	{
		"MAV_1_FORWARD",
		.val = { .i = 0},
	},

	{
		"MAV_1_MODE",
		.val = { .i = 2},
	},

	{
		"MAV_1_RADIO_CTL",
		.val = { .i = 1},
	},

	{
		"MAV_1_RATE",
		.val = { .i = 0},
	},

	{
		"MAV_1_REMOTE_PRT",
		.val = { .i = 0},
	},

	{
		"MAV_1_UDP_PRT",
		.val = { .i = 0},
	},

	{
		"MAV_2_BROADCAST",
		.val = { .i = 0},
	},

	{
		"MAV_2_FLOW_CTRL",
		.val = { .i = 2},
	},

	{
		"MAV_2_FORWARD",
		.val = { .i = 0},
	},

	{
		"MAV_2_MODE",
		.val = { .i = 0},
	},

	{
		"MAV_2_RADIO_CTL",
		.val = { .i = 1},
	},

	{
		"MAV_2_RATE",
		.val = { .i = 0},
	},

	{
		"MAV_2_REMOTE_PRT",
		.val = { .i = 0},
	},

	{
		"MAV_2_UDP_PRT",
		.val = { .i = 0},
	},

	{
		"MAV_COMP_ID",
		.val = { .i = 1},
	},

	{
		"MAV_FWDEXTSP",
		.val = { .i = 1},
	},

	{
		"MAV_HASH_CHK_EN",
		.val = { .i = 1},
	},

	{
		"MAV_HB_FORW_EN",
		.val = { .i = 1},
	},

	{
		"MAV_ODOM_LP",
		.val = { .i = 0},
	},

	{
		"MAV_PROTO_VER",
		.val = { .i = 0},
	},

	{
		"MAV_RADIO_TOUT",
		.val = { .i = 5},
	},

	{
		"MAV_SIK_RADIO_ID",
		.val = { .i = 0},
	},

	{
		"MAV_SYS_ID",
		.val = { .i = 1},
	},

	{
		"MAV_TYPE",
		.val = { .i = 0},
	},

	{
		"MAV_USEHILGPS",
		.val = { .i = 0},
	},

	{
		"MBE_ENABLE",
		.val = { .i = 1},
	},

	{
		"MBE_LEARN_GAIN",
		.val = { .f = 18. },
	},

	{
		"MC_ACRO_EXPO",
		.val = { .f = 0.69 },
	},

	{
		"MC_ACRO_EXPO_Y",
		.val = { .f = 0.69 },
	},

	{
		"MC_ACRO_P_MAX",
		.val = { .f = 720.0 },
	},

	{
		"MC_ACRO_R_MAX",
		.val = { .f = 720.0 },
	},

	{
		"MC_ACRO_SUPEXPO",
		.val = { .f = 0.7 },
	},

	{
		"MC_ACRO_SUPEXPOY",
		.val = { .f = 0.7 },
	},

	{
		"MC_ACRO_Y_MAX",
		.val = { .f = 540.0 },
	},

	{
		"MC_AIRMODE",
		.val = { .i = 0},
	},

	{
		"MC_AT_APPLY",
		.val = { .i = 1},
	},

	{
		"MC_AT_EN",
		.val = { .i = 0},
	},

	{
		"MC_AT_RISE_TIME",
		.val = { .f = 0.14 },
	},

	{
		"MC_AT_START",
		.val = { .i = 0},
	},

	{
		"MC_AT_SYSID_AMP",
		.val = { .f = 0.7 },
	},

	{
		"MC_BAT_SCALE_EN",
		.val = { .i = 0},
	},

	{
		"MC_MAN_TILT_TAU",
		.val = { .f = 0.0 },
	},

	{
		"MC_PITCHRATE_D",
		.val = { .f = 0.003 },
	},

	{
		"MC_PITCHRATE_FF",
		.val = { .f = 0.0 },
	},

	{
		"MC_PITCHRATE_I",
		.val = { .f = 0.2 },
	},

	{
		"MC_PITCHRATE_K",
		.val = { .f = 1.0 },
	},

	{
		"MC_PITCHRATE_MAX",
		.val = { .f = 220.0 },
	},

	{
		"MC_PITCHRATE_P",
		.val = { .f = 0.15 },
	},

	{
		"MC_PITCH_P",
		.val = { .f = 6.5 },
	},

	{
		"MC_PR_INT_LIM",
		.val = { .f = 0.30 },
	},

	{
		"MC_ROLLRATE_D",
		.val = { .f = 0.003 },
	},

	{
		"MC_ROLLRATE_FF",
		.val = { .f = 0.0 },
	},

	{
		"MC_ROLLRATE_I",
		.val = { .f = 0.2 },
	},

	{
		"MC_ROLLRATE_K",
		.val = { .f = 1.0 },
	},

	{
		"MC_ROLLRATE_MAX",
		.val = { .f = 220.0 },
	},

	{
		"MC_ROLLRATE_P",
		.val = { .f = 0.15 },
	},

	{
		"MC_ROLL_P",
		.val = { .f = 6.5 },
	},

	{
		"MC_RR_INT_LIM",
		.val = { .f = 0.30 },
	},

	{
		"MC_YAWRATE_D",
		.val = { .f = 0.0 },
	},

	{
		"MC_YAWRATE_FF",
		.val = { .f = 0.0 },
	},

	{
		"MC_YAWRATE_I",
		.val = { .f = 0.1 },
	},

	{
		"MC_YAWRATE_K",
		.val = { .f = 1.0 },
	},

	{
		"MC_YAWRATE_MAX",
		.val = { .f = 200.0 },
	},

	{
		"MC_YAWRATE_P",
		.val = { .f = 0.2 },
	},

	{
		"MC_YAW_P",
		.val = { .f = 2.8 },
	},

	{
		"MC_YAW_WEIGHT",
		.val = { .f = 0.4 },
	},

	{
		"MC_YR_INT_LIM",
		.val = { .f = 0.30 },
	},

	{
		"MIS_DIST_1WP",
		.val = { .f = 900 },
	},

	{
		"MIS_DIST_WPS",
		.val = { .f = 900 },
	},

	{
		"MIS_LTRMIN_ALT",
		.val = { .f = -1.0 },
	},

	{
		"MIS_MNT_YAW_CTL",
		.val = { .i = 0},
	},

	{
		"MIS_TAKEOFF_ALT",
		.val = { .f = 2.5 },
	},

	{
		"MIS_TAKEOFF_REQ",
		.val = { .i = 0},
	},

	{
		"MIS_YAW_ERR",
		.val = { .f = 12.0 },
	},

	{
		"MIS_YAW_TMT",
		.val = { .f = -1.0 },
	},

	{
		"MNT_DO_STAB",
		.val = { .i = 0},
	},

	{
		"MNT_LND_P_MAX",
		.val = { .f = 90.0 },
	},

	{
		"MNT_LND_P_MIN",
		.val = { .f = -90.0 },
	},

	{
		"MNT_MAN_PITCH",
		.val = { .i = 0},
	},

	{
		"MNT_MAN_ROLL",
		.val = { .i = 0},
	},

	{
		"MNT_MAN_YAW",
		.val = { .i = 0},
	},

	{
		"MNT_MAV_COMPID",
		.val = { .i = 154},
	},

	{
		"MNT_MAV_SYSID",
		.val = { .i = 1},
	},

	{
		"MNT_MODE_IN",
		.val = { .i = -1},
	},

	{
		"MNT_MODE_OUT",
		.val = { .i = 0},
	},

	{
		"MNT_OB_LOCK_MODE",
		.val = { .f = 0.0 },
	},

	{
		"MNT_OB_NORM_MODE",
		.val = { .f = -1.0 },
	},

	{
		"MNT_OFF_PITCH",
		.val = { .f = 0.0 },
	},

	{
		"MNT_OFF_ROLL",
		.val = { .f = 0.0 },
	},

	{
		"MNT_OFF_YAW",
		.val = { .f = 0.0 },
	},

	{
		"MNT_RANGE_PITCH",
		.val = { .f = 90.0 },
	},

	{
		"MNT_RANGE_ROLL",
		.val = { .f = 90.0 },
	},

	{
		"MNT_RANGE_YAW",
		.val = { .f = 360.0 },
	},

	{
		"MNT_RATE_PITCH",
		.val = { .f = 30.0 },
	},

	{
		"MNT_RATE_YAW",
		.val = { .f = 30.0 },
	},

	{
		"MNT_RC_IN_MODE",
		.val = { .i = 1},
	},

	{
		"MOT_ORDERING",
		.val = { .i = 0},
	},

	{
		"MOT_SLEW_MAX",
		.val = { .f = 0.0 },
	},

	{
		"MPC_ACC_DOWN_MAX",
		.val = { .f = 3.0 },
	},

	{
		"MPC_ACC_HOR",
		.val = { .f = 3.0 },
	},

	{
		"MPC_ACC_HOR_MAX",
		.val = { .f = 5.0 },
	},

	{
		"MPC_ACC_UP_MAX",
		.val = { .f = 4.0 },
	},

	{
		"MPC_ALT_MODE",
		.val = { .i = 0},
	},

	{
		"MPC_HOLD_DZ",
		.val = { .f = 0.1 },
	},

	{
		"MPC_HOLD_MAX_XY",
		.val = { .f = 0.8 },
	},

	{
		"MPC_HOLD_MAX_Z",
		.val = { .f = 0.6 },
	},

	{
		"MPC_JERK_AUTO",
		.val = { .f = 4.0 },
	},

	{
		"MPC_JERK_MAX",
		.val = { .f = 8.0 },
	},

	{
		"MPC_LAND_ALT1",
		.val = { .f = 10.0 },
	},

	{
		"MPC_LAND_ALT2",
		.val = { .f = 5.0 },
	},

	{
		"MPC_LAND_ALT3",
		.val = { .f = 1.0 },
	},

	{
		"MPC_LAND_CRWL",
		.val = { .f = 0.3 },
	},

	{
		"MPC_LAND_RC_HELP",
		.val = { .i = 0},
	},

	{
		"MPC_LAND_SPEED",
		.val = { .f = 0.7 },
	},

	{
		"MPC_MANTHR_MIN",
		.val = { .f = 0.08 },
	},

	{
		"MPC_MAN_TILT_MAX",
		.val = { .f = 35.0 },
	},

	{
		"MPC_MAN_Y_MAX",
		.val = { .f = 150.0 },
	},

	{
		"MPC_MAN_Y_TAU",
		.val = { .f = 0.08 },
	},

	{
		"MPC_POS_MODE",
		.val = { .i = 4},
	},

	{
		"MPC_SPOOLUP_TIME",
		.val = { .f = 1.0 },
	},

	{
		"MPC_THR_CURVE",
		.val = { .i = 0},
	},

	{
		"MPC_THR_HOVER",
		.val = { .f = 0.5 },
	},

	{
		"MPC_THR_MAX",
		.val = { .f = 1.0 },
	},

	{
		"MPC_THR_MIN",
		.val = { .f = 0.12 },
	},

	{
		"MPC_THR_XY_MARG",
		.val = { .f = 0.3 },
	},

	{
		"MPC_TILTMAX_AIR",
		.val = { .f = 45.0 },
	},

	{
		"MPC_TILTMAX_LND",
		.val = { .f = 12.0 },
	},

	{
		"MPC_TKO_RAMP_T",
		.val = { .f = 3.0 },
	},

	{
		"MPC_TKO_SPEED",
		.val = { .f = 1.5 },
	},

	{
		"MPC_USE_HTE",
		.val = { .i = 1},
	},

	{
		"MPC_VELD_LP",
		.val = { .f = 5.0 },
	},

	{
		"MPC_VEL_MANUAL",
		.val = { .f = 10.0 },
	},

	{
		"MPC_XY_CRUISE",
		.val = { .f = 5.0 },
	},

	{
		"MPC_XY_ERR_MAX",
		.val = { .f = 2.0 },
	},

	{
		"MPC_XY_MAN_EXPO",
		.val = { .f = 0.6 },
	},

	{
		"MPC_XY_P",
		.val = { .f = 0.95 },
	},

	{
		"MPC_XY_TRAJ_P",
		.val = { .f = 0.5 },
	},

	{
		"MPC_XY_VEL_ALL",
		.val = { .f = -10.0 },
	},

	{
		"MPC_XY_VEL_D_ACC",
		.val = { .f = 0.2 },
	},

	{
		"MPC_XY_VEL_I_ACC",
		.val = { .f = 0.4 },
	},

	{
		"MPC_XY_VEL_MAX",
		.val = { .f = 12.0 },
	},

	{
		"MPC_XY_VEL_P_ACC",
		.val = { .f = 1.8 },
	},

	{
		"MPC_YAWRAUTO_MAX",
		.val = { .f = 45.0 },
	},

	{
		"MPC_YAW_EXPO",
		.val = { .f = 0.6 },
	},

	{
		"MPC_YAW_MODE",
		.val = { .i = 0},
	},

	{
		"MPC_Z_MAN_EXPO",
		.val = { .f = 0.6 },
	},

	{
		"MPC_Z_P",
		.val = { .f = 1.0 },
	},

	{
		"MPC_Z_VEL_ALL",
		.val = { .f = -3.0 },
	},

	{
		"MPC_Z_VEL_D_ACC",
		.val = { .f = 0.0 },
	},

	{
		"MPC_Z_VEL_I_ACC",
		.val = { .f = 2.0 },
	},

	{
		"MPC_Z_VEL_MAX_DN",
		.val = { .f = 1. },
	},

	{
		"MPC_Z_VEL_MAX_UP",
		.val = { .f = 3. },
	},

	{
		"MPC_Z_VEL_P_ACC",
		.val = { .f = 4.0 },
	},

	{
		"MPC_Z_V_AUTO_DN",
		.val = { .f = 1. },
	},

	{
		"MPC_Z_V_AUTO_UP",
		.val = { .f = 3. },
	},

	{
		"NAV_ACC_RAD",
		.val = { .f = 10.0 },
	},

	{
		"NAV_AH_ALT",
		.val = { .f = 600.0 },
	},

	{
		"NAV_AH_LAT",
		.val = { .i = -265847810},
	},

	{
		"NAV_AH_LON",
		.val = { .i = 1518423250},
	},

	{
		"NAV_DLL_ACT",
		.val = { .i = 0},
	},

	{
		"NAV_FORCE_VT",
		.val = { .i = 1},
	},

	{
		"NAV_FT_DST",
		.val = { .f = 8.0 },
	},

	{
		"NAV_FT_FS",
		.val = { .i = 1},
	},

	{
		"NAV_FT_RS",
		.val = { .f = 0.5 },
	},

	{
		"NAV_FW_ALTL_RAD",
		.val = { .f = 5.0 },
	},

	{
		"NAV_FW_ALT_RAD",
		.val = { .f = 10.0 },
	},

	{
		"NAV_LOITER_RAD",
		.val = { .f = 80.0 },
	},

	{
		"NAV_MC_ALT_RAD",
		.val = { .f = 0.8 },
	},

	{
		"NAV_MIN_FT_HT",
		.val = { .f = 8.0 },
	},

	{
		"NAV_RCL_ACT",
		.val = { .i = 2},
	},

	{
		"NAV_TRAFF_AVOID",
		.val = { .i = 1},
	},

	{
		"NAV_TRAFF_A_RADM",
		.val = { .f = 500 },
	},

	{
		"NAV_TRAFF_A_RADU",
		.val = { .f = 10 },
	},

	{
		"NPFG_DAMPING",
		.val = { .f = 0.7 },
	},

	{
		"NPFG_EN_MIN_GSP",
		.val = { .i = 1},
	},

	{
		"NPFG_GSP_MAX_TK",
		.val = { .f = 5.0 },
	},

	{
		"NPFG_LB_PERIOD",
		.val = { .i = 1},
	},

	{
		"NPFG_PERIOD",
		.val = { .f = 10.0 },
	},

	{
		"NPFG_PERIOD_SF",
		.val = { .f = 1.5 },
	},

	{
		"NPFG_ROLL_TC",
		.val = { .f = 0.5 },
	},

	{
		"NPFG_SW_DST_MLT",
		.val = { .f = 0.32 },
	},

	{
		"NPFG_TRACK_KEEP",
		.val = { .i = 1},
	},

	{
		"NPFG_UB_PERIOD",
		.val = { .i = 1},
	},

	{
		"NPFG_WIND_REG",
		.val = { .i = 1},
	},

	{
		"PLD_BTOUT",
		.val = { .f = 5.0 },
	},

	{
		"PLD_FAPPR_ALT",
		.val = { .f = 0.1 },
	},

	{
		"PLD_HACC_RAD",
		.val = { .f = 0.2 },
	},

	{
		"PLD_MAX_SRCH",
		.val = { .i = 3},
	},

	{
		"PLD_SRCH_ALT",
		.val = { .f = 10.0 },
	},

	{
		"PLD_SRCH_TOUT",
		.val = { .f = 10.0 },
	},

	{
		"PWM_AUX_DISARM",
		.val = { .i = 1500},
	},

	{
		"PWM_AUX_MAX",
		.val = { .i = 2000},
	},

	{
		"PWM_AUX_MIN",
		.val = { .i = 1000},
	},

	{
		"PWM_AUX_OUT",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_RATE",
		.val = { .i = 50},
	},

	{
		"PWM_AUX_RATE1",
		.val = { .i = 50},
	},

	{
		"PWM_AUX_REV1",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV2",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV3",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV4",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV5",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV6",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV7",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_REV8",
		.val = { .i = 0},
	},

	{
		"PWM_AUX_TRIM1",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM2",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM3",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM4",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM5",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM6",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM7",
		.val = { .f = 0 },
	},

	{
		"PWM_AUX_TRIM8",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_DIS1",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS2",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS3",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS4",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS5",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS6",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS7",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DIS8",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_DISARM",
		.val = { .i = 1500},
	},

	{
		"PWM_EXTRA_FAIL1",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL2",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL3",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL4",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL5",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL6",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL7",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_FAIL8",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_MAX",
		.val = { .i = 2000},
	},

	{
		"PWM_EXTRA_MAX1",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX2",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX3",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX4",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX5",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX6",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX7",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MAX8",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN",
		.val = { .i = 1000},
	},

	{
		"PWM_EXTRA_MIN1",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN2",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN3",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN4",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN5",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN6",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN7",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_MIN8",
		.val = { .i = -1},
	},

	{
		"PWM_EXTRA_RATE",
		.val = { .i = 50},
	},

	{
		"PWM_EXTRA_RATE1",
		.val = { .i = 50},
	},

	{
		"PWM_EXTRA_REV1",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV2",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV3",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV4",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV5",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV6",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV7",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_REV8",
		.val = { .i = 0},
	},

	{
		"PWM_EXTRA_TRIM1",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM2",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM3",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM4",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM5",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM6",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM7",
		.val = { .f = 0 },
	},

	{
		"PWM_EXTRA_TRIM8",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_DISARM",
		.val = { .i = 900},
	},

	{
		"PWM_MAIN_FUNC1",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC10",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC11",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC12",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC13",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC14",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC15",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC16",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC2",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC3",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC4",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC5",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC6",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC7",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC8",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_FUNC9",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_MAX",
		.val = { .i = 2000},
	},

	{
		"PWM_MAIN_MIN",
		.val = { .i = 1000},
	},

	{
		"PWM_MAIN_OUT",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_RATE",
		.val = { .i = 400},
	},

	{
		"PWM_MAIN_RATE1",
		.val = { .i = 50},
	},

	{
		"PWM_MAIN_REV",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV1",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV10",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV11",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV12",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV13",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV14",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV2",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV3",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV4",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV5",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV6",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV7",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV8",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_REV9",
		.val = { .i = 0},
	},

	{
		"PWM_MAIN_TRIM1",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM10",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM11",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM12",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM13",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM14",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM2",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM3",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM4",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM5",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM6",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM7",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM8",
		.val = { .f = 0 },
	},

	{
		"PWM_MAIN_TRIM9",
		.val = { .f = 0 },
	},

	{
		"RC10_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC10_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC10_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC10_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC10_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC11_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC11_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC11_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC11_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC11_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC12_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC12_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC12_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC12_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC12_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC13_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC13_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC13_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC13_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC13_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC14_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC14_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC14_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC14_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC14_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC15_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC15_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC15_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC15_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC15_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC16_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC16_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC16_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC16_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC16_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC17_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC17_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC17_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC17_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC17_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC18_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC18_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC18_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC18_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC18_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC1_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC1_MAX",
		.val = { .f = 2000.0 },
	},

	{
		"RC1_MIN",
		.val = { .f = 1000.0 },
	},

	{
		"RC1_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC1_TRIM",
		.val = { .f = 1500.0 },
	},

	{
		"RC2_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC2_MAX",
		.val = { .f = 2000.0 },
	},

	{
		"RC2_MIN",
		.val = { .f = 1000.0 },
	},

	{
		"RC2_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC2_TRIM",
		.val = { .f = 1500.0 },
	},

	{
		"RC3_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC3_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC3_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC3_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC3_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC4_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC4_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC4_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC4_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC4_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC5_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC5_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC5_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC5_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC5_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC6_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC6_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC6_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC6_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC6_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC7_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC7_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC7_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC7_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC7_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC8_DZ",
		.val = { .f = 10.0 },
	},

	{
		"RC8_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC8_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC8_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC8_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC9_DZ",
		.val = { .f = 0.0 },
	},

	{
		"RC9_MAX",
		.val = { .f = 2000 },
	},

	{
		"RC9_MIN",
		.val = { .f = 1000 },
	},

	{
		"RC9_REV",
		.val = { .f = 1.0 },
	},

	{
		"RC9_TRIM",
		.val = { .f = 1500 },
	},

	{
		"RC_ARMSWITCH_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_CHAN_CNT",
		.val = { .i = 0},
	},

	{
		"RC_FAILS_THR",
		.val = { .i = 0},
	},

	{
		"RC_GEAR_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_KILLSWITCH_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_LOITER_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_MAP_ACRO_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_ARM_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX1",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX2",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX3",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX4",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX5",
		.val = { .i = 0},
	},

	{
		"RC_MAP_AUX6",
		.val = { .i = 0},
	},

	{
		"RC_MAP_FAILSAFE",
		.val = { .i = 0},
	},

	{
		"RC_MAP_FLAPS",
		.val = { .i = 0},
	},

	{
		"RC_MAP_FLTMODE",
		.val = { .i = 0},
	},

	{
		"RC_MAP_FLTM_BTN",
		.val = { .i = 0},
	},

	{
		"RC_MAP_GEAR_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_KILL_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_LOITER_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_MAN_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_MODE_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_OFFB_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_PARAM1",
		.val = { .i = 0},
	},

	{
		"RC_MAP_PARAM2",
		.val = { .i = 0},
	},

	{
		"RC_MAP_PARAM3",
		.val = { .i = 0},
	},

	{
		"RC_MAP_PITCH",
		.val = { .i = 0},
	},

	{
		"RC_MAP_POSCTL_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_RATT_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_RETURN_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_ROLL",
		.val = { .i = 0},
	},

	{
		"RC_MAP_STAB_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_THROTTLE",
		.val = { .i = 0},
	},

	{
		"RC_MAP_TRANS_SW",
		.val = { .i = 0},
	},

	{
		"RC_MAP_YAW",
		.val = { .i = 0},
	},

	{
		"RC_OFFB_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_RETURN_TH",
		.val = { .f = 0.75 },
	},

	{
		"RC_RSSI_PWM_CHAN",
		.val = { .i = 0},
	},

	{
		"RC_RSSI_PWM_MAX",
		.val = { .i = 2000},
	},

	{
		"RC_RSSI_PWM_MIN",
		.val = { .i = 1000},
	},

	{
		"RC_TRANS_TH",
		.val = { .f = 0.75 },
	},

	{
		"RTL_CONE_ANG",
		.val = { .i = 45},
	},

	{
		"RTL_DESCEND_ALT",
		.val = { .f = 30 },
	},

	{
		"RTL_HDG_MD",
		.val = { .i = 0},
	},

	{
		"RTL_LAND_DELAY",
		.val = { .f = 0.0 },
	},

	{
		"RTL_LOITER_RAD",
		.val = { .f = 80.0 },
	},

	{
		"RTL_MIN_DIST",
		.val = { .f = 10.0 },
	},

	{
		"RTL_PLD_MD",
		.val = { .i = 0},
	},

	{
		"RTL_RETURN_ALT",
		.val = { .f = 60 },
	},

	{
		"RTL_TIME_FACTOR",
		.val = { .f = 1.1 },
	},

	{
		"RTL_TIME_MARGIN",
		.val = { .i = 100},
	},

	{
		"RTL_TYPE",
		.val = { .i = 0},
	},

	{
		"RV_YAW_P",
		.val = { .f = 0.1 },
	},

	{
		"RWTO_AIRSPD_SCL",
		.val = { .f = 1.3 },
	},

	{
		"RWTO_HDG",
		.val = { .i = 0},
	},

	{
		"RWTO_MAX_PITCH",
		.val = { .f = 20.0 },
	},

	{
		"RWTO_MAX_ROLL",
		.val = { .f = 25.0 },
	},

	{
		"RWTO_MAX_THR",
		.val = { .f = 1.0 },
	},

	{
		"RWTO_NAV_ALT",
		.val = { .f = 5.0 },
	},

	{
		"RWTO_PSP",
		.val = { .f = 0.0 },
	},

	{
		"RWTO_RAMP_TIME",
		.val = { .f = 2.0 },
	},

	{
		"RWTO_TKOFF",
		.val = { .i = 0},
	},

	{
		"SDLOG_ALGORITHM",
		.val = { .i = 2},
	},

	{
		"SDLOG_BOOT_BAT",
		.val = { .i = 0},
	},

	{
		"SDLOG_DIRS_MAX",
		.val = { .i = 0},
	},

	{
		"SDLOG_EXCH_KEY",
		.val = { .i = 1},
	},

	{
		"SDLOG_KEY",
		.val = { .i = 2},
	},

	{
		"SDLOG_MISSION",
		.val = { .i = 0},
	},

	{
		"SDLOG_MODE",
		.val = { .i = 0},
	},

	{
		"SDLOG_PROFILE",
		.val = { .i = 1},
	},

	{
		"SDLOG_UTC_OFFSET",
		.val = { .i = 0},
	},

	{
		"SDLOG_UUID",
		.val = { .i = 1},
	},

	{
		"SENS_BARO_QNH",
		.val = { .f = 1013.25 },
	},

	{
		"SENS_BARO_RATE",
		.val = { .f = 20.0 },
	},

	{
		"SENS_BOARD_ROT",
		.val = { .i = 0},
	},

	{
		"SENS_BOARD_X_OFF",
		.val = { .f = 0.0 },
	},

	{
		"SENS_BOARD_Y_OFF",
		.val = { .f = 0.0 },
	},

	{
		"SENS_BOARD_Z_OFF",
		.val = { .f = 0.0 },
	},

	{
		"SENS_DPRES_ANSC",
		.val = { .f = 0 },
	},

	{
		"SENS_DPRES_OFF",
		.val = { .f = 0.0 },
	},

	{
		"SENS_EN_THERMAL",
		.val = { .i = -1},
	},

	{
		"SENS_EXT_I2C_PRB",
		.val = { .i = 1},
	},

	{
		"SENS_FLOW_MAXHGT",
		.val = { .f = 3.0 },
	},

	{
		"SENS_FLOW_MAXR",
		.val = { .f = 2.5 },
	},

	{
		"SENS_FLOW_MINHGT",
		.val = { .f = 0.7 },
	},

	{
		"SENS_FLOW_ROT",
		.val = { .i = 6},
	},

	{
		"SENS_GPS_MASK",
		.val = { .i = 0},
	},

	{
		"SENS_GPS_PRIME",
		.val = { .i = 0},
	},

	{
		"SENS_GPS_TAU",
		.val = { .f = 10.0 },
	},

	{
		"SENS_IMU_AUTOCAL",
		.val = { .i = 1},
	},

	{
		"SENS_IMU_MODE",
		.val = { .i = 1},
	},

	{
		"SENS_INT_BARO_EN",
		.val = { .i = 1},
	},

	{
		"SENS_MAG_AUTOCAL",
		.val = { .i = 0},
	},

	{
		"SENS_MAG_MODE",
		.val = { .i = 1},
	},

	{
		"SENS_MAG_RATE",
		.val = { .f = 15.0 },
	},

	{
		"SIM_BARO_OFF_P",
		.val = { .f = 0.0 },
	},

	{
		"SIM_BARO_OFF_T",
		.val = { .f = 0.0 },
	},

	{
		"SIM_BAT_DRAIN",
		.val = { .f = 60 },
	},

	{
		"SIM_BAT_MIN_PCT",
		.val = { .f = 50.0 },
	},

	{
		"SIM_GPS_USED",
		.val = { .i = 10},
	},

	{
		"SIM_MAG_OFFSET_X",
		.val = { .f = 0.0 },
	},

	{
		"SIM_MAG_OFFSET_Y",
		.val = { .f = 0.0 },
	},

	{
		"SIM_MAG_OFFSET_Z",
		.val = { .f = 0.0 },
	},

	{
		"SYS_AUTOCONFIG",
		.val = { .i = 0},
	},

	{
		"SYS_AUTOSTART",
		.val = { .i = 0},
	},

	{
		"SYS_BL_UPDATE",
		.val = { .i = 0},
	},

	{
		"SYS_CAL_ACCEL",
		.val = { .i = 0},
	},

	{
		"SYS_CAL_BARO",
		.val = { .i = 0},
	},

	{
		"SYS_CAL_GYRO",
		.val = { .i = 0},
	},

	{
		"SYS_CAL_TDEL",
		.val = { .i = 24},
	},

	{
		"SYS_CAL_TMAX",
		.val = { .i = 10},
	},

	{
		"SYS_CAL_TMIN",
		.val = { .i = 5},
	},

	{
		"SYS_CTRL_ALLOC",
		.val = { .i = 0},
	},

	{
		"SYS_DM_BACKEND",
		.val = { .i = 0},
	},

	{
		"SYS_FAC_CAL_MODE",
		.val = { .i = 0},
	},

	{
		"SYS_FAILURE_EN",
		.val = { .i = 0},
	},

	{
		"SYS_HAS_BARO",
		.val = { .i = 1},
	},

	{
		"SYS_HAS_GPS",
		.val = { .i = 1},
	},

	{
		"SYS_HAS_MAG",
		.val = { .i = 1},
	},

	{
		"SYS_HAS_NUM_DIST",
		.val = { .i = 0},
	},

	{
		"SYS_HITL",
		.val = { .i = 0},
	},

	{
		"SYS_MC_EST_GROUP",
		.val = { .i = 2},
	},

	{
		"SYS_RGB_MAXBRT",
		.val = { .f = 1. },
	},

	{
		"SYS_STCK_EN",
		.val = { .i = 1},
	},

	{
		"SYS_VEHICLE_RESP",
		.val = { .f = -0.4 },
	},

	{
		"TC_A0_ID",
		.val = { .i = 0},
	},

	{
		"TC_A0_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_A0_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_A0_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A0_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_ID",
		.val = { .i = 0},
	},

	{
		"TC_A1_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_A1_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_A1_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A1_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_ID",
		.val = { .i = 0},
	},

	{
		"TC_A2_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_A2_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_A2_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A2_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_ID",
		.val = { .i = 0},
	},

	{
		"TC_A3_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_A3_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_A3_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_A3_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_A_ENABLE",
		.val = { .i = 0},
	},

	{
		"TC_B0_ID",
		.val = { .i = 0},
	},

	{
		"TC_B0_TMAX",
		.val = { .f = 75.0 },
	},

	{
		"TC_B0_TMIN",
		.val = { .f = 5.0 },
	},

	{
		"TC_B0_TREF",
		.val = { .f = 40.0 },
	},

	{
		"TC_B0_X0",
		.val = { .f = 0.0 },
	},

	{
		"TC_B0_X1",
		.val = { .f = 0.0 },
	},

	{
		"TC_B0_X2",
		.val = { .f = 0.0 },
	},

	{
		"TC_B0_X3",
		.val = { .f = 0.0 },
	},

	{
		"TC_B0_X4",
		.val = { .f = 0.0 },
	},

	{
		"TC_B0_X5",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_ID",
		.val = { .i = 0},
	},

	{
		"TC_B1_TMAX",
		.val = { .f = 75.0 },
	},

	{
		"TC_B1_TMIN",
		.val = { .f = 5.0 },
	},

	{
		"TC_B1_TREF",
		.val = { .f = 40.0 },
	},

	{
		"TC_B1_X0",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_X1",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_X2",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_X3",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_X4",
		.val = { .f = 0.0 },
	},

	{
		"TC_B1_X5",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_ID",
		.val = { .i = 0},
	},

	{
		"TC_B2_TMAX",
		.val = { .f = 75.0 },
	},

	{
		"TC_B2_TMIN",
		.val = { .f = 5.0 },
	},

	{
		"TC_B2_TREF",
		.val = { .f = 40.0 },
	},

	{
		"TC_B2_X0",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_X1",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_X2",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_X3",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_X4",
		.val = { .f = 0.0 },
	},

	{
		"TC_B2_X5",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_ID",
		.val = { .i = 0},
	},

	{
		"TC_B3_TMAX",
		.val = { .f = 75.0 },
	},

	{
		"TC_B3_TMIN",
		.val = { .f = 5.0 },
	},

	{
		"TC_B3_TREF",
		.val = { .f = 40.0 },
	},

	{
		"TC_B3_X0",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_X1",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_X2",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_X3",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_X4",
		.val = { .f = 0.0 },
	},

	{
		"TC_B3_X5",
		.val = { .f = 0.0 },
	},

	{
		"TC_B_ENABLE",
		.val = { .i = 0},
	},

	{
		"TC_G0_ID",
		.val = { .i = 0},
	},

	{
		"TC_G0_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_G0_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_G0_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G0_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_ID",
		.val = { .i = 0},
	},

	{
		"TC_G1_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_G1_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_G1_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G1_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_ID",
		.val = { .i = 0},
	},

	{
		"TC_G2_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_G2_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_G2_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G2_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_ID",
		.val = { .i = 0},
	},

	{
		"TC_G3_TMAX",
		.val = { .f = 100.0 },
	},

	{
		"TC_G3_TMIN",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_TREF",
		.val = { .f = 25.0 },
	},

	{
		"TC_G3_X0_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X0_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X0_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X1_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X1_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X1_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X2_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X2_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X2_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X3_0",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X3_1",
		.val = { .f = 0.0 },
	},

	{
		"TC_G3_X3_2",
		.val = { .f = 0.0 },
	},

	{
		"TC_G_ENABLE",
		.val = { .i = 0},
	},

	{
		"TEST_1",
		.val = { .i = 2},
	},

	{
		"TEST_2",
		.val = { .i = 4},
	},

	{
		"TEST_3",
		.val = { .f = 5.0 },
	},

	{
		"TEST_D",
		.val = { .f = 0.01 },
	},

	{
		"TEST_DEV",
		.val = { .f = 2.0 },
	},

	{
		"TEST_D_LP",
		.val = { .f = 10.0 },
	},

	{
		"TEST_HP",
		.val = { .f = 10.0 },
	},

	{
		"TEST_I",
		.val = { .f = 0.1 },
	},

	{
		"TEST_I_MAX",
		.val = { .f = 1.0 },
	},

	{
		"TEST_LP",
		.val = { .f = 10.0 },
	},

	{
		"TEST_MAX",
		.val = { .f = 1.0 },
	},

	{
		"TEST_MEAN",
		.val = { .f = 1.0 },
	},

	{
		"TEST_MIN",
		.val = { .f = -1.0 },
	},

	{
		"TEST_P",
		.val = { .f = 0.2 },
	},

	{
		"TEST_PARAMS",
		.val = { .i = 12345678},
	},

	{
		"TEST_RC2_X",
		.val = { .i = 16},
	},

	{
		"TEST_RC_X",
		.val = { .i = 8},
	},

	{
		"TEST_TRIM",
		.val = { .f = 0.5 },
	},

	{
		"THR_MDL_FAC",
		.val = { .f = 0.0 },
	},

	{
		"TRIG_ACT_TIME",
		.val = { .f = 40.0 },
	},

	{
		"TRIG_DISTANCE",
		.val = { .f = 25.0 },
	},

	{
		"TRIG_INTERFACE",
		.val = { .i = 4},
	},

	{
		"TRIG_INTERVAL",
		.val = { .f = 40.0 },
	},

	{
		"TRIG_MIN_INTERVA",
		.val = { .f = 1.0 },
	},

	{
		"TRIG_MODE",
		.val = { .i = 0},
	},

	{
		"TRIG_PINS",
		.val = { .i = 56},
	},

	{
		"TRIG_PINS_EX",
		.val = { .i = 0},
	},

	{
		"TRIG_POLARITY",
		.val = { .i = 0},
	},

	{
		"TRIG_PWM_NEUTRAL",
		.val = { .i = 1500},
	},

	{
		"TRIG_PWM_SHOOT",
		.val = { .i = 1900},
	},

	{
		"TRIM_PITCH",
		.val = { .f = 0.0 },
	},

	{
		"TRIM_ROLL",
		.val = { .f = 0.0 },
	},

	{
		"TRIM_YAW",
		.val = { .f = 0.0 },
	},

	{
		"UUV_DIRCT_PITCH",
		.val = { .f = 0.0 },
	},

	{
		"UUV_DIRCT_ROLL",
		.val = { .f = 0.0 },
	},

	{
		"UUV_DIRCT_THRUST",
		.val = { .f = 0.0 },
	},

	{
		"UUV_DIRCT_YAW",
		.val = { .f = 0.0 },
	},

	{
		"UUV_GAIN_X_D",
		.val = { .f = 0.2 },
	},

	{
		"UUV_GAIN_X_P",
		.val = { .f = 1.0 },
	},

	{
		"UUV_GAIN_Y_D",
		.val = { .f = 0.2 },
	},

	{
		"UUV_GAIN_Y_P",
		.val = { .f = 1.0 },
	},

	{
		"UUV_GAIN_Z_D",
		.val = { .f = 0.2 },
	},

	{
		"UUV_GAIN_Z_P",
		.val = { .f = 1.0 },
	},

	{
		"UUV_INPUT_MODE",
		.val = { .i = 0},
	},

	{
		"UUV_PITCH_D",
		.val = { .f = 2.0 },
	},

	{
		"UUV_PITCH_P",
		.val = { .f = 4.0 },
	},

	{
		"UUV_ROLL_D",
		.val = { .f = 1.5 },
	},

	{
		"UUV_ROLL_P",
		.val = { .f = 4.0 },
	},

	{
		"UUV_SKIP_CTRL",
		.val = { .i = 0},
	},

	{
		"UUV_STAB_MODE",
		.val = { .i = 1},
	},

	{
		"UUV_YAW_D",
		.val = { .f = 2.0 },
	},

	{
		"UUV_YAW_P",
		.val = { .f = 4.0 },
	},

	{
		"VTO_LOITER_ALT",
		.val = { .f = 80 },
	},

	{
		"VT_ARSP_BLEND",
		.val = { .f = 8.0 },
	},

	{
		"VT_ARSP_TRANS",
		.val = { .f = 10.0 },
	},

	{
		"VT_B_DEC_FF",
		.val = { .f = 0. },
	},

	{
		"VT_B_DEC_I",
		.val = { .f = 0.1 },
	},

	{
		"VT_B_DEC_MSS",
		.val = { .f = 2.0 },
	},

	{
		"VT_B_REV_DEL",
		.val = { .f = 0.0 },
	},

	{
		"VT_B_REV_OUT",
		.val = { .f = 0.0 },
	},

	{
		"VT_B_TRANS_DUR",
		.val = { .f = 4.0 },
	},

	{
		"VT_B_TRANS_RAMP",
		.val = { .f = 3.0 },
	},

	{
		"VT_B_TRANS_THR",
		.val = { .f = 0.0 },
	},

	{
		"VT_ELEV_MC_LOCK",
		.val = { .i = 1},
	},

	{
		"VT_FWD_THRUST_EN",
		.val = { .i = 0},
	},

	{
		"VT_FWD_THRUST_SC",
		.val = { .f = 0.7 },
	},

	{
		"VT_FW_ALT_ERR",
		.val = { .f = 0.0 },
	},

	{
		"VT_FW_DIFTHR_EN",
		.val = { .i = 0},
	},

	{
		"VT_FW_DIFTHR_SC",
		.val = { .f = 0.1 },
	},

	{
		"VT_FW_MIN_ALT",
		.val = { .f = 0.0 },
	},

	{
		"VT_FW_MOT_OFFID",
		.val = { .i = 0},
	},

	{
		"VT_FW_PERM_STAB",
		.val = { .i = 0},
	},

	{
		"VT_FW_QC_P",
		.val = { .i = 0},
	},

	{
		"VT_FW_QC_R",
		.val = { .i = 0},
	},

	{
		"VT_F_TRANS_DUR",
		.val = { .f = 5.0 },
	},

	{
		"VT_F_TRANS_THR",
		.val = { .f = 1.0 },
	},

	{
		"VT_F_TR_OL_TM",
		.val = { .f = 6.0 },
	},

	{
		"VT_IDLE_PWM_MC",
		.val = { .i = 900},
	},

	{
		"VT_LND_PTCH_MIN",
		.val = { .f = -5.0 },
	},

	{
		"VT_MC_ON_FMU",
		.val = { .i = 0},
	},

	{
		"VT_MOT_ID",
		.val = { .i = 0},
	},

	{
		"VT_PSHER_RMP_DT",
		.val = { .f = 3.0 },
	},

	{
		"VT_PTCH_MIN",
		.val = { .f = -5.0 },
	},

	{
		"VT_TILT_FW",
		.val = { .f = 1.0 },
	},

	{
		"VT_TILT_MC",
		.val = { .f = 0.0 },
	},

	{
		"VT_TILT_SPINUP",
		.val = { .f = 0.0 },
	},

	{
		"VT_TILT_TRANS",
		.val = { .f = 0.3 },
	},

	{
		"VT_TRANS_MIN_TM",
		.val = { .f = 2.0 },
	},

	{
		"VT_TRANS_P2_DUR",
		.val = { .f = 0.5 },
	},

	{
		"VT_TRANS_TIMEOUT",
		.val = { .f = 15.0 },
	},

	{
		"VT_TYPE",
		.val = { .i = 0},
	},

	{
		"WV_EN",
		.val = { .i = 0},
	},

	{
		"WV_GAIN",
		.val = { .f = 1.0 },
	},

	{
		"WV_ROLL_MIN",
		.val = { .f = 1.0 },
	},

	{
		"WV_YRATE_MAX",
		.val = { .f = 90.0 },
	},

};

} // namespace px4