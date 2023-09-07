#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(3, "paco");

	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}