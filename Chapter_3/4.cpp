#include<iostream>

int main()
{
	using namespace std;
	const unsigned Seconds_per_minute = 60;
	const unsigned Minutes_per_hour = 60;
	const unsigned Hours_per_day = 24;
	
	cout << "Enter the number of seconds: ";
	unsigned long long seconds; 
	cin >> seconds;
	unsigned long long minutes = seconds/Seconds_per_minute;
	seconds = seconds%Seconds_per_minute;

	unsigned long long hours = minutes/Minutes_per_hour;
	minutes = minutes%Minutes_per_hour;
	
	unsigned long long days = hours/Hours_per_day;
	hours = hours%Hours_per_day;
	
	cout << seconds << " seconds = ";
	cout << days << " days, ";
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << seconds << " seconds" << endl;
	return 0;
}