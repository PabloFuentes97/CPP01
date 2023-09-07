#include <string>

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void);
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif