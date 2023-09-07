#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::~Weapon(void)
{

}

std::string&		Weapon::getType(void)
{
	std::string	&ref = this->type;

	return (ref);
}
void			Weapon::setType(std::string type)
{
	this->type = type;
}