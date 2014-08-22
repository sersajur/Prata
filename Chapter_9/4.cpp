#include "sales.h"
#include <iostream>

const int ArSize = 3;

int main()
{
	double value_arr[ArSize]{4.5, 2.3, 5.5};
	SALES::Sales interactive_sales, notinteractive_sales;
	
	SALES::setSales(notinteractive_sales, value_arr, ArSize);	
	SALES::setSales(interactive_sales);
	
	std::cout << "not interactive sales:\n";
	SALES::showSales(notinteractive_sales);
	std::cout << "interactive sales:\n";
	SALES::showSales(interactive_sales);
	return 0;
}