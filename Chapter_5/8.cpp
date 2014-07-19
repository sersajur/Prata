#include <iostream>
#include <cstring>

const int ArSize = 80;
const char * Str_to_compare = "done";

int main()
{
	std::cout << "Enter the words (for finish enter word \"done\"):\n";
	int word_counter = -1;
	char str[ArSize];
	do
	{
		std::cin >> str; 	// for correct proceed (without array overflow) there
		word_counter++;		// should be use cin.get(str,ArSize,' ') with if-operator for making							// sure about reading of hall word
	}
	while(strcmp(str, Str_to_compare));
	
	std::cout << "You have entered " << word_counter << " word(s).\n";
	return 0;
}