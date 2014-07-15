#include <iostream>
#include <string>

struct Pizza
{
	std::string company_name;
	double diameter;
	double weight;
};

int main()
{
	Pizza custom_pizza;
	
	std::cout << "Enter company name: ";
	getline(std::cin, custom_pizza.company_name);
	std::cout << "Enter a pizzas diameter in cm: ";
	std::cin >> custom_pizza.diameter;
	std::cout << "Enter a pizzas weight grams: ";
	std::cin >> custom_pizza.weight;
	
	std::cout << "Your pizza is produced by " << custom_pizza.company_name << ".\n";
	std::cout << "It has " << custom_pizza.diameter << "cm in diameter and "
		<< custom_pizza.weight << "g in weight.\n";
	return 0;
}