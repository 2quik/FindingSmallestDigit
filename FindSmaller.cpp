// FindSmaller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int FindSmaller(int array1[], int firstArrayElement, int size);
float FindSmaller(float array1[], float firstArrayElement[], int size);
char FindSmaller(char array1[], char firstArrayElement[], int size);

int main()
{
	int arrayInt[] = { 19, 74, 43, 25, 12 };
	int smallest = arrayInt[0];

	cout << FindSmaller(arrayInt, smallest, 5);
}

int FindSmaller(int array1[], int smallest, int size) {
	for (int i = 1; i < size; i++) {
		if (array1[i] < smallest) {
			smallest = array1[i];		
		}
		else {
			continue;
		}
		return smallest;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
