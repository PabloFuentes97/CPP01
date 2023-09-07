#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class	Weapon{
	private:
		std::string	type;
	public:
						Weapon(void);
						Weapon(std::string name);
						~Weapon(void);
		std::string&	getType(void);
		void			setType(std::string type);
};

#endif