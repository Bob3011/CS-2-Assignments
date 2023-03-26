/*Write a function rarray (x,n) to fill the integer array (x) of size (n) with a random sequence of
Zeros (0) and Ones (1).*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void rarry(vector <int>& array, int size)		// Function that filles an array with random numbers of 1 and 0.
{
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		array.push_back( rand() % 2);
	}
}

int main()
{
	int size;
	vector <int> array;					

	cout << "please enter the size of the array: ";
	cin >> size;


	rarry(array, size);

	cout << "the contents of the array is : \n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
	}

	return 0;
}