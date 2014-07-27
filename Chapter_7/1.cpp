#include <iostream>

double aver_harm(double x, double y);
int main()
{
	std::cout << "Enter two numbers (or 0 to quit): ";
	double x, y;
	std::cin >> x >> y;
	while (x*y)
	{
		std::cout << "The average harmonic of " << x  << " and " << y 
			<< " is " << aver_harm(x, y) << std::endl;
		std::cout  << "Enter the newt two numbers (or 0 to quit): ";
		std::cin >> x >> y;
	}
	std::cout << "x = " << x << ", y = " << y << std::endl;
	return 0;
}

double aver_harm(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
