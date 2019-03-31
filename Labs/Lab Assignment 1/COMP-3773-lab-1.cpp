///////////////////////////////////////////////////////////////////////////////
//
//	File: COMP-3773-lab-1.cpp
//	Author: Thomas Walker 100139103
//	Lab Assignment #1
//	Jan 16, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	// Min value set to one above max allowed value.
	int min = 101;
	float average = 0;
	int input = 0;
	int count = 0;

	cout << "Enter a number, press ENTER, and continue this pattern for as many" << endl;
	cout << "numbers as you want. To stop adding numbers, enter a non-integer," << endl;
	cout << "or enter a number less than 0 or greater than 100. " << endl;
	// While looping is true, input is read from standard input, the input is checked
	// to see if it's greater than 0 and less than 100, and that it is a integer.
	// The number of total values entered is incremented, if the input value is
	// less than the previous minimum value, then the minimum value becomes the
	// input value.
	while (true)
	{
		cin >> input;

		// If input does not meet the requirements listed in the lab description
		// then the while loop breaks.
		if (input <= -1 || input >= 101 || cin.fail())
		{
			break;
		}

		// Increments total number of valid input values entered
		count++;

		if (input < min)
		{
			min = input;
		}

		// Each valid integer value is added to the "average" value.
		average += (float)input;

	}

	// Error message if there's no integer values found.
	if (count == 0)
	{
		cerr << "No valid integers entered, terminating program." << endl;
		system("pause");
		return EXIT_FAILURE;
	}

	// The total average variable is divided by the number of valid integers
	// entered by the user to give the final average value of all integers.
	average /= (float)count;

	// Prints the average and minimum values for input to command line.
	cout << "Average is: " << average << endl;
	cout << "Minimum value found: " << min << endl;
	system("pause");

	return EXIT_SUCCESS;
}