#include<iostream>

using namespace std;

int main()
{
	const int Inches_per_foot = 12;
	cout << "Enter your growth in inches:______\b\b\b\b\b\b";
	int growth_in_inches;
	cin >> growth_in_inches;
	cout << "Your growth is " << growth_in_inches/Inches_per_foot << "ft and " << growth_in_inches%Inches_per_foot << "inch(es)" << endl;
}