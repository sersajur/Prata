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
	Pizza * custom_pizza = new Pizza;
	
	std::cout << "Enter a pizzas diameter in cm: ";
	std::cin >> custom_pizza->diameter;
	std::cin.get();
	
	std::cout << "Enter company name: ";
	getline(std::cin, custom_pizza->company_name);
	std::cout << "Enter a pizzas weight in grams: ";
	std::cin >> custom_pizza->weight;
	
	std::cout << "Your pizza is produced by " << custom_pizza->company_name << ".\n";
	std::cout << "It has " << custom_pizza->diameter << "cm in diameter and "
		<< custom_pizza->weight << "g in weight.\n";
	
	delete custom_pizza;
	return 0;
}