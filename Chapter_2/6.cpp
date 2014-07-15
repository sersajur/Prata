#include <iostream>

#define AUS_IN_LY 63240

int main()
{
	double num_light_years;
	std::cout << "Enter the number of light years: ";
	std::cin >> num_light_years;
	std::cout << num_light_years << " light years = ";
	std::cout << num_light_years*AUS_IN_LY  << " astronomical units."<< std::endl;
	return 0;
}