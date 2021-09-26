#include "functions.h"
#include <iostream>

//fills array with value
void fillArray(int array[], int sizeOfArray, int value)
{
	for (int i = 0; i<sizeOfArray; i++)
	{
		array[i] = value;
	}
}

//fills array with 0
void fillArray(int array[], int sizeOfArray)
{
	for (int i = 0; i<sizeOfArray; i++)
	{
		array[i] = 0;
	}
}

// prints array to console
void printArray(int array[], int sizeOfArray)
{
		
	for (int i = 0; i<sizeOfArray;i++)
	{
		std::cout << "index: " << i << " : " << array[i] << std::endl;	
	}	
}
