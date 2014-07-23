#include <iostream>

const int StrSize = 20;
const int ByName = 0;
const int ByTitle = 1;
const int ByBopname = 2;
const int ByPreference = 3;

struct Bop
{
	char full_name[StrSize];
	char title[StrSize];
	char bopname[StrSize];
	int preference;
};

int main()
{
	Bop bop_members[]
	{
		{"Wimp Macho", "Project Manager", "SKUBY", ByName},
		{"Raki Rhodes", "Junior Programmer", "LACKY", ByTitle},
		{"Celia Laiter", "Tester", "MIPS", ByBopname},
		{"Hoppy Hipman", "Analyst Trainee", "FRESH", ByTitle},
		{"Pat Hand", "Team Lead", "LOOPY", ByBopname}
	};
	
	std::cout << "Benevolent Order of Programmers Report\n"
		"a. display by name \t b. display by title\n"
		"c. display by bopname \t d. display by preference\n"
		"q. quit\n"
		"Enter your choice: ";
		
	char choice;
	int index;
	while (std::cin >> choice && choice != 'q' && choice != 'Q')
	{
		switch (choice)
		{
			case 'a': case 'A':
				index = ByName;
				break;
			case 'b': case 'B':
				index = ByTitle;
				break;
			case 'c': case 'C':
				index = ByBopname;
				break;
			case 'd': case 'D':
				index = ByPreference;
				break;
			default: 
				std::cout << "Please enter an a, b, c, d, or q: ";
				continue;
		}
		for (auto& member : bop_members)
			switch (index == ByPreference ? member.preference : index)
			{
				case ByName:
					std::cout << member.full_name << std::endl;
					break;
				case ByTitle:
					std::cout << member.title << std::endl;
					break;
				case ByBopname:
					std::cout << member.bopname << std::endl;
					break;			
			}
		std::cout << "Next choice: ";
	}
	std::cout << "Buy!\n";
	return 0;
}
