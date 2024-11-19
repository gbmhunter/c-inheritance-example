#ifndef GPIO_FAKE_H
#define GPIO_FAKE_H

#include "GpioBase.h"

typedef struct {
    GpioBase base;
    uint8_t state;
    uint32_t numSetCalls;
    uint32_t numGetCalls;
} GpioFake;

void GpioFake_init(GpioFake *self);

#endif // #ifndef GPIO_FAKE_H
