/*a)Define an enumerated data type color with members black , white [See what an enum
is]
b) Declare two 2-D arrays A[][] and B[][] of type color to represent two black and white
images having the same size (n x m).
c) Implement a Boolean function to receive these two images and return true if A is the
negative of B (i.e. each pixel of A is the complement of the corresponding pixel of B)
and false otherwise.*/

#include <iostream>
using namespace std;

enum Color { Black, White };

bool negative(Color** a, Color** b,int row, int col)
{
	int x = 0;
	for (int i = 0; i < row; i++)
	{
		for (int r = 0; r < col; r++)
		{
			if ((*(*(a + i) + r)) == (*(*(b + i) + r)))
			{
				x = 0;
			}
			else
			{
				x = 1;
			}
		}
	}

	return x;
}

int main()
{
	Color** a;
	Color** b;
	int rows = 5;
	int column = 5;

	a = new Color * [rows];
	b = new Color * [rows];

	for (int i = 0; i < rows; i++)
	{
		*(a + i) = new Color[column];
		*(b + i) = new Color[column];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int r = 0; r < column; r++)
		{
			*(*(a + i) + r) = Black;
			*(*(b + i) + r) = Black;
		}
	}
	
	if (negative(a, b, rows, column))
	{
		cout << "true"<<;
	}
	else
	{
		cout << "false";
	}

	cout << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int r = 0; r < column; r++)
		{
			*(*(a + i) + r) = Black;
			*(*(b + i) + r) = White;
		}
	}

	if (negative(a, b, rows, column))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] * (a + i);
		delete[] * (b + i);
	}

	delete[] a;
	delete[] b;

	return 0;
}