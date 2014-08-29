#include "bankaccount.h"
#include <iostream>
BankAccount::BankAccount()
{
	m_owner_name = "noname";
	m_account_number = "nonumber";
	m_balance = 0.0;
}
BankAccount::BankAccount(const std::string & name, const std::string & number, double balance)
{
	m_owner_name = name;
	m_account_number = number;
	m_balance = balance;
}
void BankAccount::Show(void) const
{
	using std::cout;
	using std::endl;
	
	cout << "Owner name: " << m_owner_name << endl;
	cout << "Account number: " << m_account_number << endl;
	cout << "Balance: $" << m_balance << endl;
}
void BankAccount::Deposit(double cash)
{
	if (cash < 0)
		std::cout << "Can't deposit negative amount. Transaction aborted.\n";
	else
		m_balance += cash;
}
void BankAccount::Withdraw(double cash)
{
	if (cash > m_balance)
		std::cout << "Insufficient account balance. Transaction aborted.\n";
	else if (cash < 0)
		std::cout << "Can't withdraw negative amount. Transaction aborted.\n";
	else
		m_balance -= cash;
}