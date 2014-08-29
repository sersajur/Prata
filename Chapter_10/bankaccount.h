#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

class BankAccount
{
private:
	std::string m_owner_name;
	std::string m_account_number;
	double m_balance;
public:
	BankAccount();
	BankAccount(const std::string & name, const std::string & number, double balance = 0.0);
	void Show(void) const;
	void Deposit(double cash);
	void Withdraw(double cash);
};

#endif
