#include <iostream>
#include <string>

struct Patron
{
	std::string name;
	double donation;
};

const double Grand_donation = 10000.0;

int main()
{
	std::cout << "Enter the number of patrons: ";
	int n;
	while (!(std::cin >> n))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			;
		std::cout << "Bad input! Enter the number of patrons: ";
	}
	
			
	Patron* patrons = new Patron[n];
	for (int i = 0; i < n; i++)
	{
		while (std::cin.get() != '\n')
			;
		std::cout << "Enter the name of patron #" << (i + 1) << ": ";
		getline(std::cin, patrons[i].name);
		std::cout << "Enter the donation of patron #" << (i + 1) << ": ";
		std::cin >> patrons[i].donation;
	}
	
	std::cout << "Grand Patrons\n";
	bool is_patrons = false;
	for (int i = 0; i < n; i++)
		if (patrons[i].donation >= Grand_donation)
		{
			std::cout << patrons[i].name << "\t $" << patrons[i].donation << std::endl;
			is_patrons = true;
		}
	if (!is_patrons)
		std::cout << "none\n";
	
	std::cout << "Patrons\n";
	is_patrons = false;
	for (int i = 0; i < n; i++)
		if (patrons[i].donation < Grand_donation)
		{
			std::cout << patrons[i].name << "\t $" << patrons[i].donation << std::endl;
			is_patrons = true;
		}
	if (!is_patrons)
		std::cout << "none\n";
		
	delete [] patrons;
	
	return 0;
}