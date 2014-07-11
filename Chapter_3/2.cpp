#include<iostream>

using namespace std;

int main()
{
	const int Inches_per_foot = 12;
	const double Meters_per_inch = 0.0254;
	const double Pounds_per_kilogram = 2.2;
	
	int foots;
	double inches, pounds;
	cout << "Enter your growth in foots and inches and weight in pounds:" << endl;
	cout << "First, enter the foots: ";
	cin >> foots;
	cout << "Next, enter the inches: ";
	cin >> inches;
	cout << "Finally, enter your weight in pounds: ";
	cin >> pounds;
	inches += foots*Inches_per_foot;
	double growth_in_meters = inches*Meters_per_inch;
	double weight_in_kilograms = pounds/Pounds_per_kilogram;
	double bmi = weight_in_kilograms/growth_in_meters/growth_in_meters;
	cout << "Your BMI = " << bmi << endl; 
}