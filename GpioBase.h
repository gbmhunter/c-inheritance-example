#ifndef GPIO_BASE_H
#define GPIO_BASE_H

#include <stdint.h>

// Forward declaration of the GpioBase struct
typedef struct GpioBase GpioBase;

struct GpioBase {
    /**
     * Set the GPIO to the given value.
     * 
     * @param self The GPIO instance.
     * @param value The value to set the GPIO to.
     */
    void (*set)(GpioBase *self, uint8_t value);

    /**
     * Get the current value of the GPIO.
     * 
     * @param self The GPIO instance.
     * @return The current value of the GPIO.
     */
    uint8_t (*get)(GpioBase *self);
};

/**
 * Initialize the GPIO instance.
 * 
 * @param self The GPIO instance.
 */
void GpioBase_Init(GpioBase *self);

#endif // #ifndef GPIO_BASE_H
