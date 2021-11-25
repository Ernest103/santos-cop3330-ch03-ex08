/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ernesto Santos
 */
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