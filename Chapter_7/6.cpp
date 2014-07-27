#include <iostream>

const int MaxArSize = 10;

int Fill_array(double ar[], int size);
void Show_array(const double ar[], int size);
void Reverse_array(double ar[], int size);

int main()
{
	double array[MaxArSize];
	int size = Fill_array(array, MaxArSize);
	std::cout << "Your array after inputting:\n";
	Show_array(array, size);
	Reverse_array(array + 1, size - 2);
	std::cout << "Your array after reversing except first and last elements:\n";
	Show_array(array, size);
	return 0;
}

int Fill_array(double ar[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		std::cout << "Enter " << (i+1) << " element of array (q to quit): ";
		if (!(std::cin >> ar[i]))
			break;
	}
	return i;
}

void Show_array(const double ar[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << "array[" << i << "] = " << ar[i] << std::endl;
}

void Reverse_array(double ar[], int size)
{
	double temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = ar[i];
		ar[i] = ar[size - 1 - i];
		ar[size - 1 - i] = temp;
	}
}
