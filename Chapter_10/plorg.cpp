#include "plorg.h"
#include <cstring>
#include <iostream>
Plorg::Plorg(const char* name)
{
	strncpy(m_name, name, NAME_SIZE);
	m_name[NAME_SIZE] = '\0';
	m_CI = DEF_CI;
}
void Plorg::SetCI(int CI)
{
	m_CI = CI;
}
void Plorg::Report() const
{
	std::cout << "Plorg \"" << m_name 
		<< "\", CI = " << m_CI << std::endl;
}