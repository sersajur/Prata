#include <iostream>

const char First_character = '.';
const char Second_character = '*';
 
int main()
{
	std::cout << "Enter the number of strings: ";
	int string_number;
	std::cin >> string_number;
	
	for (int i = 0; i < string_number; i++)
	{
		for (int j = 0; j < string_number - i - 1; j++)
			std::cout.put(First_character);
		for (int j = string_number - i - 1; j < string_number; j++)
			std::cout.put(Second_character);
		std::cout << std::endl;
	}

	return 0;
}