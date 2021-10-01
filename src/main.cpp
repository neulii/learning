#include <iostream>
#include "../include/functions.hpp"
#include "../include/material.hpp"





int main()
{
	

	int i = 10;
	int array[20];

	std::string myString = "hallo stefan";

	std::cout << sizeof(array) << std::endl;
	std::cout << sizeof(int) << std::endl;

	
	Material* eisen = new Material("eisen",45);
	eisen->printToConsole();


	
}




