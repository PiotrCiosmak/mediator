#include "../include/ConcreteMediator.hpp"

ConcreteMediator::ConcreteMediator(Component1* new_component_1, Component2* new_component_2)
        : component_1{new_component_1}, component_2{new_component_2}
{
    this->component_1->setMediator(this);
    this->component_2->setMediator(this);
}

void ConcreteMediator::notify(BaseComponent* sender, std::string event) const
{
    if (event == "A")
    {
        std::cout << "Mediator reacts on A and triggers following operations:\n";
        this->component_2->doC();
    }
    if (event == "D")
    {
        std::cout << "Mediator reacts on D and triggers following operations:\n";
        this->component_1->doB();
        this->component_2->doC();
    }
}
