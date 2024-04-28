#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

enum e_phoneBook
{
	MAX_CONTACTS = 8,
	MAX_WIDTH = 10
};

class PhoneBook
{
public:
	PhoneBook();
	PhoneBook(PhoneBook const &src);
	~PhoneBook();
	void addContact(void);
	void searchList(void) const;

	PhoneBook &operator=(PhoneBook const &rhs);

private:
	Contact contactList[MAX_CONTACTS];
	unsigned int contactCount;
	unsigned int contactIterator;
};

std::ostream &operator<<(std::ostream &o, PhoneBook const &i);

#endif