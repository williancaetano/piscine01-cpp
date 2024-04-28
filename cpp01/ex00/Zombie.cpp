#include "Zombie.hpp"

Zombie::Zombie(std::string inputName) : name(inputName)
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