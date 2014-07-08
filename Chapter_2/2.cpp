#include <iostream>

#define YARDS_IN_FURLONG 220

int main()
{
	float v;
	std::cout << "Enter distance in furlongs: ";
	std::cin >> v;
	std::cout << v << "fur = " << v*YARDS_IN_FURLONG << "yd" << std::endl;
}