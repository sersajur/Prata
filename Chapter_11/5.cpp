//compile with stonewt.cpp
#include <iostream>
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	Stonewt st1 = 275;
	Stonewt st2(2, 5.3, Stonewt::STONE);
	
	display(st1, 2);
	display(st2, 2);
	display(45, 2);
	
	Stonewt sum = st1 + st2;
	sum.Set_mode(Stonewt::STONE);
	display(sum, 1);
	Stonewt diff = st1 - st2;
	diff.Set_mode(Stonewt::POUNDS_FL);
	display(diff, 1);
	Stonewt mul1 = st1 * 3;
	mul1.Set_mode(Stonewt::POUNDS_INT);
	display(mul1, 1);
	Stonewt mul2 = 3 * st1;
	display(mul2, 1);
	return 0;
}
void display(const Stonewt & st, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << st << std::endl;
}