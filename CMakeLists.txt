cmake_minimum_required(VERSION 3.25)
project(mediator)

set(CMAKE_CXX_STANDARD 23)

add_executable(mediator main.cpp include/Mediator.hpp src/BaseComponent.cpp include/BaseComponent.hpp src/Component1.cpp include/Component1.hpp src/Component2.cpp include/Component2.hpp src/ConcreteMediator.cpp include/ConcreteMediator.hpp)
