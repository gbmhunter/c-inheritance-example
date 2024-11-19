#ifndef GPIO_REAL_H
#define GPIO_REAL_H

#include "GpioBase.h"

typedef struct {
    GpioBase base;
    uint32_t pinNumber;
} GpioReal;

void GpioReal_init(GpioReal *self, uint32_t pinNumber);

#endif // #ifndef GPIO_REAL_H
