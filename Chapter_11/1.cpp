//compile with vect.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream file;
	file.open("ex1_output.txt");
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		file << "Target Distance: " << target << ", "
			 << "Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			file << steps << ": (x,y) = ("
				 << step.xval() << ", " << step.yval() << ")\n";
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		file << steps << ": (x,y) = ("
			 << step.xval() << ", " << step.yval() << ")\n";
		
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			 << result.magval()/steps << endl;
				
		file << "After " << steps << " steps, the subject "
			"has the following location:\n";
		file << result << endl;
		result.polar_mode();
		file << " or\n" << result << endl;
		file << "Average outward distance per step = "
			 << result.magval()/steps << endl;
		
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	file.close();
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}