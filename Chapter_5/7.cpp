#include <iostream>
#include <string>

struct car_type
{
	std::string producer_name;
	int release_year;
};

int main()
{
	int car_number;
	std::cout << "How much cars do you need in catalogue? ";
	std::cin >> car_number;
	
	car_type * cars = new car_type[car_number];
	for (int i = 0; i < car_number; i++)
	{
		std::cin.get();
		std::cout << "The car #" << (i + 1) << ":\n";
		std::cout << "Enter the name of producer: ";
		getline(std::cin, cars[i].producer_name);
		std::cout << "Enter the release year: ";
		std::cin >> cars[i].release_year;
	}
	
	std::cout << "There is your collection:\n";
	for (int i = 0; i < car_number; i++)
		std::cout << cars[i].release_year << '\t' 
			<< cars[i].producer_name << std::endl;
			
	return 0;
}