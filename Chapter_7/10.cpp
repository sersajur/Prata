#include <iostream>

typedef double (* operation)(double, double);

double calculate(double, double, operation);
double add(double, double);
double mul(double, double);
double sub(double, double);

const int ArSize = 3;

int main()
{
	operation op_array[3]{add, mul, sub};
	
	std::cout << "Enter two numbers to perform binary operation (or q to quit): ";
	double a, b;
	while (std::cin >> a >> b)
	{
		for (int i = 0; i < ArSize; i++)
		{
			std::cout << "Result of operation #" << (i + 1) << ": "; 
			std::cout << calculate(a, b, op_array[i]) << std::endl;
		}			 
		std::cout << "Enter two numbers to perform binary operation (or q to quit): ";	
	}
	return 0;
}

double calculate(double a, double b, operation f)
{
	return f(a, b);
}
double add(double a, double b)
{
	return a + b;
}
double mul(double a, double b)
{
	return a * b;
}
double sub(double a, double b)
{
	return a - b;
}