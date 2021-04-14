#include "Replace.hpp"

std::string	Replace::find_and_replace(std::string str, const std::string find, const std::string replace) {
	unsigned long	pos = 0;

	while ((pos = str.find(find, pos)) != std::string::npos) {
		str.replace(pos, find.length(), replace);
		pos += replace.length();
	}
	return (str);
}

void		Replace::replace(const std::string filename, const std::string find, const std::string replace)
{
	std::ifstream	inputFile(filename.c_str());
	std::ofstream	outputFile;
	std::string		readline;

	if (!inputFile.is_open()) {
		std::cout << "Can`t open input file" << std::endl;
		return ;
	}
	outputFile.open((filename + ".replace").c_str(), std::ios::trunc);
	if (!outputFile.is_open()) {
		inputFile.close();
		std::cout << "Can`t open output file" << std::endl;
		return ;
	}
	while (std::getline(inputFile, readline)) {
		outputFile << find_and_replace(readline, find, replace);
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	outputFile.close();
	inputFile.close();
}