#include "PhoneBook.hpp"

void printWelcome(void);

int main(void)
{
    PhoneBook phoneBook;
    std::string buff;
    unsigned int len;

    printWelcome();
    while (std::getline(std::cin, buff))
    {
        len = buff.length();
        for (unsigned int i = 0; i < len; i++)
            buff[i] = toupper(buff[i]);
        if (buff.compare("ADD") == 0)
            phoneBook.addContact();
        else if (buff.compare("SEARCH") == 0)
            phoneBook.searchList();
        else if (buff.compare("HELP") == 0)
            std::cout << "Available commands: ADD, SEARCH and EXIT" << std::endl;
        else if (buff.compare("EXIT") == 0)
            break;
        else
            std::cout << "Wrong input" << std::endl;
        std::cout << "Choose a command" << std::endl;
    }
    return (0);
}

void printWelcome(void)
{
    std::cout << "Phonebook" << std::endl;
    std::cout << "Available commands: ADD, SEARCH and EXIT" << std::endl;
    return;
}