

// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

//
// Simple implementation of IoTHub LWM2M Device object
//

//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.

#ifndef _DEVICE_OBJECT_H_
#define _DEVICE_OBJECT_H_

#include "iothub_client.h"

#ifdef __cplusplus
extern "C"
{
#endif

// LWM2M Object IDs and Property IDs for device object
#define OID_DEVICE 3
#define PID_DEVICE_MANUFACTURER 0
#define PID_DEVICE_MODELNUMBER 1
#define PID_DEVICE_SERIALNUMBER 2
#define PID_DEVICE_FIRMWAREVERSION 3
#define PID_DEVICE_REBOOT 4
#define PID_DEVICE_FACTORYRESET 5
#define PID_DEVICE_BATTERYLEVEL 9
#define PID_DEVICE_MEMORYFREE 10
#define PID_DEVICE_CURRENTTIME 13
#define PID_DEVICE_UTCOFFSET 14
#define PID_DEVICE_TIMEZONE 15
#define PID_DEVICE_DEVICETYPE 17
#define PID_DEVICE_HARDWAREVERSION 18
#define PID_DEVICE_BATTERYSTATUS 20
#define PID_DEVICE_MEMORYTOTAL 21

#define DEVICE_PROPERTY_COUNT 15

typedef struct TAG_object_device object_device;
typedef IOTHUB_CLIENT_RESULT(*DEVICE_RESOURCE_CALLBACK)(object_device *obj);

// Object definition for device object
typedef struct TAG_object_device {
    uint16_t instanceId;    // Must be first member of structure
    IOTHUB_CHANNEL_HANDLE channelHandle;
    char resourceUpdated[DEVICE_PROPERTY_COUNT];
    char* propval_device_manufacturer;        // /3/x/0
    char* propval_device_modelnumber;        // /3/x/1
    char* propval_device_serialnumber;        // /3/x/2
    char* propval_device_firmwareversion;        // /3/x/3
    int propval_device_batterylevel;        // /3/x/9
    int propval_device_memoryfree;        // /3/x/10
    int propval_device_currenttime;        // /3/x/13
    char* propval_device_utcoffset;        // /3/x/14
    char* propval_device_timezone;        // /3/x/15
    char* propval_device_devicetype;        // /3/x/17
    char* propval_device_hardwareversion;        // /3/x/18
    int propval_device_batterystatus;        // /3/x/20
    int propval_device_memorytotal;        // /3/x/21
    DEVICE_RESOURCE_CALLBACK device_manufacturer_read_callback;
    DEVICE_RESOURCE_CALLBACK device_modelnumber_read_callback;
    DEVICE_RESOURCE_CALLBACK device_serialnumber_read_callback;
    DEVICE_RESOURCE_CALLBACK device_firmwareversion_read_callback;
    DEVICE_RESOURCE_CALLBACK device_reboot_execute_callback;
    DEVICE_RESOURCE_CALLBACK device_factoryreset_execute_callback;
    DEVICE_RESOURCE_CALLBACK device_batterylevel_read_callback;
    DEVICE_RESOURCE_CALLBACK device_memoryfree_read_callback;
    DEVICE_RESOURCE_CALLBACK device_currenttime_read_callback;
    DEVICE_RESOURCE_CALLBACK device_currenttime_write_callback;
    DEVICE_RESOURCE_CALLBACK device_utcoffset_read_callback;
    DEVICE_RESOURCE_CALLBACK device_utcoffset_write_callback;
    DEVICE_RESOURCE_CALLBACK device_timezone_read_callback;
    DEVICE_RESOURCE_CALLBACK device_timezone_write_callback;
    DEVICE_RESOURCE_CALLBACK device_devicetype_read_callback;
    DEVICE_RESOURCE_CALLBACK device_hardwareversion_read_callback;
    DEVICE_RESOURCE_CALLBACK device_batterystatus_read_callback;
    DEVICE_RESOURCE_CALLBACK device_memorytotal_read_callback;
} object_device;

IOTHUB_CLIENT_RESULT create_device_object(IOTHUB_CLIENT_HANDLE h, uint16_t *instanceId);
object_device *get_device_object(uint16_t instanceId);

// Property setters for device object
IOTHUB_CLIENT_RESULT set_device_manufacturer(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_modelnumber(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_serialnumber(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_firmwareversion(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_batterylevel(uint16_t instanceId, int value);
IOTHUB_CLIENT_RESULT set_device_memoryfree(uint16_t instanceId, int value);
IOTHUB_CLIENT_RESULT set_device_currenttime(uint16_t instanceId, int value);
IOTHUB_CLIENT_RESULT set_device_utcoffset(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_timezone(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_devicetype(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_hardwareversion(uint16_t instanceId, const char *value);
IOTHUB_CLIENT_RESULT set_device_batterystatus(uint16_t instanceId, int value);
IOTHUB_CLIENT_RESULT set_device_memorytotal(uint16_t instanceId, int value);

#ifdef __cplusplus
}
#endif

#endif // _DEVICE_OBJECT_H_

