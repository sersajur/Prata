#include <iostream>

int main()
{
	const int Month_count = 12; 
	const char * Months[Month_count] = 
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
	const int Year_count = 3;
	
	int sales[Year_count][Month_count]; 
	for (int i = 0; i < Year_count; i++)
		for (int j = 0; j < Month_count; j++)
		{
			std::cout << "Enter the number of sold books while " << Months[j] 
				<< " of the " << (i + 1) << " year: ";
			std::cin >> sales[i][j]; 
		}
	
	int books_total_sum = 0;
	for (int i = 0, books_year_sum = 0; i < Year_count; i++, books_year_sum = 0)
	{
		for (int j = 0; j < Month_count; j++)
			books_year_sum += sales[i][j];
		
		books_total_sum += books_year_sum;
		std::cout << "It has been sold " << books_year_sum << " books while " << (i+1) << " year.\n";
	}
	std::cout << "It has been sold " << books_total_sum << " books while the hall period of " << Year_count << " years.\n";
	
	return 0;
}