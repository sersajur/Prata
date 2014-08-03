#include<iostream>

int counter = 0;
void show_incremental(const char * pch, int n = 0, int* c = &counter);

int main()
{
	show_incremental("str_1");
	show_incremental("str_2");
	show_incremental("str_3", 2);
	return 0;
}

void show_incremental(const char * pch, int n, int* c)
{
	if (n)
		for (int i = *c; i; i--)
			std::cout << pch << std::endl;
	else
		std::cout << pch << std::endl;
	(*c)++;
}