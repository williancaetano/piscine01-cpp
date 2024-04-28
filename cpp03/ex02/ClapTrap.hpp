#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	void setName(std::string name);
	int getHitPoints(void) const;
	void setHitPoints(long int ammount);
	int getEnergyPoints(void) const;
	void setEnergyPoints(const int ammount);
	int getAttackDamage(void) const;
	void setAttackDamage(const int ammount);

	ClapTrap &operator=(ClapTrap const &rhs);

private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif