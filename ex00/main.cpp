#include "Zombie.hpp"

int	main(void)
{
	Zombie	*manuel = newZombie("manuel");

	manuel->announce();
	randomChump("manolo");
	delete manuel;
	return (0);
}