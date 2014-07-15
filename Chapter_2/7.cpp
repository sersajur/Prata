#include <iostream>

void Print_time(unsigned int h, unsigned int m);

int main()
{
	unsigned int h, m;
	std::cout << "Enter the number of hours: ";
	std::cin >> h;
	std::cout << "Enter the number of minutes: ";
	std::cin >> m;
	std::cout << "Time: ";
	Print_time(h, m);
	std::cout << std::endl;
	return 0;
}

void Print_time(unsigned int h, unsigned int m)
{
	std::cout << h << ':' << m;
}