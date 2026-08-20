/*
 * $ Copyright 2016-YEAR Cypress Semiconductor $
 */

/**************************************************************************//**
* \file <wiced_thermistor.h>
* List of parameters and defined functions needed to access the
* thermistor sensor driver.
*
******************************************************************************/
#ifndef _WICED_THERMISTOR_H
#define _WICED_THERMISTOR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Following structure is used to initialize thermistor
 */
typedef struct
{
    uint16_t                high_pin;           /*  A/D input high pin    */
    uint16_t                low_pin;            /*  A/D input low pin (not used for thermistor ncu15wf104)   */
    uint16_t                adc_power_pin;      /*  ADC power pin (not used for thermistor ncu15wf104) */
} thermistor_cfg_t;

/******************************************************************************
* Function Name: therm_init
***************************************************************************//**
* init thermistor.
*
*
* \return None
******************************************************************************/
void thermistor_init(void);

/******************************************************************************
* Function Name: thermistor_read
***************************************************************************//**
* read thermistor temperature.
*
* \param  p_thermistor_cfg: pointer to thermister config structure
*
* \return Temperature in degrees Celsius * 100.
******************************************************************************/
int16_t thermistor_read(thermistor_cfg_t *p_thermistor_cfg);


#ifdef __cplusplus
}
#endif

#endif
