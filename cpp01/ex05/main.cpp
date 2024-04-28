#include "./Harl.hpp"

int	main(void)
{
	std::string	complain;
	Harl		harl;

	complain = "DEBUG";
	harl.complain(complain);
	complain = "INFO";
	harl.complain(complain);
	complain = "WARNING";
	harl.complain(complain);
	complain = "ERROR";
	harl.complain(complain);
	return (0);
}