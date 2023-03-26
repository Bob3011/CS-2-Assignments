/*The integers (a,b,c) such as (3,4,5) and (5,12,13) are known as "Pythagorean Triples" because
they can represent the sides of a right triangle and hence satisfy the Pythagorean theorem:
a2 + b2 = c2
Given two integers m , n such that m > n , a Pythagorean triple can be generated by the
following formulas:
a = m2 � n2, b = 2mn, c = m2 + n2
Write a function that receives the values for m and n and returns the values of the Pythagorean
triples generated by these formulas.*/

#include <iostream>
#include <cmath>
using namespace std;

void pTheorum(int m, int n, int& a, int& b, int& c)			//functon that finds Pythagorean triples
{

	if (m > n)							// Condition to check which value is bigger than the other. 
	{
		a = pow(m, 2) - n;
		b = 2 * m * n;
		c = pow(m, 2) + pow(n, 2);

	}
	else
	{
		a = pow(n, 2) - m;
		b = 2 * m * n;
		c = pow(n, 2) + pow(m, 2);
	}

}
int main()
{
	int m;
	int n;
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "please enter and integer m: ";
	cin >> m;

	cout << "please enter an integer n: ";
	cin >> n;

	pTheorum(m, n, a, b, c);

	cout << "the Pythagorean triples generated by these formulas are: " << a << "," << b << "," << c;
}