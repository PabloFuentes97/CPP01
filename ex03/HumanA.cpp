#include "HumanA.hpp"

HumanA::~HumanA(void)
{

}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}
void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}