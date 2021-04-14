#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Replace {
	public:
		static void	replace(const std::string filename, const std::string find, const std::string replace);
	private:
		static std::string find_and_replace(std::string s, const std::string find, const std::string replace);
};