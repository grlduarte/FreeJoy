

/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */
	
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/
#include "common_types.h"


static const app_config_t init_config =
{
	.firmware_version = 0x0103,		// do not change
	
	/* 
		Name of device in devices dispatcher
	*/
	.device_name[0] = 'F',
	.device_name[1] = 'r',
	.device_name[2] = 'e',
	.device_name[3] = 'e',
	.device_name[4] = 'J',
	.device_name[5] = 'o',
	.device_name[6] = 'y',
	.device_name[7] = 0,
	.device_name[8] = 0,
	.device_name[9] = 0,
	.device_name[10] = 0,
	.device_name[11] = 0,
	.device_name[12] = 0,
	.device_name[13] = 0,
	.device_name[14] = 0,
	.device_name[15] = 0,
	.device_name[16] = 0,
	.device_name[17] = 0,
	.device_name[18] = 0,
	.device_name[19] = 0,			
	
	.button_debounce_ms = 30,					// debounce time for all buttons
	
	.toggle_press_time_ms = 200,			// amount of millisecods virtual button 
																		// will be pressed at toggle switch event
	
	.encoder_press_time_ms = 30,			// amount of millisecods virtual button 
																		// will be pressed at encoder increment/decrement
																		
	.exchange_period_ms = 2,					// amount of millisecond between joystick data sending

	/*
		Device pins configuration. Available values:
		- AXIS_ANALOG (only for pins 0-7)
		- BUTTON_GND
		- BUTTON_VCC
		- BUTTON_COLUMN
		- BUTTON_ROW
	*/
	.pins[0] = AXIS_ANALOG,						// PA0
	.pins[1] = AXIS_ANALOG,						// PA1
	.pins[2] = AXIS_ANALOG,						// PA2
	.pins[3] = AXIS_ANALOG,						// PA3
	.pins[4] = AXIS_ANALOG,						// PA4
	.pins[5] = AXIS_ANALOG,						// PA5
	.pins[6] = AXIS_ANALOG,						// PA6
	.pins[7] = AXIS_ANALOG,						// PA7
	.pins[8] = BUTTON_GND,						// PA8
	.pins[9] = BUTTON_GND,						// PA9
	.pins[10] = BUTTON_GND,						// PA10
	.pins[11] = NOT_USED,							// PA15
	.pins[12] = NOT_USED,							// PB0
	.pins[13] = NOT_USED,							// PB1
	.pins[14] = BUTTON_GND,						// PB3
	.pins[15] = BUTTON_GND,						// PB4
	.pins[16] = BUTTON_GND,						// PB5
	.pins[17] = BUTTON_GND,						// PB6
	.pins[18] = BUTTON_GND,						// PB7
	.pins[19] = NOT_USED,							// PB8
	.pins[20] = NOT_USED,							// PB9
	.pins[21] = NOT_USED,							// PB10
	.pins[22] = NOT_USED,							// PB11
	.pins[23] = BUTTON_GND,						// PB12
	.pins[24] = BUTTON_GND,						// PB13
	.pins[25] = BUTTON_GND,						// PB14
	.pins[26] = BUTTON_GND,						// PB15
	.pins[27] = NOT_USED,							// PC13
	.pins[28] = NOT_USED,							// PC14
	.pins[29] = NOT_USED,							// PC15
	
	/*
		Configuration of analog axes
	*/
	.axis_config[0].calib_min = AXIS_MIN_VALUE,
	.axis_config[0].calib_center = AXIS_CENTER_VALUE,
	.axis_config[0].calib_max = AXIS_MAX_VALUE,
	.axis_config[0].magnet_offset = 0,
	.axis_config[0].curve_shape[0] = -100,
	.axis_config[0].curve_shape[1]  = -80,
	.axis_config[0].curve_shape[2] = -60,
	.axis_config[0].curve_shape[3] = -40,
	.axis_config[0].curve_shape[4] = -20,
	.axis_config[0].curve_shape[5] = 0,
	.axis_config[0].curve_shape[6] = 20,
	.axis_config[0].curve_shape[7] = 40,
	.axis_config[0].curve_shape[8] = 60,
	.axis_config[0].curve_shape[9] = 80,
	.axis_config[0].curve_shape[10] = 100,
	.axis_config[0].filter = FILTER_NO,
	.axis_config[0].out_enabled = 1,
	.axis_config[0].resolution = 12,
	
	.axis_config[1].calib_min = AXIS_MIN_VALUE,
	.axis_config[1].calib_center = AXIS_CENTER_VALUE,
	.axis_config[1].calib_max = AXIS_MAX_VALUE,
	.axis_config[1].magnet_offset = 0,
	.axis_config[1].curve_shape[0] = -100,
	.axis_config[1].curve_shape[1]  = -80,
	.axis_config[1].curve_shape[2] = -60,
	.axis_config[1].curve_shape[3] = -40,
	.axis_config[1].curve_shape[4] = -20,
	.axis_config[1].curve_shape[5] = 0,
	.axis_config[1].curve_shape[6] = 20,
	.axis_config[1].curve_shape[7] = 40,
	.axis_config[1].curve_shape[8] = 60,
	.axis_config[1].curve_shape[9] = 80,
	.axis_config[1].curve_shape[10] = 100,
	.axis_config[1].filter = FILTER_NO,
	.axis_config[1].out_enabled = 1,
	.axis_config[1].resolution = 12,
	
	.axis_config[2].calib_min = AXIS_MIN_VALUE,
	.axis_config[2].calib_center = AXIS_CENTER_VALUE,
	.axis_config[2].calib_max = AXIS_MAX_VALUE,
	.axis_config[2].magnet_offset = 0,
	.axis_config[2].curve_shape[0] = -100,
	.axis_config[2].curve_shape[1]  = -80,
	.axis_config[2].curve_shape[2] = -60,
	.axis_config[2].curve_shape[3] = -40,
	.axis_config[2].curve_shape[4] = -20,
	.axis_config[2].curve_shape[5] = 0,
	.axis_config[2].curve_shape[6] = 20,
	.axis_config[2].curve_shape[7] = 40,
	.axis_config[2].curve_shape[8] = 60,
	.axis_config[2].curve_shape[9] = 80,
	.axis_config[2].curve_shape[10] = 100,
	.axis_config[2].filter = FILTER_NO,
	.axis_config[2].out_enabled = 1,
	.axis_config[2].resolution = 12,
	
	.axis_config[3].calib_min = AXIS_MIN_VALUE,
	.axis_config[3].calib_center = AXIS_CENTER_VALUE,
	.axis_config[3].calib_max = AXIS_MAX_VALUE,
	.axis_config[3].magnet_offset = 0,
	.axis_config[3].curve_shape[0] = -100,
	.axis_config[3].curve_shape[1]  = -80,
	.axis_config[3].curve_shape[2] = -60,
	.axis_config[3].curve_shape[3] = -40,
	.axis_config[3].curve_shape[4] = -20,
	.axis_config[3].curve_shape[5] = 0,
	.axis_config[3].curve_shape[6] = 20,
	.axis_config[3].curve_shape[7] = 40,
	.axis_config[3].curve_shape[8] = 60,
	.axis_config[3].curve_shape[9] = 80,
	.axis_config[3].curve_shape[10] = 100,
	.axis_config[3].filter = FILTER_NO,
	.axis_config[3].out_enabled = 1,
	.axis_config[3].resolution = 12,
	
	.axis_config[4].calib_min = AXIS_MIN_VALUE,
	.axis_config[4].calib_center = AXIS_CENTER_VALUE,
	.axis_config[4].calib_max = AXIS_MAX_VALUE,
	.axis_config[4].magnet_offset = 0,
	.axis_config[4].curve_shape[0] = -100,
	.axis_config[4].curve_shape[1]  = -80,
	.axis_config[4].curve_shape[2] = -60,
	.axis_config[4].curve_shape[3] = -40,
	.axis_config[4].curve_shape[4] = -20,
	.axis_config[4].curve_shape[5] = 0,
	.axis_config[4].curve_shape[6] = 20,
	.axis_config[4].curve_shape[7] = 40,
	.axis_config[4].curve_shape[8] = 60,
	.axis_config[4].curve_shape[9] = 80,
	.axis_config[4].curve_shape[10] = 100,
	.axis_config[4].filter = FILTER_NO,
	.axis_config[4].out_enabled = 1,
	.axis_config[4].resolution = 12,
	
	.axis_config[5].calib_min = AXIS_MIN_VALUE,
	.axis_config[5].calib_center = AXIS_CENTER_VALUE,
	.axis_config[5].calib_max = AXIS_MAX_VALUE,
	.axis_config[5].magnet_offset = 0,
	.axis_config[5].curve_shape[0] = -100,
	.axis_config[5].curve_shape[1]  = -80,
	.axis_config[5].curve_shape[2] = -60,
	.axis_config[5].curve_shape[3] = -40,
	.axis_config[5].curve_shape[4] = -20,
	.axis_config[5].curve_shape[5] = 0,
	.axis_config[5].curve_shape[6] = 20,
	.axis_config[5].curve_shape[7] = 40,
	.axis_config[5].curve_shape[8] = 60,
	.axis_config[5].curve_shape[9] = 80,
	.axis_config[5].curve_shape[10] = 100,
	.axis_config[5].filter = FILTER_NO,
	.axis_config[5].out_enabled = 1,
	.axis_config[5].resolution = 12,
	
	.axis_config[6].calib_min = AXIS_MIN_VALUE,
	.axis_config[6].calib_center = AXIS_CENTER_VALUE,
	.axis_config[6].calib_max = AXIS_MAX_VALUE,
	.axis_config[6].magnet_offset = 0,
	.axis_config[6].curve_shape[0] = -100,
	.axis_config[6].curve_shape[1]  = -80,
	.axis_config[6].curve_shape[2] = -60,
	.axis_config[6].curve_shape[3] = -40,
	.axis_config[6].curve_shape[4] = -20,
	.axis_config[6].curve_shape[5] = 0,
	.axis_config[6].curve_shape[6] = 20,
	.axis_config[6].curve_shape[7] = 40,
	.axis_config[6].curve_shape[8] = 60,
	.axis_config[6].curve_shape[9] = 80,
	.axis_config[6].curve_shape[10] = 100,
	.axis_config[6].filter = FILTER_NO,
	.axis_config[6].out_enabled = 1,
	.axis_config[6].resolution = 12,
	
	.axis_config[7].calib_min = AXIS_MIN_VALUE,
	.axis_config[7].calib_center = AXIS_CENTER_VALUE,
	.axis_config[7].calib_max = AXIS_MAX_VALUE,
	.axis_config[7].magnet_offset = 0,
	.axis_config[7].curve_shape[0] = -100,
	.axis_config[7].curve_shape[1]  = -80,
	.axis_config[7].curve_shape[2] = -60,
	.axis_config[7].curve_shape[3] = -40,
	.axis_config[7].curve_shape[4] = -20,
	.axis_config[7].curve_shape[5] = 0,
	.axis_config[7].curve_shape[6] = 20,
	.axis_config[7].curve_shape[7] = 40,
	.axis_config[7].curve_shape[8] = 60,
	.axis_config[7].curve_shape[9] = 80,
	.axis_config[7].curve_shape[10] = 100,
	.axis_config[7].filter = FILTER_NO,
	.axis_config[7].out_enabled = 1,
	.axis_config[7].resolution = 12,

	
	/*
		Buttons configuration. Available values:
		- BUTTON_NORMAL
		- BUTTON_INVERTED
		- BUTTON_TOGGLE
		- TOGGLE_SWITCH
		- TOGGLE_SWITCH_ON
		- TOGGLE_SWITCH_OFF
			
		- POV1_UP
		- POV1_RIGHT
		- POV1_DOWN
		- POV1_LEFT
		- POV2_UP
		- POV2_RIGHT
		- POV2_DOWN
		- POV2_LEFT
		- POV3_UP
		- POV3_RIGHT
		- POV3_DOWN
		- POV3_LEFT
		- POV4_UP
		- POV4_RIGHT
		- POV4_DOWN
		- POV4_LEFT
			
		- ENCODER_INPUT_A
		- ENCODER_INPUT_B
	*/
	.buttons[0].physical_num = -1,
	.buttons[0].type = BUTTON_NORMAL,
	.buttons[1].physical_num = -1,
	.buttons[1].type = BUTTON_NORMAL,
	.buttons[2].physical_num = -1,
	.buttons[2].type = BUTTON_NORMAL,
	.buttons[3].physical_num = -1,
	.buttons[3].type = BUTTON_NORMAL,
	.buttons[4].physical_num = -1,
	.buttons[4].type = BUTTON_NORMAL,
	.buttons[5].physical_num = -1,
	.buttons[5].type = BUTTON_NORMAL,
	.buttons[6].physical_num = -1,
	.buttons[6].type = BUTTON_NORMAL,
	.buttons[7].physical_num = -1,
	.buttons[7].type = BUTTON_NORMAL,
	.buttons[8].physical_num = -1,
	.buttons[8].type = BUTTON_NORMAL,
	.buttons[9].physical_num = -1,
	.buttons[9].type = BUTTON_NORMAL,
	.buttons[10].physical_num = -1,
	.buttons[10].type = BUTTON_NORMAL,
	.buttons[11].physical_num = -1,
	.buttons[11].type = BUTTON_NORMAL,
	.buttons[12].physical_num = -1,
	.buttons[12].type = BUTTON_NORMAL,
	.buttons[13].physical_num = -1,
	.buttons[13].type = BUTTON_NORMAL,
	.buttons[14].physical_num = -1,
	.buttons[14].type = BUTTON_NORMAL,
	.buttons[15].physical_num = -1,
	.buttons[15].type = BUTTON_NORMAL,
	.buttons[16].physical_num = -1,
	.buttons[16].type = BUTTON_NORMAL,
	.buttons[17].physical_num = -1,
	.buttons[17].type = BUTTON_NORMAL,
	.buttons[18].physical_num = -1,
	.buttons[18].type = BUTTON_NORMAL,
	.buttons[19].physical_num = -1,
	.buttons[19].type = BUTTON_NORMAL,
	.buttons[20].physical_num = -1,
	.buttons[20].type = BUTTON_NORMAL,
	.buttons[21].physical_num = -1,
	.buttons[21].type = BUTTON_NORMAL,
	.buttons[22].physical_num = -1,
	.buttons[22].type = BUTTON_NORMAL,
	.buttons[23].physical_num = -1,
	.buttons[23].type = BUTTON_NORMAL,
	.buttons[24].physical_num = -1,
	.buttons[24].type = BUTTON_NORMAL,
	.buttons[25].physical_num = -1,
	.buttons[25].type = BUTTON_NORMAL,
	.buttons[26].physical_num = -1,
	.buttons[26].type = BUTTON_NORMAL,
	.buttons[27].physical_num = -1,
	.buttons[27].type = BUTTON_NORMAL,
	.buttons[28].physical_num = -1,
	.buttons[28].type = BUTTON_NORMAL,
	.buttons[29].physical_num = -1,
	.buttons[29].type = BUTTON_NORMAL,
	.buttons[30].physical_num = -1,
	.buttons[30].type = BUTTON_NORMAL,
	.buttons[31].physical_num = -1,
	.buttons[31].type = BUTTON_NORMAL,
	.buttons[32].physical_num = -1,
	.buttons[32].type = BUTTON_NORMAL,
	.buttons[33].physical_num = -1,
	.buttons[33].type = BUTTON_NORMAL,
	.buttons[34].physical_num = -1,
	.buttons[34].type = BUTTON_NORMAL,
	.buttons[35].physical_num = -1,
	.buttons[35].type = BUTTON_NORMAL,
	.buttons[36].physical_num = -1,
	.buttons[36].type = BUTTON_NORMAL,
	.buttons[37].physical_num = -1,
	.buttons[37].type = BUTTON_NORMAL,
	.buttons[38].physical_num = -1,
	.buttons[38].type = BUTTON_NORMAL,
	.buttons[39].physical_num = -1,
	.buttons[39].type = BUTTON_NORMAL,
	.buttons[40].physical_num = -1,
	.buttons[40].type = BUTTON_NORMAL,
	.buttons[41].physical_num = -1,
	.buttons[41].type = BUTTON_NORMAL,
	.buttons[42].physical_num = -1,
	.buttons[42].type = BUTTON_NORMAL,
	.buttons[43].physical_num = -1,
	.buttons[43].type = BUTTON_NORMAL,
	.buttons[44].physical_num = -1,
	.buttons[44].type = BUTTON_NORMAL,
	.buttons[45].physical_num = -1,
	.buttons[45].type = BUTTON_NORMAL,
	.buttons[46].physical_num = -1,
	.buttons[46].type = BUTTON_NORMAL,
	.buttons[47].physical_num = -1,
	.buttons[47].type = BUTTON_NORMAL,
	.buttons[48].physical_num = -1,
	.buttons[48].type = BUTTON_NORMAL,
	.buttons[49].physical_num = -1,
	.buttons[49].type = BUTTON_NORMAL,
	.buttons[50].physical_num = -1,
	.buttons[50].type = BUTTON_NORMAL,
	.buttons[51].physical_num = -1,
	.buttons[51].type = BUTTON_NORMAL,
	.buttons[52].physical_num = -1,
	.buttons[52].type = BUTTON_NORMAL,
	.buttons[53].physical_num = -1,
	.buttons[53].type = BUTTON_NORMAL,
	.buttons[54].physical_num = -1,
	.buttons[54].type = BUTTON_NORMAL,
	.buttons[55].physical_num = -1,
	.buttons[55].type = BUTTON_NORMAL,
	.buttons[56].physical_num = -1,
	.buttons[56].type = BUTTON_NORMAL,
	.buttons[57].physical_num = -1,
	.buttons[57].type = BUTTON_NORMAL,
	.buttons[58].physical_num = -1,
	.buttons[58].type = BUTTON_NORMAL,
	.buttons[59].physical_num = -1,
	.buttons[59].type = BUTTON_NORMAL,
	.buttons[60].physical_num = -1,
	.buttons[60].type = BUTTON_NORMAL,
	.buttons[61].physical_num = -1,
	.buttons[61].type = BUTTON_NORMAL,
	.buttons[62].physical_num = -1,
	.buttons[62].type = BUTTON_NORMAL,
	.buttons[63].physical_num = -1,
	.buttons[63].type = BUTTON_NORMAL,
	.buttons[64].physical_num = -1,
	.buttons[64].type = BUTTON_NORMAL,
	.buttons[65].physical_num = -1,
	.buttons[65].type = BUTTON_NORMAL,
	.buttons[66].physical_num = -1,
	.buttons[66].type = BUTTON_NORMAL,
	.buttons[67].physical_num = -1,
	.buttons[67].type = BUTTON_NORMAL,
	.buttons[68].physical_num = -1,
	.buttons[68].type = BUTTON_NORMAL,
	.buttons[69].physical_num = -1,
	.buttons[69].type = BUTTON_NORMAL,
	.buttons[70].physical_num = -1,
	.buttons[70].type = BUTTON_NORMAL,
	.buttons[71].physical_num = -1,
	.buttons[71].type = BUTTON_NORMAL,
	.buttons[72].physical_num = -1,
	.buttons[72].type = BUTTON_NORMAL,
	.buttons[73].physical_num = -1,
	.buttons[73].type = BUTTON_NORMAL,
	.buttons[74].physical_num = -1,
	.buttons[74].type = BUTTON_NORMAL,
	.buttons[75].physical_num = -1,
	.buttons[75].type = BUTTON_NORMAL,
	.buttons[76].physical_num = -1,
	.buttons[76].type = BUTTON_NORMAL,
	.buttons[77].physical_num = -1,
	.buttons[77].type = BUTTON_NORMAL,
	.buttons[78].physical_num = -1,
	.buttons[78].type = BUTTON_NORMAL,
	.buttons[79].physical_num = -1,
	.buttons[79].type = BUTTON_NORMAL,
	.buttons[80].physical_num = -1,
	.buttons[80].type = BUTTON_NORMAL,
	.buttons[81].physical_num = -1,
	.buttons[81].type = BUTTON_NORMAL,
	.buttons[82].physical_num = -1,
	.buttons[82].type = BUTTON_NORMAL,
	.buttons[83].physical_num = -1,
	.buttons[83].type = BUTTON_NORMAL,
	.buttons[84].physical_num = -1,
	.buttons[84].type = BUTTON_NORMAL,
	.buttons[85].physical_num = -1,
	.buttons[85].type = BUTTON_NORMAL,
	.buttons[86].physical_num = -1,
	.buttons[86].type = BUTTON_NORMAL,
	.buttons[87].physical_num = -1,
	.buttons[87].type = BUTTON_NORMAL,
	.buttons[88].physical_num = -1,
	.buttons[88].type = BUTTON_NORMAL,
	.buttons[89].physical_num = -1,
	.buttons[89].type = BUTTON_NORMAL,
	.buttons[90].physical_num = -1,
	.buttons[90].type = BUTTON_NORMAL,
	.buttons[91].physical_num = -1,
	.buttons[91].type = BUTTON_NORMAL,
	.buttons[92].physical_num = -1,
	.buttons[92].type = BUTTON_NORMAL,
	.buttons[93].physical_num = -1,
	.buttons[93].type = BUTTON_NORMAL,
	.buttons[94].physical_num = -1,
	.buttons[94].type = BUTTON_NORMAL,
	.buttons[95].physical_num = -1,
	.buttons[95].type = BUTTON_NORMAL,
	.buttons[96].physical_num = -1,
	.buttons[96].type = BUTTON_NORMAL,
	.buttons[97].physical_num = -1,
	.buttons[97].type = BUTTON_NORMAL,
	.buttons[98].physical_num = -1,
	.buttons[98].type = BUTTON_NORMAL,
	.buttons[99].physical_num = -1,
	.buttons[99].type = BUTTON_NORMAL,
	.buttons[100].physical_num = -1,
	.buttons[100].type = BUTTON_NORMAL,
	.buttons[101].physical_num = -1,
	.buttons[101].type = BUTTON_NORMAL,
	.buttons[102].physical_num = -1,
	.buttons[102].type = BUTTON_NORMAL,
	.buttons[103].physical_num = -1,
	.buttons[103].type = BUTTON_NORMAL,
	.buttons[104].physical_num = -1,
	.buttons[104].type = BUTTON_NORMAL,
	.buttons[105].physical_num = -1,
	.buttons[105].type = BUTTON_NORMAL,
	.buttons[106].physical_num = -1,
	.buttons[106].type = BUTTON_NORMAL,
	.buttons[107].physical_num = -1,
	.buttons[107].type = BUTTON_NORMAL,
	.buttons[108].physical_num = -1,
	.buttons[108].type = BUTTON_NORMAL,
	.buttons[109].physical_num = -1,
	.buttons[109].type = BUTTON_NORMAL,
	.buttons[110].physical_num = -1,
	.buttons[110].type = BUTTON_NORMAL,
	.buttons[111].physical_num = -1,
	.buttons[111].type = BUTTON_NORMAL,
	.buttons[112].physical_num = -1,
	.buttons[112].type = BUTTON_NORMAL,
	.buttons[113].physical_num = -1,
	.buttons[113].type = BUTTON_NORMAL,
	.buttons[114].physical_num = -1,
	.buttons[114].type = BUTTON_NORMAL,
	.buttons[115].physical_num = -1,
	.buttons[115].type = BUTTON_NORMAL,
	.buttons[116].physical_num = -1,
	.buttons[116].type = BUTTON_NORMAL,
	.buttons[117].physical_num = -1,
	.buttons[117].type = BUTTON_NORMAL,
	.buttons[118].physical_num = -1,
	.buttons[118].type = BUTTON_NORMAL,
	.buttons[119].physical_num = -1,
	.buttons[119].type = BUTTON_NORMAL,
	.buttons[120].physical_num = -1,
	.buttons[120].type = BUTTON_NORMAL,
	.buttons[121].physical_num = -1,
	.buttons[121].type = BUTTON_NORMAL,
	.buttons[122].physical_num = -1,
	.buttons[122].type = BUTTON_NORMAL,
	.buttons[123].physical_num = -1,
	.buttons[123].type = BUTTON_NORMAL,
	.buttons[124].physical_num = -1,
	.buttons[124].type = BUTTON_NORMAL,
	.buttons[125].physical_num = -1,
	.buttons[125].type = BUTTON_NORMAL,
	.buttons[126].physical_num = -1,
	.buttons[126].type = BUTTON_NORMAL,
	.buttons[127].physical_num = -1,
	.buttons[127].type = BUTTON_NORMAL,

	/*
		AxesToButtons configuration
	*/
	.axes_to_buttons[0].points[0] = 0,
	.axes_to_buttons[0].points[1] = 50,
	.axes_to_buttons[0].points[2] = 100,
	.axes_to_buttons[0].buttons_cnt = 2,
	.axes_to_buttons[0].is_enabled = 0,
	
	.axes_to_buttons[1].points[0] = 0,
	.axes_to_buttons[1].points[1] = 50,
	.axes_to_buttons[1].points[2] = 100,
	.axes_to_buttons[1].buttons_cnt = 2,
	.axes_to_buttons[1].is_enabled = 0,
	
	.axes_to_buttons[2].points[0] = 0,
	.axes_to_buttons[2].points[1] = 50,
	.axes_to_buttons[2].points[2] = 100,
	.axes_to_buttons[2].buttons_cnt = 2,
	.axes_to_buttons[2].is_enabled = 0,
	
	.axes_to_buttons[3].points[0] = 0,
	.axes_to_buttons[3].points[1] = 50,
	.axes_to_buttons[3].points[2] = 100,
	.axes_to_buttons[3].buttons_cnt = 2,
	.axes_to_buttons[3].is_enabled = 0,
	
	.axes_to_buttons[4].points[0] = 0,
	.axes_to_buttons[4].points[1] = 50,
	.axes_to_buttons[4].points[2] = 100,
	.axes_to_buttons[4].buttons_cnt = 2,
	.axes_to_buttons[4].is_enabled = 0,
	
	.axes_to_buttons[5].points[0] = 0,
	.axes_to_buttons[5].points[1] = 50,
	.axes_to_buttons[5].points[2] = 100,
	.axes_to_buttons[5].buttons_cnt = 2,
	.axes_to_buttons[5].is_enabled = 0,
	
	.axes_to_buttons[6].points[0] = 0,
	.axes_to_buttons[6].points[1] = 50,
	.axes_to_buttons[6].points[2] = 100,
	.axes_to_buttons[6].buttons_cnt = 2,
	.axes_to_buttons[6].is_enabled = 0,
	
	.axes_to_buttons[7].points[0] = 0,
	.axes_to_buttons[7].points[1] = 50,
	.axes_to_buttons[7].points[2] = 100,
	.axes_to_buttons[7].buttons_cnt = 2,
	.axes_to_buttons[7].is_enabled = 0,
	
	
	.shift_config[0].button = -1,
	.shift_config[1].button = -1,
	.shift_config[2].button = -1,
	.shift_config[3].button = -1,
	.shift_config[4].button = -1,
		
};


void EnterBootloader (void);

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

