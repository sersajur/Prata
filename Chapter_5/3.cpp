#include <iostream>

int main()
{
	long double sum = 0;
	double number;
	
	std::cout << "Enter a number for summing or \'0\' to exit: ";
	std::cin >> number;
		
	while(number)
	{
		std::cout << "The current sum is " << (sum += number) << std::endl;
		std::cout << "Enter a number for summing or \'0\' to exit: ";
		std::cin >> number;
	}
	std::cout << "The current sum is " << sum << std::endl;
	std::cout << "Buy!" << std::endl;
	return 0;
}