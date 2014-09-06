#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include <algorithm>
using std::min;
using std::max;
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps, max_steps, min_steps;
	steps = max_steps = min_steps = 0;
	double aver_steps = 0.0; 
	double target;
	double dstep;
	int N;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout << "Enter sessions number N: ";
		if (!(cin >> N))
			break;
		for (int i = 0; i < N; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			min_steps = i ? min(min_steps, steps) : steps;
			max_steps = i ? max(max_steps, steps) : steps;
			aver_steps += double(steps) / double(N);
			steps = 0;
			result.reset(0.0, 0.0);
		}
		cout << "After " << N << " sessions the statistic"
			"has the following value:\n";
		cout << "\t minimal steps number = " << min_steps << endl;
		cout << "\t maximal steps number = " << max_steps << endl;
		cout << "\t average steps number = " << aver_steps << endl;
		
		aver_steps = 0.0;
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}