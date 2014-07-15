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
	CandyBar snack{"Mocha Munch", 2.3, 350};
	
	std::cout << "snack.name: " << snack.name << std::endl;
	std::cout << "snack.weight: " << snack.weight << std::endl;
	std::cout << "snack.calories: " << snack.calories << std::endl;
	
	return 0;
}