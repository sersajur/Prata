//compile with golf.cpp
#include <iostream>
#include "golf.h"

int main()
{
	std::cout << "Enter a number of golf players: ";
	int golf_num;
	std::cin >> golf_num;
	Golf * golf_array = new Golf[golf_num];
	std::cin.get();
	int i;
	for (i = 0; i < golf_num; i++)
	{
		std::cout << "#" << i + 1 << ":\n";
		if (!golf_array[i].SetGolf())
			break;
	}
	Golf extra_one{"John Travolta", 5};

	std::cout << "Now golf state is:\n";
	std::cout << "players:\n";
	for (int j = 0; j < i; j++)
		golf_array[j].ShowGolf();
	std::cout << "extra player:\n";
	extra_one.ShowGolf();
	
	extra_one.Handicap(0);
	
	std::cout << "After handicap changing golf state is:\n";
	std::cout << "players:\n";
	for (int j = 0; j < i; j++)
		golf_array[j].ShowGolf();
	std::cout << "extra player:\n";
	extra_one.ShowGolf();
	
	delete [] golf_array;
	return 0;
}