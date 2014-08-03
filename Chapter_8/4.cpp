#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
	char* str;
	int ct;
};

void set(stringy& store, const char* src);
void show(const stringy& src, int n = 1);
void show(const char* src, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy& store, const char* src)
{
	store.ct = strlen(src);
	store.str = new char[store.ct + 1];
	strcpy(store.str, src);
}
void show(const stringy& src, int n)
{
	for (; n; n--)
		cout << src.str << endl;
}
void show(const char* src, int n)
{
	for (; n; n--)
		cout << src << endl;
}