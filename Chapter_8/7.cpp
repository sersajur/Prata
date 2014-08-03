#include <iostream>

const int ThingsCount = 6;
const int DebtsCount = 3;

struct debts
{
	char name[50];
	double amount;
};

template <class T> T SumArray(T arr[], int size);
template <class T> T SumArray(T* arr[], int size);

int main()
{
	using namespace std;
	int things[ThingsCount] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[DebtsCount] = 
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[DebtsCount];
	
	for (int i = 0; i < DebtsCount; i++)
		pd[i] = &mr_E[i].amount;
		
	cout << "Sum of things: " << SumArray(things, ThingsCount) << endl;
	cout << "Sum of debts: " << SumArray(pd, DebtsCount) << endl;	
	return 0;
}

template <class T> T SumArray(T arr[], int size)
{
	T result = 0;
	for (int i = 0; i < size; i++)
		result += arr[i];
	return result;
}
template <class T> T SumArray(T* arr[], int size)
{
	T result = 0;
	for (int i = 0; i < size; i++)
		result += *arr[i];
	return result;
}
