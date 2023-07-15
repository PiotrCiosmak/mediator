#include "../include/BaseComponent.hpp"

BaseComponent::BaseComponent(Mediator* new_mediator)
{
    this->mediator = new_mediator;
}

void BaseComponent::setMediator(Mediator* mediator)
{
    this->mediator = mediator;
}
