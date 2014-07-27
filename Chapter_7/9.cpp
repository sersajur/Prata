#include <iostream>
using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		std::cout << "Enter students full name (or empty string to quit): ";
		if (!(std::cin.get(pa[i].fullname, SLEN)))
		{
			std::cin.clear();
			std::cin.get();
			break;
		}
		while (std::cin.get() != '\n')
			continue;
		
		std::cout << "Enter students hobby: ";
		if (!(std::cin.getline(pa[i].hobby, SLEN)))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
		
		std::cout << "Enter students OOP level: ";
		while (!(std::cin >> pa[i].ooplevel))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input! Enter students OOP level (number): ";
		}
		std::cin.get();
	}
	return i;
}

void display1(student st)
{
	std::cout << "Full name: " << st.fullname << std::endl;
	std::cout << "Hobby: " << st.hobby << std::endl;
	std::cout << "OOP level: " << st.ooplevel << std::endl;
}

void display2(const student * ps)
{
	std::cout << "Full name: " << ps->fullname << std::endl;
	std::cout << "Hobby: " << ps->hobby << std::endl;
	std::cout << "OOP level: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Full name: " << pa->fullname << std::endl;
		std::cout << "Hobby: " << pa->hobby << std::endl;
		std::cout << "OOP level: " << pa->ooplevel << std::endl;
	}
}
