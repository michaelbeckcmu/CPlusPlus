#include <iostream>
#include <fstream>


int main ()

{

	int age;

	std::cout << "What is your age?" << std::endl;

	std::cin >> age ;

	std::cout << "You said your age is " << age << " years." << std::endl;

	std::ofstream age_file;
	age_file.open("chap1_1_1.txt");
	age_file << "You said your age is " << age << " years.";
	age_file.close();



}