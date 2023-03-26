/*Implement a Boolean function Unique (S , Sub) to test if a string S contains only one copy of
substring Sub.*/
#include <iostream>
#include <string>
using namespace std;

bool unique(string name, string sub)		//function to find substring
{
	int str1 = name.length();
	int str2 = sub.length();

	for (int i = 0; i <= str1 - str2; i++)
	{
		for (int r = 0; r < str2; r++)
		{
			if (name[i + r] != sub[r])
			{
				break;
			}
			else if (r == str2)
			{
				return i;
			}
		}
	}
	return -1;
}

int main()
{
	string name = "Abdallah";
	string sub = "allah";
	int num = 0;

	num = unique(name, sub);

	if (num == -1)
	{
		cout << "false";
	}
	else
	{
		cout << "true";
	}

	return 0;
}