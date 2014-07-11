#include<iostream>

using namespace std;

int main()
{	
	cout << "Enter the world's population: ";
	unsigned long long world_population; 
	cin >> world_population;
	cout << "Enter the population of Ukraine: ";
	unsigned long long ukraine_population; 
	cin >> ukraine_population;
	
	cout << "The population of the Ukraine is ";
	cout << double(ukraine_population)/world_population*100;
	cout << "% of the world population." << endl;
}
