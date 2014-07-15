#include <iostream>

int main()
{
	const unsigned Size = 20;
	char first_name[Size];
	char last_name[Size];
	char grade;
	unsigned short age;
	
	std::cout << "What is your first name? ";
	std::cin.getline(first_name, Size);
	
	std::cout << "What is your last name? ";
	std::cin.getline(last_name, Size);
	
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	grade++;
	
	std::cout << "What is your age? ";
	std::cin >> age;
	
	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Age: " << age << std::endl;
	return 0;
}