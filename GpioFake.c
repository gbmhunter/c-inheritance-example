#include <stdio.h>

#include "GpioFake.h"

void GpioFake_set(GpioBase *self, uint8_t value);
uint8_t GpioFake_get(GpioBase *self);

void GpioFake_init(GpioFake *self) {
    // Initialize the base class
    GpioBase_Init(&self->base);
    // Override the set and get methods
    self->base.set = GpioFake_set;
    self->base.get = GpioFake_get;
    // Initialize the test state
    self->state = 0;
    self->numSetCalls = 0;
    self->numGetCalls = 0;
}

void GpioFake_set(GpioBase *self, uint8_t value) {
    GpioFake *gpioFake = (GpioFake *)self;
    gpioFake->state = value;
    gpioFake->numSetCalls++;
    printf("Fake GPIO set() called. For testing, this is where you would keep track how many times the GPIO is set, when it was called, and what value.\n");
}

uint8_t GpioFake_get(GpioBase *self) {
    GpioFake *gpioFake = (GpioFake *)self;
    gpioFake->numGetCalls++;
    printf("Fake GPIO get() called. This is where you would keep track how many times the GPIO is read, when, and you could fake return values.\n");
    return gpioFake->state;
}
