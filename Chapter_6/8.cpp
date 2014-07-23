#include <iostream>
#include <fstream>

const int StrSize = 40;

int main()
{
	std::cout << "Enter a name of text file for symbol counting from: ";
	char file_name[StrSize];
	std::cin >> file_name;
	
	std::ifstream fin;
	fin.open(file_name);
	
	if (fin.is_open())
	{
		long long counter = 0;
		while (fin.get() != EOF)
			counter++;
		fin.close();
		std::cout << "File " << file_name << " contains " << counter << " symbols.\n";
	}
	else
		std::cout << "Can't open file " << file_name << std::endl;
		
	return 0;
}