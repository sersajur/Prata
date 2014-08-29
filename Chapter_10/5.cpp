//compile with stack.cpp
#include "customer.h"
#include "stack.h"
#include <iostream>

void clear_stream();
void show_report(const customer & cust);
int main()
{
	Stack stack;
	std::cout << "Enter \'i\' to push new customer;\n"
			  << "enter \'o\' to pop last customer: ";

	customer client;
	char choice;	
	while (std::cin >> choice && choice != 'q')
	{
		while (std::cin.get() != '\n')
			continue;
		switch (choice){
			case 'i':
				std::cout << "Enter customers full name: ";
				if (!std::cin.getline(client.fullname, ArSize))
					clear_stream();
				
				std::cout << "Enter customer payment: ";
				while (!(std::cin >> client.payment && client.payment >= 0))
				{
					clear_stream();
					std::cout << "Bad input! Please enter payment as a not negative float number: ";
				}
				clear_stream();
				if (!stack.push(client))
					std::cout << "Oh, sorry, stack is full. First, you should pop at least one item.\n";
				break;
			case 'o':
				if (!stack.pop(client))
					std::cout << "Oh, sorry, stack is empty. First, you should push at list one item.\n";
				else
					show_report(client);
				break;
			default:
				std::cout << "Bad input!\n";
		}
		std::cout << "Enter \'i\' to push new customer;\n"
			  << "enter \'o\' to pop last customer;\n"
			  << "enter \'q\' to quit: ";
	}
	return 0;
}
void clear_stream()
{
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
}
void show_report(const customer & cust)
{
	static double sum = 0.0;
	sum += cust.payment;
	std::cout << "Current sum counts: $" << sum << std::endl;
}
