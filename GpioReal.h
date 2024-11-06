#ifndef GPIO_REAL_H
#define GPIO_REAL_H

#include "GpioBase.h"

typedef struct {
    GpioBase base;
    uint8_t state;
    uint32_t numSetCalls;
    uint32_t numGetCalls;
} GpioReal;

void GpioReal_init(GpioReal *self);

#endif // #ifndef GPIO_REAL_H
