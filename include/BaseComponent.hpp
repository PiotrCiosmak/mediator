#pragma once

#include "Mediator.hpp"

class Mediator;

class BaseComponent
{
public:
    explicit BaseComponent(Mediator* new_mediator = nullptr);
    void setMediator(Mediator* mediator);

protected:
    Mediator* mediator;
};
