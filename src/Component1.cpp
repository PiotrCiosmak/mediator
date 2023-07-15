#include "../include/Component1.hpp"

void Component1::doA()
{
    std::cout << "Component 1 does A.\n";
    this->mediator->notify(this, "A");
}

void Component1::doB()
{
    std::cout << "Component 1 does B.\n";
    this->mediator->notify(this, "B");
}

