#include <iostream>

void carnivore(void);
void tree(void);
void pianist(void);
void game(void);

int main()
{
	std::cout << "Please enter one of the following choices:\n"
		"c) carnivore \t p) pianist\n"
		"t) tree \t g) game\n";
	char choice;
	while (std::cin>>choice)
	{	
		switch(choice)
		{
			case 'c': 
				carnivore();
				break;
			case 'p': 
				pianist();
				break;
			case 't': 
				tree();
				break;
			case 'g': 
				game();
				break;
			default:
				std::cout << "Please enter a c, p, t, or g: ";
				continue;
		}
		break;
	}
	return 0;
}

void carnivore(void)
{
	std::cout << "A tiger is a carnivore.\n";
}

void tree(void)
{
	std::cout << "A maple is a tree.\n";
}

void pianist(void)
{
	std::cout << "Ludwig van Beethoven is a famous pianist.\n";
}

void game(void)
{
	std::cout << "Counter Strike is a computer game.\n";
}
