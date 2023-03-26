#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void rarray(int*& ptr, int size) 
{
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		*(ptr+i) = rand() % 2;
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i);
	}
}
int main()
{
	int* Parray;
	int size;

	cout << "please enter your array size: ";
	cin >> size;

	Parray = new int[size];

	rarray(Parray, size);
}