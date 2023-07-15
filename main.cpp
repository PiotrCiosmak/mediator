#include <iostream>
#include <memory>
#include "include/Component1.hpp"
#include "include/Component2.hpp"
#include "include/ConcreteMediator.hpp"

void clientCode()
{
    Component1* component1 = new Component1;
    Component2* component2 = new Component2;
    ConcreteMediator* mediator = new ConcreteMediator(component1, component2);

    std::cout << "Client triggers operation A.\n";
    component1->doA();

    std::cout << "\nClient triggers operation D.\n";
    component2->doD();

    delete component1;
    delete component2;
    delete mediator;
}

int main()
{
    clientCode();
}
