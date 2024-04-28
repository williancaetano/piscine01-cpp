#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain(std::string level) const;
    void bind(std::string, void (Harl::*f)() const);

private:
    unsigned int count;
    std::string commands[4];
    void (Harl::*functions[4])() const;

    void debug() const;
    void info() const;
    void warning() const;
    void error() const;
};

#endif