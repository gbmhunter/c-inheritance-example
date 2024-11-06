#ifndef GPIO_TEST_H
#define GPIO_TEST_H

#include "GpioBase.h"

typedef struct {
    GpioBase base;
    uint8_t state;
    uint32_t numSetCalls;
    uint32_t numGetCalls;
} GpioTest;

void GpioTest_init(GpioTest *self);

#endif // #ifndef GPIO_TEST_H
