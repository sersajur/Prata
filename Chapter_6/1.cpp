#include <iostream>
#include <cctype>

const char End_char = '@';

int main()
{
	std::cout << "Enter some text ended by symbol \'@\'.\n" 
		"Application will reprint each lower case letter to upper case and vice versa.\n"
		"Decimal number symbols won't be printed and other symbols won't be changed: \n";
	char ch;
	while (std::cin.get(ch) && ch!=End_char)
	{
		if (islower(ch))
			std::cout << char(toupper(ch));
		else if (isupper(ch))
			std::cout << char(tolower(ch));
		else if (!isdigit(ch))
			std::cout << ch;
	}
	return 0;
}