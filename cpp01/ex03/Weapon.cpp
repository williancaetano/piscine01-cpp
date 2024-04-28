#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const &Weapon::getType() const
{
    std::string const &ref = this->type;
    return (ref);
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return;
}