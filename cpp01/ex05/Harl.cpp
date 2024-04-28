#include "Harl.hpp"

Harl::Harl(): count(0)
{
    this->bind("DEBUG", &Harl::debug);
    this->bind("INFO", &Harl::info);
    this->bind("WARNING", &Harl::warning);
    this->bind("ERROR", &Harl::error);
    return;
}

Harl::~Harl()
{
    return;
}

void Harl::debug(void) const
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return;
}

void Harl::info(void) const
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return;
}

void Harl::warning(void) const
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    return;
}

void Harl::error(void) const
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return;
}

void Harl::bind(std::string command, void (Harl::*f)() const)
{ 
    if (this->count >= 4)
    {
        return;
    }
    this->commands[this->count] = command;
    this->functions[this->count] = f;
    this->count++;
}


void Harl::complain(std::string level) const
{
    for (unsigned int i = 0; i < this->count; i++)
    {
        if (level.compare(this->commands[i]) == 0)
        {
            (this->*functions[i])();
            return;
        }
    }
}