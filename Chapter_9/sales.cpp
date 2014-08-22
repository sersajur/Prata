#include <iostream>
#include "sales.h"

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double sum = 0.0;
		s.min = s.max = n ? ar[0] : 0.0;
		int i = 0;
		while (i < n && i < QUARTERS)
		{
			s.sales[i] = ar[i];
			sum += s.sales[i];
			if (s.min > s.sales[i])
				s.min = s.sales[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			i++;
		}
		s.average = i ? sum/i : 0;
		while (i < QUARTERS)
		{
			s.sales[i] = 0;
			i++;
		}
	}
	void setSales(Sales & s)
	{
		double value_arr[QUARTERS];
		std::cout << "Please, enter the sales:\n";
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "for " << i + 1 << " quarter: ";
			while (!(std::cin >> value_arr[i]))
			{
				std::cin.clear();
				while (std::cin.get() != '\n')
					continue;
				std::cout << "Bad input! Please, enter a number: ";
			}
		}
		setSales(s, value_arr, QUARTERS);
	}
	void showSales(const Sales & s)
	{
		std::cout << "sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << s.sales[i] << ' ';
		std::cout << std::endl;
		
		std::cout << "average: " << s.average << std::endl;
		std::cout << "max: " << s.max << std::endl;
		std::cout << "min: " << s.min << std::endl;
	}
}