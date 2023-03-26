//Write a function that receives the number of seconds up to 18, 000 (5 hours) and returns the
//equivalent hours, minutes and seconds by reference.
#include <iostream>
using namespace std;

void conversion(int& sec, double& mins, int& hrs)			//function outputs time in hrs, mins, secs
{
	int rem;
	rem = sec % 3600;										
	hrs = sec / 3600;
	mins = rem / 60;
	sec = rem % 60;
}

int main()
{
	int sec;
	double mins;
	int hrs;

	cout << "please enter the time in seconds: ";
	cin >> sec;

	while (sec > 18000)										//validation to check if the input value is <18000.
	{
		cout << "please neter a smaller number: ";
		cin >> sec;
	}

	conversion(sec, mins, hrs);
	cout << "Hour: " << hrs << ", Minute: " << mins << ", seconds: " << sec << endl;
}