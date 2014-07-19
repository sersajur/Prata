#include <iostream>

int main()
{
	const double Daphnas_investimento = 100.0;
	const double Kleos_investimento = 100.0;
	const double Daphnas_simple_percent = 0.10;
	const double Kleos_complex_percent = 0.05;
	
	double daphnas_balance = Daphnas_investimento;
	double kleos_balance = Kleos_investimento;
	int i;
	std::cout << "Year\t" << "Daphnas balance\t Kleos balance" << std::endl;
	for (i = 1; kleos_balance <= daphnas_balance; i++)
	{
		 daphnas_balance = Daphnas_investimento*(1 + i*Daphnas_simple_percent);
		 kleos_balance += kleos_balance*Kleos_complex_percent; 
		 std::cout << i << "\t" << daphnas_balance << "\t" << kleos_balance << std::endl; 
	}
	std::cout << "Kleo would have more then Daphna after " << (i - 1) << " years" << std::endl; 
	return 0;
}