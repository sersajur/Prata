#include <iostream>
#include <cstring>

const int IntArSize = 6;
const int DoubleArSize = 4;
const int StringArSize = 5;

template <class T> T maxn(const T * array, int n);
template <> const char* maxn<const char*>(const char* const * const string, int n);
int main()
{
	int int_array[IntArSize]{1, 2, 3, 4, 5, 6};
	double db_array[DoubleArSize]{1.1, 2.2, 3.3, 4.4};
	const char* str_array[StringArSize]{
		"Lol4",
		"Lolol6",
		"Holodj7",
		"1",		
		"s2"
	};
	std::cout << "The max of int-array is " << maxn(int_array, IntArSize) << std::endl;
	std::cout << "The max of double-array is " << maxn(db_array, DoubleArSize) << std::endl;
	std::cout << "The max of string-array is " << maxn(str_array, StringArSize) << std::endl;
	return 0;
}

template <class T> T maxn(const T * array, int n)
{
	T cur_max = array[0];
	for (int i = 1; i < n; i++)
		if (cur_max < array[i])
			cur_max = array[i];
	return cur_max;
}
template <> const char* maxn<const char*>(const char* const *  string, int n)
{
	const char* cur_max = string[0];
	for (int i = 1; i < n; i++)
		if (strlen(cur_max) < strlen(string[i]))
			cur_max = string[i];
	return cur_max;
}
