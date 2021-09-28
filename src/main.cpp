#include <iostream>
#include "../include/functions.hpp"

#include <fstream>

int main()
{
	using namespace std;

	
	std::ofstream file;

	file.open("file.txt",std::ios::app);
	/*
	file << "hallo" << std::endl;
	file << "nur ein test" << std::endl;

	file.close();
	*/

	std::ifstream readFile;

	readFile.open("file.txt");
	
	if(readFile.is_open())
	{
		string line;
		string fileText;

		while(getline(readFile, line))
		{
			fileText = fileText + line + '\n';

		}

			cout << fileText << endl;

	}

	
}




