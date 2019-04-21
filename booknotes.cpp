#include <string>
#include <iostream>

const double pi = 3.14159265358979323846264338327950288419716939;

//static int test_number = 3;

int main()
{

std::cout << std::endl;

std::string s3 = "This is a very long and clumsy text "
				"that is too long for one line.";

std::cout << s3 << std::endl;

std::cout<< "The circumference of a circle with radius 5 is " << pi * 2 * 5 << std::endl;

static int test_number = 4; //useful for counter functions, line is skipped after initialization within local scope

std::cout<< test_number << std::endl;

std::string expr = "some expression";

std::string o3, o2, o1;

o3 = o2 = o1 = expr;

std::cout << o1 << " ..is it the same as...." << o2 << "..is it the same as..." << o1 << "..is it the same as..." << expr ;
std::cout << std::endl;

std::cout << std::endl;
}