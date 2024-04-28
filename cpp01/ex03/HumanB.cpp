#include "HumanB.hpp"

HumanB::HumanB(std::string nameInit) : name(nameInit), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}

void	HumanB::attack(void) const
{
	if (this->weapon == NULL)
		std::cout << this->name << ": " << "is unnarmed" << std::endl;
	else
		std::cout << this->name << ": " << "attacks with their " << this->weapon->getType() << std::endl;
	return ;
}