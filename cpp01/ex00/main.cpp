#include "Zombie.hpp"

int	main(void)
{
	Zombie	*chump;

	chump = newZombie("Um");
	randomChump("Dois");
	chump->announce();
	delete (chump);
	return (0);
}