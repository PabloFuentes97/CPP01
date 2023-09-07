#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class	HumanA{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string n, Weapon &w) : name(n), weapon(w)
		{
		};
		~HumanA(void);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif