#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string word;
	int vowels, consonants, others;
	vowels = consonants = others = 0;
	
	std::cout << "Enter words (q to quit):\n";
	std::cin >> word;
	while (word[0] != 'q' || word.length() != 1)
	{
		if (isalpha(word[0]))
			switch(tolower(word[0]))
			{
				case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
					vowels++;
					break;
				default:
					consonants++;
			}
		else
			others++;
		std::cin >> word;
	}
	std::cout << vowels << " words beginning with vowels\n"
		<< consonants << " words beginning with consonants\n"
		<< others << " others\n";
	return 0;
}