/*Assume that the name of a text file is already stored in a C++ string (infile). The file contains
single words separated by blanks. Write a boolean function file_ordered (string infile) to
receive the file name string as input parameter and to return true if the words in the file are
ordered in ascending alphabetic order and false otherwise. Assume the file to be very long so
that you cannot copy it into an array.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool file_ordered(string name)			//function to find the order of words
{
	ifstream file;
	string str1;
	string str2;
	int x = 1;


	file.open(name);					//opening file.

	if (file.fail())					//validation to check if file fails to open if so an error occurs
	{
		cout << "error occured while opening file.";
		exit(1);
	}
	else
	{
		//file >> str1;

		//cout << "str1 " << str1 << endl;
		while (!file.eof())				//to check if file has not reached the end 
		{
			file >> str1;
			cout << "str1 " << str1 << endl;	//-> not valid enters an empty string

			file >> str2;

			cout << "str2 " << str2 << endl;
			
			if ( str2[0] > str1[0])
			{
				str1 = str2;
				continue;
			}
			else
			{
				x = 0;
			}
		}
	}

	file.close();						// closes file

	return x;
}

int main()
{
	ofstream file;
	ofstream file1;
	string fileName2 = "file2.txt";
	string fileName = "file.txt";

	file.open(fileName);

	if (file.fail())
	{
		cout << "error occured while openign file.";
		exit(1);
	}
	else
	{
		file << "abdallah basel carlos dickens ema farida";
	}

	file.close();							//fucntion to close file.

	if (file_ordered(fileName) == 0)
	{
		cout << "the file is not in order";
	}
	else
	{
		cout << "the file is in order";
	}

	cout << endl;

	file1.open(fileName2);									// function to open file

	if (file.fail())										// validation to check if file has opned or not
	{
		cout << "error occured while openign file.";
		exit(1);
	}
	else
	{
		file1 << "abdallah zeyad carlos moahmed ema farida";
	}

	file1.close();

	if (file_ordered(fileName2) == 0)						//condition to output true or false
	{
		cout << "the file is not in order";
	}
	else
	{
		cout << "the file is in order";
	}

	return 0;
}