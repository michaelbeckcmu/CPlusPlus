#include <iterator>
#include <iostream>



int main()
{

	int size = 8;

	char character_array[6] = "Hello";

	char * dynamic_array = new char[size];

	char temp[8] = "Goodbye";

	int i = 0;

	for (char x: temp)
	{
		std::cout << x << std::endl;
		dynamic_array[i] = temp[i];
		i++;
	}


	delete[] dynamic_array;






}