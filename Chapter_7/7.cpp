#include <iostream>

const int Max = 5;

double * fill_array(double ar[], int limit);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);

int main()
{
	using namespace std;
	double properties[Max];
	double * last = fill_array(properties, Max);
	show_array(properties, last);
	if (properties != last)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, last);
		show_array(properties, last);
	}
	cout << "Done.\n";
	return 0;
}

double * fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return &ar[i];
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	
	for (auto it = begin; it < end; it++)
	{
		cout << "Property #" << (end - it) << ": $";
		cout << *it << endl;
	}
}

void revalue(double r, double * begin, double * end)
{
	for (auto it = begin; it < end; it++)
		*it *= r;
}