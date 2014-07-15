#include<iostream>
#include<string>

int main()
{	
	std::string first_name;
	std::string last_name;
	std::string combined_string;
	
	std::cout << "Enter your first name: ";
	getline(std::cin, first_name);

	std::cout << "Enter your last name: ";
	getline(std::cin, last_name);
	
	combined_string = last_name + ", " + first_name; 
	
	std::cout << "Here's the information in a single string: ";
	std::cout << combined_string << std::endl;
	
	return 0;
}