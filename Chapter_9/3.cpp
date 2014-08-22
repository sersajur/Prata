#include <iostream>
#include <cstring>

struct chaff
{
	char dross[20];
	int slag;
};

const int ArSize = 2;

int main()
{
	char buffer1[sizeof(chaff)*ArSize];
	char * buffer2 = new char[sizeof(chaff)*ArSize];
	
	chaff * arr_of_chaff1 = new (buffer1) chaff[ArSize];
	chaff * arr_of_chaff2 = new (buffer2) chaff[ArSize];
	
	strcpy(arr_of_chaff1[0].dross, "Hello");
	arr_of_chaff1[0].slag = 1;
	strcpy(arr_of_chaff1[1].dross, "World");
	arr_of_chaff1[1].slag = 2;
	
	for (int i = 0; i < ArSize; i++)
		arr_of_chaff2[i] = arr_of_chaff1[i];
	
	for (int i = 0; i < ArSize; i++)
	{
		std::cout << i + 1 << " array element from static buffer:\n";
		std::cout << "dross: " << arr_of_chaff1[i].dross << std::endl;
		std::cout << "slag: " << arr_of_chaff1[i].slag << std::endl;
		
		std::cout << i + 1 << " array element from dynamic buffer:\n";
		std::cout << "dross: " << arr_of_chaff2[i].dross << std::endl;
		std::cout << "slag: " << arr_of_chaff2[i].slag << std::endl;
	}
	
	delete [] buffer2;
	return 0;
}