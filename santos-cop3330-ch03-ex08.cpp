// santos-cop3330-ch03-ex08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int value, result;

	cout << "Please enter a value to test: \n";

	cin >> value;

	result = value % 2;

	if (!result)
	{
		cout << "The number " << value << " is even.\n\n";
	}
	else
	{
		cout << "The number " << value << " is not even.\n\n";
	}
}