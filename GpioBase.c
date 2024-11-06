#include <assert.h>
#include <stdio.h>

#include "GpioBase.h"

// Private function declarations
void GpioBase_set(GpioBase *self, uint8_t value);
uint8_t GpioBase_get(GpioBase *self);

void GpioBase_Init(GpioBase *self) {
    self->set = GpioBase_set;
    self->get = GpioBase_get;
}

void GpioBase_set(GpioBase *self, uint8_t value) {
    printf("GpioBase_set() called. This should never happen!\n");
    assert(0);
}

uint8_t GpioBase_get(GpioBase *self) {
    printf("GpioBase_get() called. This should never happen!\n");
    assert(0);
    return 0;
}
