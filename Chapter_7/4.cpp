#include <iostream>

long double probability(unsigned field_numbers, unsigned picks, unsigned mega_numbers);
int main()
{
	using namespace std;
	double total, choices, mega_numbers;
	cout << "Enter the total number of choices on the game card,\n"
			"the number of picks allowed and the total number of mega number choices:\n";
	while ((cin >> total >> choices >> mega_numbers) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices, mega_numbers);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}
	cout << "buy\n";
	return 0;
}

long double probability(unsigned field_numbers, unsigned picks, unsigned mega_numbers)
{
	long double result = 1.0L;
	for (; picks; picks--, field_numbers--)
		result = result*field_numbers/picks;
	return result * mega_numbers;
}