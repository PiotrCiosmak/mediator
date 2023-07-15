#pragma once

#include <string>
#include "BaseComponent.hpp"

class BaseComponent;

class Mediator
{
public:
    virtual void notify(BaseComponent* sender, std::string event) const = 0;
};
