#include <iostream>
#include <cstring>
const int StrSize = 20;
struct CandyBar{
	char name[StrSize];
	double weight;
	int cal;
};

void init_candy_bar(CandyBar& candy_bar, const char* init_name = "Millennium Munch", double init_weight = 2.85, int init_cal = 350);
void show(const CandyBar & candy_bar);
int main()
{
	CandyBar candy_bar;
	init_candy_bar(candy_bar);
	std::cout << "Now candy bar's state:\n";
	show(candy_bar);
	
	std::cout << "Enter the name of candy bar: ";
	char name[StrSize]{};
	std::cout << name;
	if (std::cin.get(name, StrSize))
		std::cin.clear();
	init_candy_bar(candy_bar, name);
	std::cout << "Now candy bar's state:\n";
	show(candy_bar);

	while (std::cin.get() != '\n')
		continue;	
	std::cout << "Enter the weight of candy bar: ";
	double weight;
	std::cin >> weight;
	init_candy_bar(candy_bar, name, weight);
	std::cout << "Now candy bar's state:\n";
	show(candy_bar);
	
	std::cout << "Enter the calories of candy bar: ";
	double cal;
	std::cin >> cal;
	init_candy_bar(candy_bar, name, weight, cal);
	std::cout << "Now candy bar's state:\n";
	show(candy_bar);
	
\
	return 0;
}

void init_candy_bar(CandyBar& candy_bar, const char* init_name, double init_weight, int init_cal)
{
	strcpy(candy_bar.name, init_name);
	candy_bar.weight = init_weight;
	candy_bar.cal = init_cal;
}
void show(const CandyBar & candy_bar)
{
	std::cout << "Name: " << candy_bar.name << std::endl;
	std::cout << "Weight: " << candy_bar.weight << std::endl;
	std::cout << "Cal: " << candy_bar.cal << std::endl;
}