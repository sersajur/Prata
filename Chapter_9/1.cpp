#include <iostream>
#include "golf.h"

int main()
{
	std::cout << "Enter a number of golf players: ";
	int golf_num;
	std::cin >> golf_num;
	golf * golf_array = new golf[golf_num];
	std::cin.get();
	int i;
	for (i = 0; i < golf_num; i++)
	{
		std::cout << "#" << i + 1 << ":\n";
		if (!setgolf(golf_array[i]))
			break;
	}
	golf extra_one;
	setgolf(extra_one, "John Travolta", 5);
	
	std::cout << "Now golf state is:\n";
	std::cout << "players:\n";
	for (int j = 0; j < i; j++)
		showgolf(golf_array[j]);
	std::cout << "extra player:\n";
	showgolf(extra_one);
	
	handicap (extra_one, 0);
	
	std::cout << "After handicap changing golf state is:\n";
	std::cout << "players:\n";
	for (int j = 0; j < i; j++)
		showgolf(golf_array[j]);
	std::cout << "extra player:\n";
	showgolf(extra_one);
	
	delete [] golf_array;
	return 0;
}
	