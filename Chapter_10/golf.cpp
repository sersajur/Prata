#include "golf.h"
#include <iostream>
#include <cstring>

Golf::Golf(const char * name, int hc)
{
	strncpy(m_fullname, name, Len - 1);
	m_fullname[Len - 1] = '\0';
	m_handicap = hc;
}
int Golf::SetGolf()
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
		*this = Golf(fullname, handicap);
		return 1;
	}
	else
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
		return 0;
	}
}
void Golf::Handicap(int hc)
{
	m_handicap = hc;
}
void Golf::ShowGolf() const
{
	std::cout << "Handicap of " << m_fullname << " is "
		<< m_handicap << std::endl;
}