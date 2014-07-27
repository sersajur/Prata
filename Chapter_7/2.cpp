#include <iostream>

const int ArSize = 10;

int input_results(int arr[], int size);
void show_results(const int arr[], int size);
double average_result(const int arr[], int size);

int main()
{
	int results[ArSize];
	int current_size = input_results(results, ArSize);
	std::cout << "There are results:\n";
	show_results(results, current_size);
	std::cout << "And the average result is " << average_result(results, current_size);
	return 0;
}

int input_results(int arr[], int size)
{
	int temp;
	int i;
	for (i = 0; i < size; i++)
	{
		std::cout << "Enter result #" << (i + 1) << " (q to quit): ";
		if (std::cin >> temp)
		{
			arr[i] = temp;
		}
		else
		{
			std::cin.clear();
			if (std::cin.get() == 'q')
			{
				while (std::cin.get() != '\n')
					;
				break;
			}	
			
			while (std::cin.get() != '\n')
					;
			std::cout << "Bad input!\n";
			i--;
		}
	}
	return i;
}

void show_results(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

double average_result(const int arr[], int size)
{
	double result = 0.0;
	for (int i = 0; i < size; i++)
		result += double(arr[i])/size;
	return result;
}
