#include<iostream>
#include<array>

int main()
{
	const int ArSize = 3;
	std::array<double, ArSize> sprint_results;
	
	std::cout << "Enter the first sprint result (in seconds): ";
	std::cin >> sprint_results[0];
	std::cout << "Enter the second sprint result (in seconds): ";
	std::cin >> sprint_results[1];
	std::cout << "Enter the third sprint result (in seconds): ";
	std::cin >> sprint_results[2];
	
	std::cout << "First: " << sprint_results[0] << std::endl;
	std::cout << "Second: " << sprint_results[1] << std::endl;
	std::cout << "Third: " << sprint_results[2] << std::endl;
	std::cout << "Average: " << (sprint_results[0]+sprint_results[1]+sprint_results[2])/3 << std::endl;
	return 0;
}