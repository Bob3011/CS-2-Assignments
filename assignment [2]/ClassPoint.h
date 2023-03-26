#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	float x;
	float y;

public:
	Point();

	Point(float a, float b);


	void SetX(float num);

	void SetY(float num);


	float GetX();

	float GetY();


	void display();

	float distanceToCenter(Point p);

};