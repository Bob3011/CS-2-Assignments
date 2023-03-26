/*Write a boolean function descendOrder to receive an array table[] of size (n) integers and
return true if the values in the array are in descending order and false otherwise.*/

#include <iostream>
#include <vector>
using namespace std;

bool decendOrder(int array[], int num)	//bool function to find order of the pattern.
{
	int x = 1;
	for (int i = 0; i < num; i++)		//loop to check the oreder pattern.
	{
		if (array[i] > array[i+1])
		{
			continue;
		}
		else
		{
			x = 0;
		}
	}

	return x;
}

int main()
{
	int size = 7;						// declaration of int.
	int array[7] = {};					// declaration of array.
	int tF=0;

	
	for (int i = 0; i < size; i++)		// Loop to input data to array.
	{
		cout << "please enter a number: ";
		cin >> array[i];
	}

	tF = decendOrder(array, size);		// calling of the function decendOrder and returning the vlaue to tF.

	if (tF == 1)							// if statment to output true or false.
	{
		cout << "True";
	}
	else if (tF == 0)
	{
		cout << "False";
	}

	return 0;
}