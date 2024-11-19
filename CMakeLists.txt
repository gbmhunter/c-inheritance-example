cmake_minimum_required(VERSION 3.10)

project(CInheritanceExample C)

add_executable(c-inheritance-example main.c GpioBase.c GpioReal.c GpioFake.c)
