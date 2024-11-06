# c-inheritance-example

This is an example of how to perform inheritance in C. This example is tailored towards an embedded system where you might want to use inheritance to make testing easier. Your code you want to test can be passed in an instance of the base class and use that (dependency injection).

In the real world, `main()` would create an instance of the real GPIO class and pass that to your code.

Then in your test `main()`, you create an instance of the test GPIO class and pass that to your code under test.

* Take a look at `GpioBase.h/c` for the abstract base class that defines the interface the application needs to work.
* See `GpioReal.h/c` for a concrete implementation of that base class that makes hardware calls.
* See `GpioTest.h/c` for a concrete implementation of the base class that is purely for testing and can be used to fake hardware calls.

## How to Build and Run

Make sure you have CMake installed and a suitable C compiler (e.g. GCC) installed.

Then clone this repository, `cd` into the root directory and run the following commands:

```sh
mkdir build
cd build
cmake ..
cmake --build .
```

Then run the example executable with:

```sh
./c-inheritance-example
```

Example output:

```txt
Real GPIO set() called. This is where you would make hardware calls.
Real GPIO get() called. This is where you would make hardware calls.
Test GPIO set() called. For testing, this is where you would keep track how many times the GPIO is set, when it was called, and what value.
Test GPIO get() called. This is where you would keep track how many times the GPIO is read, when, and you could fake return values.
```
