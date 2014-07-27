#include <iostream>

const int Seasons = 4;
const char* Snames[Seasons] = 
	{"Spring", "Summer", "Fall", "Winter"};

struct Expenses
{
	double arr[Seasons];
};
	
void fill(double ar[], int size);
void show(const double ar[], int size);

void fill_struct(Expenses * str_arr, int size);
void show_struct(Expenses str_arr, int size);


int main()
{
	/*double expenses[Seasons];  //#a
	fill(expenses, Seasons);
	show(expenses, Seasons);*/
	
	Expenses struct_expenses;	//#b
	fill_struct(&struct_expenses, Seasons);
	show_struct(struct_expenses, Seasons);
	return 0;
}

void fill(double ar[], int size)
{
	using namespace std;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> ar[i];
	}
}

void show(const double ar[], int size)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << ar[i] << endl;
		total += ar[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

void fill_struct(Expenses * str_arr, int size)
{
	using namespace std;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> str_arr->arr[i];
	}
}

void show_struct(Expenses str_arr, int size)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << str_arr.arr[i] << endl;
		total += str_arr.arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}