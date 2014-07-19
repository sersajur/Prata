#include <iostream>
#include <string>

const std::string Str_to_compare = "done";

int main()
{
	std::cout << "Enter the words (for finish enter word \"done\"):\n";
	int word_counter = -1;
	std::string str;
	do
	{
		std::cin >> str; 	
		word_counter++;	
	}
	while(str != Str_to_compare);
	
	std::cout << "You have entered " << word_counter << " word(s).\n";
	return 0;
}