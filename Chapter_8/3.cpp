#include <iostream>
#include <string>
#include <cctype>

void to_upper(std::string& str);

int main()
{
	std::string str;
	
	std::cout << "Enter a string (q to quit): ";	
	while (getline(std::cin, str))
	{
		if (str.size() == 1 && str[0] == 'q')
			break;
		to_upper(str);
		std::cout << str << std::endl;
		std::cout << "Next string (q to quit): ";
	}
	std::cout << "Bye.\n";
	
	return 0;
}

void to_upper(std::string& str)
{
	for (auto& it : str)
		it = toupper(it);
}