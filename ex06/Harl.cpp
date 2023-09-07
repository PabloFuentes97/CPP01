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

void	Harl::complain_levels(int level)
{
	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	(this->*ptr[level])();
}

void Harl::complain( std::string level )
{
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 4) {
		if (!level.compare(levels[i]))
			break ;
		i++; } 
	switch (i)
	{
		case 0:
			this->complain_levels(0);
		case 1:
			this->complain_levels(1);
		case 2:
			this->complain_levels(2);
		case 3:
			this->complain_levels(3);
			break ;
		default:
			std::cout << level << " isn't a command!" << std::endl;
	}
}