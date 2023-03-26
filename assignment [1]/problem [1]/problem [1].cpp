/*Write a function uppercase to receive an alphabetic character and return it in uppercase. For
example, if the received character is ‘a’ it returns ‘A’, and if it is ‘A’ it returns ‘A’. (The ASCII
code for ‘A’ is 65, for ‘B’ it is 66 , etc, while for ‘a’ it is 97 and for ‘b’ it is 98, etc).*/

#include <iostream>
#include <cstdlib>
using namespace std;

char upperCase(char letter)				//function converts from lowercase to uppercase.
{
	int ascii;

	ascii = int(letter);				//convets char to its ascii code.
	ascii -= 32;
	letter = char(ascii);				//converts ascii code to char.

	return letter;
}

int main()
{
	char lowerCase;

	cout << "please enter ur lowercase letter \n";
	cin >> lowerCase;

	cout << "the upper case lettter of " << lowerCase << " is " << upperCase(lowerCase);

	return 0;
}