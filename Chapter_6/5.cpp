#include <iostream>

struct Rate
{
	double salary;
	double tax;
};

const Rate rate_plan[]
{
	{5000.0, 0.0},
	{10000.0, 0.1},
	{20000.0, 0.15},
	{350000.0, 0.2}
};

int main()
{	

	std::cout << "Enter your salary (or not positive number for quit): ";
	double salary;
	double tax;
	while (std::cin >> salary && salary >= 0)
	{
		tax = 0;
		for (auto& it : rate_plan)
		{
			if (salary > it.salary)
			{
				tax += it.salary*it.tax;
				salary -= it.salary;
			}
			else
			{
				tax += salary*it.tax;
				break;
			}
		}
		std::cout << "Your salary tax is " << tax << " tvarps.\n"
			"Enter another salary (or not positive number for quit): ";
	}
	std::cout << "Buy!\n";
	return 0;
}