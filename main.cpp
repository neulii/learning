#include <iostream>
#include "functions.h"



int main()
{
	

	int aS = 20;	
	int *test = new int[aS];

	std::string myString = "superstefan";


	
	fillArray(test,aS,2);
	printArray(test,aS);
	
}




