#include <assert.h>

#include "GpioBase.h"
#include "GpioTest.h"
#include "GpioReal.h"

// This function accepts either a GpioReal or a GpioTest!
// This function does not depend on any specific GPIO nor hardware calls
// (i.e. it could be in it's own file and not import GpioReal.h or GpioTest.h)
void functionWhichAcceptsAnyGpio(GpioBase *gpio) {
    // Set the GPIO
    GpioBase_set(gpio, 1);

    // Read back the GPIO
    GpioBase_get(gpio);
}

int main() {
    // Create a instance of GpioReal
    GpioReal gpioReal;
    GpioReal_init(&gpioReal);
    functionWhichAcceptsAnyGpio(&gpioReal.base);

    // Create a instance of GpioTest
    GpioTest gpioTest;
    GpioTest_init(&gpioTest);
    functionWhichAcceptsAnyGpio(&gpioTest.base);

    return 0;
}
