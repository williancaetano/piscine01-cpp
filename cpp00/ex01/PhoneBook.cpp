#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook(): contactIterator(0)
{
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook()
{
	return;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PhoneBook::addContact(void)
{
	this->contactList[this->contactIterator].addContact();
	if (this->contactCount < MAX_CONTACTS)
		this->contactCount++;
	this->contactIterator++;
	if (this->contactIterator == MAX_CONTACTS)
		this->contactIterator = 0;
	return ;
}

void	PhoneBook::searchList(void) const
{
	std::string		buff;
	unsigned int	pb_index;

	if (this->contactCount == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	for (unsigned int i = 0; i < this->contactCount; i++)
	{
		std::cout << std::setw(MAX_WIDTH) << std::setfill(' ') << std::right << i;
		std::cout << "|";
		this->contactList[i].printPreview();
		std::cout << std::endl;
	}
	std::cout << "Choose an index between 0 and 7" << std::endl;
	while (std::getline(std::cin, buff))
	{
		if (buff.length() > 1 || buff.find_first_of("01234567") == std::string::npos)
		{
			std::cout << "Invalid range! Please input a number between 0 and 7" << std::endl;
			continue ;
		}
		pb_index = atoi(buff.c_str());
		if (pb_index >= this->contactCount)
		{
			std::cout << "Not found" << std::endl;
			continue ;
		}
		break ;
	}
	this->contactList[pb_index].printContact();
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
