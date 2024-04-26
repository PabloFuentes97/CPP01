#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	//check if arg num is correct
	if (argc != 4) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1); }
	//open read and write streams
	std::ifstream	Read(argv[1], std::ios::in);
	if (!Read.is_open()){
		std::cout << "Couldn't open file to read" << std::endl;
		return (2); }
	std::string		writeFile = std::string(argv[1]) + ".replace";
	std::ofstream	Write(writeFile, std::ios::out | std::ios::trunc);
	if (!Write.is_open()){
		std::cout << "Couldn't open file to write" << std::endl;
		return (3);
	}
	//check if word to find is empty
	std::string	find = argv[2];
	std::string	sust = argv[3];
	if (sust.empty())
	{
		std::cout << "Empty word to search" << std::endl;
		return (4);
	}
	//read org file and write in replace file
	int	findLen = find.length();
	std::string	line;
	int	i;
	while (!Read.eof())
	{
		std::getline(Read, line);
		
		i = line.find(find, 0);
		while (i != -1)
		{
			line.replace(i, findLen, sust);
			i = line.find(find, 0);
		}
		Write << line << "\n";
	}
	//close read and write streams
	Read.close();
	Write.close();
	return (0);
}
