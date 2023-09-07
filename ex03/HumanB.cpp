#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}
HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void	HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	if (!this->weapon)
		std::cout << "bare hands";
	else
		std::cout << this->weapon->getType();
	std::cout << std::endl;
}