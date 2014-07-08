#include <iostream>

#define MONTHES_IN_YEAR 12

int main()
{
	int age_in_year;
	std::cout << "Enter your age: ";
	std::cin >> age_in_year;
	std::cout << "Your age in months is: " << age_in_year*MONTHES_IN_YEAR << std::endl;
}