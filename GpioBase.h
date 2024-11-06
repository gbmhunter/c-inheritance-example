#ifndef GPIO_BASE_H
#define GPIO_BASE_H

#include <stdint.h>

// Forward declaration of the GpioBase struct
typedef struct GpioBase GpioBase;

// Declare the set and get functions
typedef void (*GpioBase_Set)(GpioBase *self, uint8_t value);
typedef uint8_t (*GpioBase_Get)(GpioBase *self);

struct GpioBase {
    GpioBase_Set set;
    GpioBase_Get get;
};

void GpioBase_Init(
    GpioBase *self,
    GpioBase_Set set,
    GpioBase_Get get);

void GpioBase_set(GpioBase *self, uint8_t value);
uint8_t GpioBase_get(GpioBase *self);

#endif // #ifndef GPIO_BASE_H
