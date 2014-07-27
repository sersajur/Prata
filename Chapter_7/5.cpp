#include <iostream>

long double factorial(unsigned n);

int main()
{
	unsigned n;
	std::cout << "Enter the unsigned integer number to count its factorial: ";
	while(std::cin >> n)
	{
		std::cout << n << "! = " << factorial(n) << std::endl;
		std::cout << "Enter the next number (or q to quit): ";
	}
	std::cout << "Buy!\n";
	return 0;
}

long double factorial(unsigned n)
{
	long double result;
	if(n)
		result = n * factorial(n - 1);
	else
		result = 1;
	return result;
}