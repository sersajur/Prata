#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

struct Patron
{
	std::string name;
	double donation;
};

const double Grand_donation = 10000.0;
const int StrSize = 40;

int main()
{
	std::cout << "Enter the name of file with patrons: ";
	char file_name[StrSize];
	std::cin >> file_name;
	
	std::ifstream fin;
	fin.open(file_name);
	if (!fin.is_open())
		exit(EXIT_FAILURE);
	
	int n;	
	fin >> n;
	
	Patron* patrons = new Patron[n];
	for (int i = 0; i < n; i++)
	{
		fin.get();
		getline(fin, patrons[i].name);
		fin >> patrons[i].donation;
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