#include "GpioBase.h"
#include "GpioFake.h"
#include "GpioReal.h"

// This function accepts either a GpioReal or a GpioTest!
// This function does not depend on any specific GPIO nor hardware calls
// (i.e. it could be in it's own file and not import GpioReal.h or GpioTest.h)
void functionWhichAcceptsAnyGpio(GpioBase *gpio) {
    // Set the GPIO
    gpio->set(gpio, 1);

    // Read back the GPIO
    gpio->get(gpio);
}

int main() {
    // Create a instance of GpioReal. 13 is the pin number.
    GpioReal gpioReal;
    GpioReal_init(&gpioReal, 13);
    functionWhichAcceptsAnyGpio(&gpioReal.base);

    // Create a instance of GpioFake
    GpioFake gpioFake;
    GpioFake_init(&gpioFake);
    functionWhichAcceptsAnyGpio(&gpioFake.base);

    return 0;
}
