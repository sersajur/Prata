//compile with list.cpp
#include <iostream>
#include "list.h"
void action(Item & it)
{
	it++;
}
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	List list;
	if (list.IsEmpty())
		cout << "Now list is empty.\n";
	cout << "Enter integer number to add it to list,\n"
			"\'q\' to finish entering: \n";
	Item item;
	while (cin >> item)
	{
		if (!list.Add(item))
		{
			cout << "No more, list is full.\n";
			break;
		}
		cout << "Enter integer number to add it to list,\n"
				"\'q\' to finish entering: \n";
	}
	if (list.IsFull())
		cout << "Now list is full.\n";
	
	cout << "List before visiting:\n";
	list.Show();
	
	list.Visit(action);
	cout << "List after visiting:\n";
	list.Show();
	return 0;
}