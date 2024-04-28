#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << this->name << " died" << std::endl;
}


void Zombie::announce() const
{
    std::cout << this->name << std::endl;
    return;

}

void Zombie::setName(std::string name)
{
    this->name = name;
}