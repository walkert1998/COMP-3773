///////////////////////////////////////////////////////////////////////////////
//
//	File: a1-2-9.cpp
//	Author: Thomas Walker 100139103
//	Assignment #1
//	Jan 16, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iterator>
#include <string>
using namespace std;

// Reads in array arr, of size n, iterates through arr until it reaches the index n.
// Each time the for loop iterates through it adds the value at the specified index to
// the average value variable. After the for loop is complete, the average value is
// derived by dividing the average value by n. The average value is then returned.
double array_average(int arr[], int n)
{
	double average = 0;

	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}

	average /= n;

	return average;
}

int main2()
{
	// Pre-made test arrays
	int test_array_1[] = { 5,6,13,3,27,24,45 };
	int test_array_2[] = { 0,0,0,0,0 };
	int test_array_3[] = { -13, -37, -62, -71, -4 };
	int array_length = 0;
	string input = "";


	cout << "Average values for preset arrays." << endl;

	double a = array_average(test_array_1, sizeof(test_array_1)/sizeof(test_array_1[0]));

	cout << a << endl;

	a = array_average(test_array_2, sizeof(test_array_2) / sizeof(test_array_2[0]));

	cout << a << endl;

	a = array_average(test_array_3, sizeof(test_array_3) / sizeof(test_array_3[0]));

	cout << a << endl;

	cout << "\nWould you like to find the average value of an int array? ('y' for Yes, 'n' for No)" << endl;
	getline(cin, input);

	while (input == "y")
	{
		

		cout << "How many elements would like in the array?: ";
		cin >> array_length;

		while (!cin >> array_length || array_length <= 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid array_length, please enter a valid integer." << endl;
			cout << "\nHow many elements would like in the array?: ";
			cin >> array_length;
		}

		int * user_array = new int[array_length];

		for (int i = 0; i < array_length; i++)
		{
			cin >> user_array[i];
			while (!cin >> user_array[i])
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid integer, please enter a valid integer. " << i << endl;
				cin >> user_array[i];
			}
		}

		a = array_average(user_array, sizeof(user_array) / sizeof(user_array[0]));

		cout << "\nAverage value of array: " << a << endl;

		cout << "\nWould you like to find the average value of an int array? ('y' for Yes, 'n' for No)" << endl;
		cin >> input;
	}
	
	cout << "\nTerminating program..." << endl;
	system("pause");
	return EXIT_SUCCESS;
}