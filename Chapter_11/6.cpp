//compile with stonewt.cpp
#include "stonewt.h"
#include <iostream>
const int ArSize = 6;
const Stonewt St11 = Stonewt(11, 0.0);
int main()
{
	Stonewt weights[ArSize]{25.4, 300.5, 11.3};
	double p;
	for (int i = 3; i < ArSize; i++)
	{
		std::cout << "Enter the " << i << "th weight in pounds: ";
		std::cin >> p;
		weights[i] = Stonewt(p);
	}
	
	int counter = 0;
	Stonewt min_st = weights[0];
	Stonewt max_st = weights[0];
	for (int i = 0; i < ArSize; i++)
	{
		if (min_st > weights[i])
			min_st = weights[i];
		if (max_st < weights[i])
			max_st = weights[i];
		if (weights[i] >= St11)
			counter++;
	}
	std::cout << "The minimal weights: " << min_st << std::endl;
	std::cout << "The maximal weights: " << max_st << std::endl;
	std::cout << "The number of weights over 11 stones: " << counter << std::endl;
	return 0;
}
