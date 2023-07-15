#pragma once

#include "Mediator.hpp"
#include "Component1.hpp"
#include "Component2.hpp"

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator(Component1* new_component_1, Component2* new_component_2);
    void notify(BaseComponent* sender, std::string event) const override;

private:
    Component1* component_1;
    Component2* component_2;
};
