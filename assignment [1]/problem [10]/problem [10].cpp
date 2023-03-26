/*Assume that the name of a file on disk is already stored in a C++ string infile. The file consists
of a number of lines (a line is a string that might contain blanks and terminated by an end-ofline).
Implement a function maxLen ( string infile ) that returns the maximum length of a line
in the given file.*/

#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

int maxLen(string fileName)					//function to return the mas lengh of a line in a file
{
	ifstream file1;
	int maxLength = INT_MIN;
	int temp = 0;

	file1.open(fileName);					// function to open file

	if (file1.fail())						// validation to check if faile has opend or not
	{
		cout << "error occured while openign file.";
		exit(1);
	}
	else
	{
		while (!file1.eof())				// to check if file has not reached its end to get the max lengh
		{
			string str;

			getline(file1, str);
			temp = str.length();

			if (maxLength < temp)
			{
				maxLength = temp;
			}
		}
	}

	return maxLength;
}

int main()
{
	string fileName;
	ofstream file1;

	fileName = "problem [10] file.txt";
	file1.open(fileName);

	if (file1.fail())
	{
		cout << "error opening file.";
	}
	else
	{
		file1 << "my name is abdallah tamer\n i am egyptian\n i am studyng c++";
	}

	file1.close();

	cout << "the max lengh in the file is: " << maxLen(fileName);
	return 0;
}