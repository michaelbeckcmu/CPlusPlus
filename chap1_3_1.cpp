#include <fstream>
#include <iostream>
#include <sstream>
#include <string>



int main()
{


	std::ifstream infile;
	std::string filename{"chap1_3_1.txt"};
	bool opened = false;

	while (!opened){
		infile.open(filename);
		if (infile.good()){
			opened = true;
		} else {
			std::cout << "The file '" << filename
									<< "' doesn't exist, give a new file name: ";
			std::cin >> filename;
		}
	}

	std::string line;
	while (std::getline(infile,line))
	{

		if (line.front() == '%')
			;// do nothing
		else{
			std::istringstream iss(line);
			int m, n, l;
			if (!(iss >> m >> n >> l)) {std::cout << "Unexpected file format" << std::endl;}
			else
			{
				std::cout << "Matrix from file " << filename << 
				" contains " << m << " rows, " << n << " columns, and "
				<< l << " non-zero numbers." << std::endl;

				break;



			}

		}


	}






}

