#include <stdio.h>

#include "GpioReal.h"

void GpioReal_set(GpioBase *self, uint8_t value);
uint8_t GpioReal_get(GpioBase *self);

void GpioReal_init(GpioReal *self, uint32_t pinNumber) {
    // Initialize the base class
    GpioBase_Init(&self->base);
    // Override the set and get methods
    self->base.set = GpioReal_set;
    self->base.get = GpioReal_get;
    // Initialize the pin number
    self->pinNumber = pinNumber;
}

void GpioReal_set(GpioBase *self, uint8_t value) {
    GpioReal *gpioReal = (GpioReal *)self;
    printf("Real GPIO set() called. This is where you would make hardware calls.\n");
    // gpio_set(gpioReal->pinNumber, value);
}

uint8_t GpioReal_get(GpioBase *self) {
    GpioReal *gpioReal = (GpioReal *)self;
    printf("Real GPIO get() called. This is where you would make hardware calls.\n");
    // return gpio_get(gpioReal->pinNumber);
    return 0;
}
