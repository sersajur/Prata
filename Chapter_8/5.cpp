#include <iostream>

const int ArSize = 5;

template <class T>
T max5(const T array[]);

int main()
{
	int int_array[ArSize]{1, 2, 3, 4, 5};
	double db_array[ArSize]{1.1, 2.2, 3.3, 4.4, 5.5};
	std::cout << "The max of int-array is " << max5(int_array) << std::endl;
	std::cout << "The max of double-array is " << max5(db_array) << std::endl;
	return 0;
}

template <class T>
T max5(const T array[])
{
	T cur_max = array[0];
	for (int i = 1; i < ArSize; i++)
		if (cur_max < array[i])
			cur_max = array[i];
	return cur_max;
}