#include<iostream>
#include<cstring>

int main()
{
	const int ArSize = 20;
	char first_name[ArSize];
	char last_name[ArSize];
	char combined_string[ArSize*2 + 1];
	
	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, ArSize);

	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, ArSize);
	
	strcpy(combined_string, last_name);
	strcat(combined_string, ", ");
	strcat(combined_string, first_name);
	
	std::cout << "Here's the information in a single string: ";
	std::cout << combined_string << std::endl;
	
	return 0;
}