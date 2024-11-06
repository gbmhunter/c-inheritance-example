#include <stdio.h>

#include "GpioReal.h"

void GpioReal_set(GpioBase *self, uint8_t value);
uint8_t GpioReal_get(GpioBase *self);

void GpioReal_init(GpioReal *self) {
    // Initialize the base class
    GpioBase_Init(&self->base);
    // Override the set and get methods
    self->base.set = GpioReal_set;
    self->base.get = GpioReal_get;
}

void GpioReal_set(GpioBase *self, uint8_t value) {
    GpioReal *gpioReal = (GpioReal *)self;
    printf("Real GPIO set() called. This is where you would make hardware calls.\n");
}

uint8_t GpioReal_get(GpioBase *self) {
    GpioReal *gpioReal = (GpioReal *)self;
    printf("Real GPIO get() called. This is where you would make hardware calls.\n");
    return 0;
}
