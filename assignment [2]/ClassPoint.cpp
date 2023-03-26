#include "ClassPoint.h"

Point::Point()
{
	x = 0.0;
	y = 0.0;
}

Point::Point(float a, float b)
{
	x = a;
	y = b;
}

void Point::SetX(float num)
{
	//srand(time(0));
	x = num;

}

void Point::SetY(float num)
{
	//srand(time(0));
	y = num;
}

float Point::GetX()
{
	return x;
}

float Point::GetY()
{
	return y;
}

void Point::display()
{
	cout << "( " << x << ", " << y << " )" << endl;
}

float Point::distanceToCenter(Point p)
{
	float num;
	num = sqrt((pow(x - (p.x), 2)) + (pow(y - (p.y), 2)));

	return num;
}


