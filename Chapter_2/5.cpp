#include <iostream>

float Celsius_to_Fahrenheit(float c_value);

int main()
{
	int celsius_value;
	std::cout << "Please enter a Celsius value: ";
	std::cin >> celsius_value;
	std::cout << celsius_value << " degrees Celsius is " << Celsius_to_Fahrenheit(celsius_value) << " degrees Fahrenheit." << std::endl;
}

float Celsius_to_Fahrenheit(float c_value)
{
	return c_value * 1.8 + 32;
}
