#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		attack(void) const;
		void		setWeapon(Weapon &new_weapon);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif