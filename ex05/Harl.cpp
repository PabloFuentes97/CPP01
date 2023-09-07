#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{

}
Harl::~Harl(void)
{

}

void Harl::debug( void )
{
	std::cout << "Debug" << std::endl;
}
void Harl::info( void )
{
	std::cout << "Info" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "Warning" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Error" << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4) {
		if (!level.compare(levels[i]))
			break ;
		i++; }
	if (i == 4) {
		std::cout << level << " doesn't exists" << std::endl;
		return ; }
	(this->*ptr[i])();
}