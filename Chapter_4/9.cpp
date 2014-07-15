#include <iostream>
#include <string>

struct CandyBar
{
	std::string name;
	double weight;
	int calories;
};

int main()
{
	const int ArSize = 3;
	CandyBar * candy_bar_array = new CandyBar[ArSize]{	
				{"Mocha Munch", 2.3, 350},
				{"Lewis John", 7.4, 430},
				{"Waka Waka", 2.2, 360}
			};
	
	for(int i = 0; i < ArSize; i++)
	{
		std::cout << "candy_bar_array[" << i << "]: \n";
		std::cout << "Name: " << candy_bar_array[i].name << std::endl;
		std::cout << "Weight: " <<  candy_bar_array[i].weight << std::endl;
		std::cout << "Calories: " <<  candy_bar_array[i].calories << std::endl;
	}
	
	delete [] candy_bar_array;
	return 0;
}