//compile with move.cpp
#include "move.h"
#include <iostream>

int main()
{
	std::cout << "Enter start position in DCS:\n";
	std::cout << "\tX: ";
	double x = 0;
	std::cin >> x;
	std::cout << "\tY: ";
	double y = 0;
	std::cin >> y;
	Move position{x, y};
	std::cout << "Now your position:\n";
	position.showmove();
	
	if (!std::cin)
		std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
	
	std::cout << "Enter displacement in DSC (\'q\' to quit):\n";
	std::cout << "\tX: ";
	Move displacement;
	while (std::cin >> x)
	{
		std::cout << "\tY: ";
		if (!(std::cin >> y))
			break;
		displacement.reset(x, y);
		position = position.add(displacement);
		std::cout << "Now your position:\n";
		position.showmove();
		std::cout << "Enter displacement in DSC (\'q\' to quit):\n";
	}
	std::cout << "Your last position:\n";
	position.showmove();
	std::cout << "Bye!\n";
	return 0;
}