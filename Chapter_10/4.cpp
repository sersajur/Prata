//compile with sales.cpp
#include "sales.h"
#include <iostream>

const int ArSize = 3;

int main()
{
	double value_arr[ArSize]{4.5, 2.3, 5.5};
	
	SALES::Sales interactive_sales;
	interactive_sales.SetSales();
	SALES::Sales notinteractive_sales{value_arr, ArSize};
	
	std::cout << "not interactive sales:\n";
	notinteractive_sales.ShowSales();
	std::cout << "interactive sales: \n";
	interactive_sales.ShowSales();
	
	SALES::Sales test;
	test.ShowSales();
	return 0;
}