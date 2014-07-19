#include<iostream>

int main()
{
	std::cout << "Enter two integer numbers, that should be the ends of compact: ";
	int first_number, second_number;
	std::cin >> first_number >> second_number;
	
	int sum, number;
	for (sum = 0, number = first_number; number <= second_number; number++)
		sum += number;
	
	std::cout << "The sum of all numbers between " << first_number << " and " << second_number 
		<< " is " << sum << std::endl;
		
	return 0;
}