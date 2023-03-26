/*Declare a struct type point in 3-D space with coordinates (x,y,z) of type double. Write a
function minDistance that receives an array of n points in 3-D space and returns the index of
the point of minimum distance from the origin (0,0,0).*/

#include <iostream>
#include <climits>
using namespace std;

struct Point					// struct containing coordiates as member variables
{
	double x;
	double y;
	double z;
};

double minDistance(Point a[])			// functiont o find the index woth minimum distance
{
	double temp = INT_MAX;
	int index = 0;

	for (int i = 0; i < 3; i++)	
	{
		double temp2;
		temp2 = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2) + pow(a[i].z, 2));

		if (temp > temp2)
		{
			temp = temp2;
			index = i;
		}
	}

	return index;
}

int main()
{
	Point a[3];

	for (int i = 0; i < 3; i++)			//loop to enter member variabes of each index
	{
		cout << "please enter x,y,z coordiantes:\n";
		cin >> a[i].x;
		cin >> a[i].y;
		cin >> a[i].z;
	}

	cout << "the minimum point is in index: " << endl << minDistance(a);
	return 0;
}