// compile with bankaccount.cpp
#include "bankaccount.h"
#include <iostream>
#include <string>

const std::string AcNum = "UA345712";
int main()
{
	std::cout << "Enter your name: " << std::endl;
	std::string name;
	getline(std::cin, name);
	BankAccount my_account{name, AcNum, 10.0};	
	
	std::cout << "Your account:\n";
	my_account.Show();
	
	std::cout << "Enter \'d\' to deposit cash or \'w\' to withdraw cash or \'q\' to quit: ";	
	char choice;
	double cash;
	while (std::cin >> choice)
	{
		if (choice == 'd' || choice == 'w')
		{
			std::cout << "Enter cash value: ";
			while (!(std::cin >> cash))
			{
				std::cin.clear();
				while (std::cin.get() != '\n')
					continue;
				std::cout << "Bad input! Please, enter cash value: ";
			}
			if (choice == 'd')
				my_account.Deposit(cash);
			else 
				my_account.Withdraw(cash);
		}	
		else if (choice == 'q')
			break;
		else
			std::cout << "Bad input!\n";
		while (std::cin.get() != '\n')
			continue;
		
		std::cout << "Your account:\n";
		my_account.Show();
		std::cout << "Enter \'d\' to deposit cash or \'w\' to withdraw cash or \'q\' to quit: ";
	}
	
	std::cout << "Buy!\n"; 
	
	return 0;
}