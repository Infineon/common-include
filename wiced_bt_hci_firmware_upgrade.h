/***************************************************************************//**
* \file <wiced_bt_hci_firmware_upgrade.h>
*
* AIROC HCI Firmware Upgrade
*
* \brief Provides definitions and APIs that exposes HCI Firmware Upgrade
* managed by the Firmware Upgrade library, e.g.
* fw_upgrade_lib. This service can be utilized by peer Firmware Upgrade
* applications to perform a firmware upgrade.
*
*//*****************************************************************************
* $ Copyright 2016-YEAR Cypress Semiconductor $
*******************************************************************************/
#ifndef WICED_BT_HCI_FIRMWARE_UPGRADE__H
#define WICED_BT_HCI_FIRMWARE_UPGRADE__H

#include "wiced_bt_gatt.h"
#include "wiced_bt_ota_firmware_upgrade.h"

/**
* \defgroup    wicedsys                             AIROC System
*
* \addtogroup  group_hci_wiced_firmware_upgrade     AIROC HCI Firmware Upgrade
* \ingroup     wicedsys
* @{
*
*  The AIROC HCI Firmware Upgrade Service is used by peer applications to
*  upgrade firmware on AIROC Bluetooth devices over an HCI connection.
*
* \defgroup group_hci_fw_upgrade_macros Macros
* \defgroup group_hci_fw_upgrade_cback_functions Callback Functions
* \defgroup group_hci_fw_upgrade_functions Functions
*/

/**
* \addtogroup group_hci_fw_upgrade_macros
* \{
*/

/* Command definitions for the HCI FW upgrade */
#define WICED_HCI_UPGRADE_COMMAND_PREPARE_DOWNLOAD              WICED_OTA_UPGRADE_COMMAND_PREPARE_DOWNLOAD
#define WICED_HCI_UPGRADE_COMMAND_DOWNLOAD                      WICED_OTA_UPGRADE_COMMAND_DOWNLOAD
#define WICED_HCI_UPGRADE_COMMAND_VERIFY                        WICED_OTA_UPGRADE_COMMAND_VERIFY
#define WICED_HCI_UPGRADE_COMMAND_FINISH                        WICED_OTA_UPGRADE_COMMAND_FINISH
#define WICED_HCI_UPGRADE_COMMAND_GET_STATUS                    WICED_OTA_UPGRADE_COMMAND_GET_STATUS /* Not currently used */
#define WICED_HCI_UPGRADE_COMMAND_CLEAR_STATUS                  WICED_OTA_UPGRADE_COMMAND_CLEAR_STATUS /* Not currently used */
#define WICED_HCI_UPGRADE_COMMAND_ABORT                         WICED_OTA_UPGRADE_COMMAND_ABORT

/* firmware upgrade status codes */
#define HCI_FW_UPGRADE_STATUS_STARTED                           OTA_FW_UPGRADE_STATUS_STARTED
#define HCI_FW_UPGRADE_STATUS_ABORTED                           OTA_FW_UPGRADE_STATUS_ABORTED
#define HCI_FW_UPGRADE_STATUS_COMPLETED                         OTA_FW_UPGRADE_STATUS_COMPLETED
#define HCI_FW_UPGRADE_STATUS_VERIFICATION_START                OTA_FW_UPGRADE_STATUS_VERIFICATION_START

/* firmware upgrade callback events */
#define HCI_FW_UPGRADE_EVENT_STARTED                            OTA_FW_UPGRADE_EVENT_STARTED
#define HCI_FW_UPGRADE_EVENT_DATA                               OTA_FW_UPGRADE_EVENT_DATA
#define HCI_FW_UPGRADE_EVENT_COMPLETED                          OTA_FW_UPGRADE_EVENT_COMPLETED
/** \} group_hci_fw_upgrade_macros */

#ifdef __cplusplus
extern "C" {
#endif

/**
* \addtogroup group_hci_fw_upgrade_cback_functions
* \{
*/
/** An optional callback to be executed when the Fimware Upgrade state changes.
* The application can register the callback to execute when the client starts,
* aborts or completes the firmware upgrade process. When the firmware
* has been downloaded and verified and before a callback is executed before
* the library restarts. For example, if the application needs to drop all connections.
*
* \param   status : firmware upgrade status (see @ref HCI_FW_UPGRADE_STATUS "firmware upgrade status codes")
*
******************************************************************************/
typedef void (wiced_hci_firmware_upgrade_status_callback_t)(uint8_t status);

/** \} group_hci_fw_upgrade_cback_functions */

/**
* \addtogroup group_hci_fw_upgrade_functions
* \{
*/
/******************************************************************************
* Function Name: wiced_hci_fw_upgrade_init
***************************************************************************//**
* \brief alias for wiced_ota_fw_upgrade_init
*
******************************************************************************/
#define wiced_hci_fw_upgrade_init wiced_ota_fw_upgrade_init

/******************************************************************************
* Function Name: wiced_hci_fw_upgrade_is_active
***************************************************************************//**
* \brief alias for wiced_ota_fw_upgrade_is_active.
*
******************************************************************************/
#define wiced_hci_fw_upgrade_is_active wiced_ota_fw_upgrade_is_active

/******************************************************************************
* Function Name: wiced_hci_fw_upgrade_get_new_fw_info
***************************************************************************//**
* \brief Alias for wiced_ota_fw_upgrade_get_new_fw_info.
*
******************************************************************************/
#define  wiced_hci_fw_upgrade_get_new_fw_info wiced_ota_fw_upgrade_get_new_fw_info

/******************************************************************************
* Function Name: wiced_hci_fw_upgrade_set_transfer_mode
***************************************************************************//**
* \brief Alias for wiced_ota_fw_upgrade_set_transfer_mode
*
******************************************************************************/
#define wiced_hci_fw_upgrade_set_transfer_mode wiced_ota_fw_upgrade_set_transfer_mode

/******************************************************************************
* Function Name: hci_fw_upgrade_handle_data
***************************************************************************//**
* \brief Data transfer handler
*
* \details The application calls this function to pass data to the firmware upgrade library
*
* \param[in] conn_id Parameter not used for HCI firmware upgrade
* \param[in] data    Pointer to data.
* \param[in] len     Length of data to write.
*
* \return true  Write was successful, otherwise - false.
*
******************************************************************************/
wiced_bool_t ota_fw_upgrade_handle_data(uint16_t conn_id, uint8_t *data, int32_t len);
#define hci_fw_upgrade_handle_data ota_fw_upgrade_handle_data

/******************************************************************************
* Function Name: hci_fw_upgrade_handle_command
***************************************************************************//**
* \brief Firmware upgrade command handler
*
* \details The application calls this function to pass commands to the firmware upgrade library
*
* \param[in] conn_id Parameter not used for HCI firmware upgrade
* \param[in] data    Pointer to data command and parameters. The command value is in the first byte of data.
                     Optional parameters follow.
* \param[in] len     Length of data command and parameters.
*
* \return true      The handle is a GATT handle, otherwise - false.
*
******************************************************************************/
wiced_bool_t ota_fw_upgrade_handle_command(uint16_t conn_id, uint8_t *data, int32_t len);
#define hci_fw_upgrade_handle_command ota_fw_upgrade_handle_command

/** \} group_hci_fw_upgrade_functions */
#ifdef __cplusplus
}
#endif

#endif /* WICED_BT_HCI_FIRMWARE_UPGRADE__H */
