#include <iostream>

void Who();
void Action();

int main()
{
	Who();
	Who();
	
	Action();
	Action();
	return 0;
}

void Who()
{
	std::cout << "Three blind mice" << std::endl;
}

void Action()
{
	std::cout << "See how they run" << std::endl;
}