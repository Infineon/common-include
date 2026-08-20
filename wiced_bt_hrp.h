/*
 * $ Copyright 2016-YEAR Cypress Semiconductor $
 */

/**************************************************************************//**
* @file
*
* \brief This file provides common definitions used by the Heart Rate Server(HRS)
* and Heart Rate Client.(HRC)
*
******************************************************************************/
#ifndef WICED_BT_HRP_H
#define WICED_BT_HRP_H
#include "wiced_bt_types.h"

/**************************************************************************//**
* \anchor HEART_RATE_SENSOR_LOCATION
* \name Heart Rate Sensor location
* @{
******************************************************************************/
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_OTHER       0
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_CHEST       1
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_WRIST       2
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_FINGER      3
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_HANDLE      4
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_EARLOBE     5
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_FOOT        6
#define WICED_BT_HEART_RATE_SENSOR_LOCATION_MAX         WICED_BT_HEART_RATE_SENSOR_LOCATION_FOOT
typedef uint8_t wiced_bt_heart_rate_senor_location_t;
/** @} HEART_RATE_SENSOR_LOCATION */

#define WICED_BT_HRP_CONTROL_POINT_WRITE_UNSUPPORTED_VALUE      0x80

#endif /* WICED_BT_HRP_H */
