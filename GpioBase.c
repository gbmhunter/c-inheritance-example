#include "GpioBase.h"

void GpioBase_Init(
    GpioBase *self,
    void (*set)(GpioBase *self, uint8_t value),
    uint8_t (*get)(GpioBase *self)) {
    self->set = set;
    self->get = get;
}

void GpioBase_set(GpioBase *self, uint8_t value) {
    self->set(self, value);
}

uint8_t GpioBase_get(GpioBase *self) {
    return self->get(self);
}
