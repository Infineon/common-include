/*
* $ Copyright 2016-YEAR Cypress Semiconductor $
*/
#ifndef __HSL_RGB_LIB_H
#define __HSL_RGB_LIB_H


#define HSL_COLOR_MIN_HUE                           (0)
#define HSL_COLOR_MAX_HUE                           (65535)
#define HSL_COLOR_MIN_SATURATION                    (0)
#define HSL_COLOR_MAX_SATURATION                    (65535)
#define HSL_COLOR_MIN_LIGHTNESS                     (0)
#define HSL_COLOR_MAX_LIGHTNESS                     (65535)
#define RGB_COLOR_MIN_RED                           (0)
#define RGB_COLOR_MAX_RED                           (255)
#define RGB_COLOR_MIN_GREEN                         (0)
#define RGB_COLOR_MAX_GREEN                         (255)
#define RGB_COLOR_MIN_BLUE                          (0)
#define RGB_COLOR_MAX_BLUE                          (255)

#define NULL_VALUE  0

/******************************************************************************
* Function Name: hsl_2_rgb
***************************************************************************//**
* Convert HSL Color values to RGB Color values.
*
* \param hue            Input, HSL color hue value, value range: 0 ~ 65535, unit: degree.
* \param saturation     Input, HSL color saturation value, value range: 0 ~ 65535, unit: percentage.
* \param lightness      Input, HSL color lightness, value range: 0 ~ 65535, unit: percentage.
* \param red            Output, RBG color red value, value range: 0 ~255.
* \param green          Output, RBG color green value, value range: 0 ~255.
* \param blue           Output, RBG color blue value, value range: 0 ~255.
*
*
* \return None
******************************************************************************/
int hsl_2_rgb(int hue, int saturation, int lightness, int *red, int *green, int *blue);

#endif
