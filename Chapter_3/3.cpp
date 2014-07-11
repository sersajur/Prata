#include<iostream>

using namespace std;

int main()
{
	const int Minutes_per_degree = 60;
	const int Seconds_per_minute = 60;
	
	int degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	double latitude_in_degrees = degrees + double(minutes)/Minutes_per_degree + double(seconds)/Seconds_per_minute/Minutes_per_degree;
	cout << latitude_in_degrees << " degrees" << endl; 
}