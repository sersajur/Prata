#include <iostream>

int main()
{
	const int ArSize = 12; 
	const char* Months[ArSize] = 
	{
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"June",
		"July",
		"Aug",
		"Sept",
		"Oct",
		"Nov",
		"Dec"	
	};
	
	int sales[ArSize]; 
	for (int i = 0; i < ArSize; i++)
	{
		 std::cout << "Enter the number of sold books while " << Months[i] << ": ";
		 std::cin >> sales[i]; 
	}
	
	int books_sum = 0;
	for (int i = 0; i < ArSize; i++)
		books_sum += sales[i];
		
	std::cout << "It has been sold " << books_sum << " books while the year." << std::endl;
	return 0;
}