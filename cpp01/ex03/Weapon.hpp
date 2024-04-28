#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();
    std::string const &getType() const;
    void setType(std::string type);

private:
    std::string type;

};

#endif