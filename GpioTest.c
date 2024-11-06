#include <stdio.h>

#include "GpioTest.h"

void GpioTest_set(GpioBase *self, uint8_t value);
uint8_t GpioTest_get(GpioBase *self);

void GpioTest_init(GpioTest *self) {
    // Initialize the base class
    GpioBase_Init(&self->base);
    // Override the set and get methods
    self->base.set = GpioTest_set;
    self->base.get = GpioTest_get;
    // Initialize the test state
    self->state = 0;
    self->numSetCalls = 0;
    self->numGetCalls = 0;
}

void GpioTest_set(GpioBase *self, uint8_t value) {
    GpioTest *gpioTest = (GpioTest *)self;
    gpioTest->state = value;
    gpioTest->numSetCalls++;
    printf("Test GPIO set() called. For testing, this is where you would keep track how many times the GPIO is set, when it was called, and what value.\n");
}

uint8_t GpioTest_get(GpioBase *self) {
    GpioTest *gpioTest = (GpioTest *)self;
    gpioTest->numGetCalls++;
    printf("Test GPIO get() called. This is where you would keep track how many times the GPIO is read, when, and you could fake return values.\n");
    return gpioTest->state;
}
