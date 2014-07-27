#include <iostream>

const int ArSize = 40;

struct Box
{
	char maker[ArSize];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(Box b);
void count_volume(Box * b);
int main()
{
	Box box
		{
			"resizeable box",
			2,
			3,
			4,
			12
		};
	std::cout << "You can see parameters of some box:\n";
	show_box(box);
	std::cout << "But volume value is false!\n"
		"After recounting volume via count_volume(), box parameters have such values:\n";
	count_volume(&box);
	show_box(box); 
	return 0;
}

void show_box(Box box)
{
	using std::cout;
	using std::endl;
	cout << "box.maker = "  << box.maker  << endl;
	cout << "box.height = " << box.height << endl;
	cout << "box.width = "  << box.width  << endl;
	cout << "box.length = " << box.length << endl;
	cout << "box.volume = " << box.volume << endl;
}

void count_volume(Box * b)
{
	b->volume = b->height * b->width * b->length;
}