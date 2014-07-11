#include<iostream>

using namespace std;

int main()
{	
	cout << "Enter the distance in kilometres: ";
	unsigned int distance; 
	cin >> distance;
	cout << "Enter the volume of petrol in litres: ";
	unsigned int volume; 
	cin >> volume;
	
	cout << "The use of petrol is " << double(volume)/distance*100 << " litres/100km" << endl;
}
