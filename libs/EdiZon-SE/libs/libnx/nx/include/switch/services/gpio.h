/**
 * @file gpio.h
 * @brief GPIO service IPC wrapper.
 * @author SciresM
 * @copyright libnx Authors
 */
#pragma once
#include "../types.h"
#include "../sf/service.h"

typedef enum {
    GpioPadName_AudioCodec = 1,
    GpioPadName_ButtonVolUp = 25,
    GpioPadName_ButtonVolDown = 26,
} GpioPadName;

typedef struct {
    Service s;
} GpioPadSession;

typedef enum {
    GpioDirection_Input = 0,
    GpioDirection_Output = 1,
} GpioDirection;

typedef enum {
    GpioValue_Low = 0,
    GpioValue_High = 1,
} GpioValue;

/// Initialize gpio.
Result gpioInitialize(void);

/// Exit gpio.
void gpioExit(void);

/// Gets the Service object for the actual gpio service session.
Service* gpioGetServiceSession(void);

Result gpioOpenSession(GpioPadSession *out, GpioPadName name);

Result gpioPadSetDirection(GpioPadSession *p, GpioDirection dir);
Result gpioPadGetDirection(GpioPadSession *p, GpioDirection *out);
Result gpioPadSetValue(GpioPadSession *p, GpioValue val);
Result gpioPadGetValue(GpioPadSession *p, GpioValue *out);
void gpioPadClose(GpioPadSession *p);
