#include <string>


int main ()

{

	char character = 'm';

	char* char_pointer = &character;

	int integers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int* integers_pointer = integers;

	std::string strings[2] = {"hello", "goodbye"};

	std::string* string_pointer = strings;

	std::string** char_pointer_pointer = &string_pointer;

	const int strong_number = 5;

	const int* strong_number_pointer = &strong_number;

	int weak_number = 7;

	int* const weak_number_pointer = &weak_number;





}