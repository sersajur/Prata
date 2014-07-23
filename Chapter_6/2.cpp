#include <iostream>
#include <array>

const int ArSize = 10;
int main()
{
	std::array<double, ArSize> array;
	int k = 0;
	std::cout << "Enter up to " << ArSize << " donations: ";
	while (k < ArSize && (std::cin >> array[k]))
		k++;
	
	if (!k)
		std::cout << "There aren't any donation.\n";
	else
	{
		double average_sum = 0;
		for (int i = 0; i < k; i++)
			average_sum += array[i]/k;
		
		int big_donation_counter = 0;
		for (int i = 0; i < k; i++)
			if (array[i] > average_sum)
				big_donation_counter++;
		
		std::cout << "The average sum of donations is $" << average_sum
			<< ", the number of donations over average sum is " 
			<< big_donation_counter << std::endl;
	}
	
	return 0;
}