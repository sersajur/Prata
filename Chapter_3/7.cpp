#include<iostream>

int main()
{	
	using namespace std;
	const double Miles_per_100km = 62.14;
	const double Litres_per_gallon = 3.875;
	
	cout << "Enter the use of petrol in litres/100km: ";
	double litres_for_100km; 
	cin >> litres_for_100km;
	cout << "The use of petrol is ";
	cout << Miles_per_100km*Litres_per_gallon/litres_for_100km << " miles/gallon" << endl;
	return 0;	
}
