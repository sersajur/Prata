#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	std::cout << "Enter a full name: ";
	char fullname[Len];
	if (std::cin.get(fullname, Len))
	{
		std::cout << "Enter a handicap: ";
		int handicap = 0;
		if (!(std::cin >> handicap))
			std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
		setgolf(g, fullname, handicap);
		return 1;
	}
	else
	{
		std::cin.clear();
		while (std::cin.get()!='\n')
			continue;
		return 0;
	}
}
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	std::cout << "Handicap of " << g.fullname << " is "
		<< g.handicap << std::endl;
}