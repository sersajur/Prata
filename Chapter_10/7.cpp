//compile with plorg.cpp
#include <iostream>
#include "plorg.h"

const int ArSize = 30;
int main()
{
	char name[ArSize];
	std::cout << "Enter the name of plorge: ";
	Plorg plorg;
	if (!std::cin.get(name, ArSize).get())
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
	}
	else
		plorg = Plorg(name);
	plorg.Report();
	std::cout << "Enter new CI for plorge: ";
	int CI = 0;
	while (! (std::cin >> CI))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
		std::cout << "Bad input! Enter an integer number: ";
	}
	plorg.SetCI(CI);
	plorg.Report();
	std::cout << "Bye!\n";
	return 0;
}