#include "../include/Component2.hpp"

void Component2::doC()
{
    std::cout << "Component 2 does C.\n";
    this->mediator->notify(this, "C");
}

void Component2::doD()
{
    std::cout << "Component 2 does D.\n";
    this->mediator->notify(this, "D");
}

