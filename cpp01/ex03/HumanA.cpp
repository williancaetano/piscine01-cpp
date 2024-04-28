#include "HumanA.hpp"

HumanA::HumanA(std::string nameInit, Weapon &weaponInit) : name(nameInit), weapon(weaponInit)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << ": " << "attacks with their " << this->weapon.getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &new_weapon)
{
	this->weapon = new_weapon;
}