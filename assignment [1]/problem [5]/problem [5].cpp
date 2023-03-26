/*Write a function reverse (x, n) to receive a 1-D array (x) of size (n) and return the array with
its elements reversed (e.g. x = {1,5,3,2} returns x = {2,3,5,1}).*/

#include <iostream>
#include <vector>

using namespace std;

void reverse(vector <int>& array, int size)			// Function that reverses contens of the array
{
	int midIndex = size / 2;
	int maxIndex = size - 1;
	int temp = 0;

	for (int i = 0; i < midIndex; i++)
	{
		temp = array[maxIndex];
		array[maxIndex] = array[i];
		array[i] = temp;

		maxIndex--;
	}

	cout << "the contents of the array are:" << endl;
	for (int i = 0; i < size; i++)					// loop to output the contents of the array
	{
		cout << array[i];
	}

}

int main()
{
	int size;
	vector <int> array;

	cout << "please enter the size of the array: ";
	cin >> size;


	cout << "please enter the contents of the array: \n";
	for (int i = 0; i < size; i++)					// loop to input int numbers to the array
	{
		int num;
		cin >> num;
		array.push_back(num);						// incremts the vector by adding the data to the to it
	}

	reverse(array, size);							// calling of the funtion reverse

}