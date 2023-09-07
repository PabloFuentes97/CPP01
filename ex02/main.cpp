#include "iostream"

int	main(void)
{
	std::string	phrase = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = phrase;

	stringPTR = NULL;
	stringPTR = &phrase;
	std::cout << &phrase << " " << stringPTR << " " << &stringREF << std::endl;
	std::cout << phrase << " " << *stringPTR << " " << stringREF << std::endl;
	return (0);
}