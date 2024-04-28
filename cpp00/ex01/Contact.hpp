#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <cstdio>
# include <iostream>
# include <ostream>
# include <string>
# include <iomanip>


class Contact
{
public:
	Contact(void);
	~Contact(void);
	void printContact(void) const;
	void printPreview(void) const;
	void addContact(void);
	void addFirstName(void);
	void addLastName(void);
	void addNickname(void);
	void addPhoneNumber(void);
	void addDarkestSecret(void);

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

bool validateInput(std::string line, int (*f)(int));

#endif