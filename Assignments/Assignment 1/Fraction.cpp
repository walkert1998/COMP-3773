///////////////////////////////////////////////////////////////////////////////
//
//	File: a1-2-9.cpp
//	Author: Thomas Walker 100139103
//	Assignment #1
//	Jan 16, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;

// Creates New fRaction with values for numerator defaulted to zero, and denominator defaulted to 1.
Fraction::Fraction()
{
	numerator_ = 0;
	denominator_ = 1;
}

// Constructor for fraction where the user can define the numerator and denominator.
// If the denominator is made zero, then the constructor rejects the fraction.
Fraction::Fraction(long n, long d)
{
	if (d == 0)
	{
		cout << "Denominator cannot be zero." << endl;
	}

	else
	{
		if (n == 0)
			d = 1;

		numerator_ = n;
		denominator_ = d;
	}
}

Fraction Fraction::divide(Fraction a, Fraction b)
{
	if (b.numerator_ == 0)
		b.denominator_ = 1;

	if (a.numerator_ == 0)
		a.denominator_ = 1;
	
	int i = 1;
	a.numerator_ = a.numerator_ * b.denominator_;
	a.denominator_ = a.denominator_ * b.numerator_;
	//cout << a.numerator_ << "/" << a.denominator_ << endl;

	if (a.numerator_ == 0)
		a.denominator_ = 1;

	else if ((a.numerator_ / a.denominator_) > 0)
	{
		for (int i = a.numerator_ * a.denominator_; i > 1; i--)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}

	}

	else
	{
		for (int i = a.numerator_ * a.denominator_; i < -1; i++)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}
	}

	return a;
}

Fraction Fraction::multiply(Fraction a, Fraction b)
{
	if (b.numerator_ == 0)
		b.denominator_ = 1;

	if (a.numerator_ == 0)
		a.denominator_ = 1;
	
	int i = 1;
	a.numerator_ = a.numerator_ * b.numerator_;
	a.denominator_ = a.denominator_ * b.denominator_;
	//cout << a.numerator_ << "/" << a.denominator_ << endl;

	if (a.numerator_ == 0)
		a.denominator_ = 1;

	else if ((a.numerator_ / a.denominator_) > 0)
	{
		for (int i = a.numerator_ * a.denominator_; i > 1; i--)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}

	}

	else
	{
		for (int i = a.numerator_ * a.denominator_; i < -1; i++)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}
	}

	return a;
}

Fraction Fraction::subtract(Fraction a, Fraction b)
{
	if (b.numerator_ == 0)
		b.denominator_ = 1;

	if (a.numerator_ == 0)
		a.denominator_ = 1;
	
	int i = 1;
	a.numerator_ = (a.numerator_ * b.denominator_) - (b.numerator_ * a.denominator_);
	a.denominator_ = a.denominator_ * b.denominator_;

	if (a.numerator_ == 0)
		a.denominator_ = 1;


	else if ((a.numerator_ / a.denominator_) > 0)
	{
		for (int i = a.numerator_ * a.denominator_; i > 1; i--)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}

	}

	else
	{
		for (int i = a.numerator_ * a.denominator_; i < -1; i++)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}
	}
	
	return a;
}

Fraction Fraction::add(Fraction a, Fraction b)
{
	if (b.numerator_ == 0)
		b.denominator_ = 1;

	if (a.numerator_ == 0)
		a.denominator_ = 1;
	
	a.numerator_ = (a.numerator_ * b.denominator_) + (b.numerator_ * a.denominator_);
	a.denominator_ = a.denominator_ * b.denominator_;

	
	if (a.numerator_ == 0)
		a.denominator_ = 1;
	

	else if ((a.numerator_ / a.denominator_) > 0)
	{
		for (int i = a.numerator_ * a.denominator_; i > 1; i--)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}
		
	}

	else
	{
		for (int i = a.numerator_ * a.denominator_; i < -1; i++)
		{
			if (a.numerator_ % i == 0 && a.denominator_ % i == 0)
			{
				a.numerator_ /= i;
				a.denominator_ /= i;
				break;
			}
		}
	}

	return a;
}

int main()
{
	Fraction a(1, 2);
	Fraction b(1, 2);
	Fraction c(0, 0);
	string option;
	int numerator;
	int denominator;

	a = a.add(a, b);
	c = a.subtract(a, b);
	cout << a.numerator_ << "/" << a.denominator_ << endl;
	cout << c.numerator_ << "/" << c.denominator_ << endl;
	Fraction d = a.multiply(a, b);
	cout << d.numerator_ << "/" << d.denominator_ << endl;
	Fraction e = a.divide(a, b);
	cout << e.numerator_ << "/" << e.denominator_ << endl;

	cout << "Would you like to do more calculations with fractions? ('y' or 'n') ";
	cin >> option;
	while (option == "y")
	{
		cout << "Please enter a numerator and denominator for Fraction A, separated by a space: ";
		cin >> numerator;

		while (!cin >> numerator)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid numerator, please enter a numerator and denominator, separated by a space: ";
			cin >> numerator;
		}

		cin >> denominator;

		while (!cin >> denominator || denominator == 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid denominator, please enter a numerator and denominator, separated by a space: ";
			cin >> denominator;
		}

		Fraction new_fraction_1(numerator, denominator);
		cout << "New Faction: " << new_fraction_1.numerator_ << "/" << new_fraction_1.denominator_ << endl;

		cout << "What operation would you like to perform? (Enter the corresponding number)" << endl;
		cout << "1. Add(Fraction A, Fraction B)" << endl;
		cout << "2. Subtract(Fraction A, Fraction B)" << endl;
		cout << "3. Multiply(Fraction A, Fraction B)" << endl;
		cout << "4. Divide(Fraction A, Fraction B)" << endl;
		cin >> option;

		while (option != "1" && option != "2" && option != "3" && option != "4")
		{
			cout << "Invalid option." << endl;
			cout << "What operation would you like to perform? (Enter the corresponding number)" << endl;
			cout << "1. Add(Fraction A, Fraction B)" << endl;
			cout << "2. Subtract(Fraction A, Fraction B)" << endl;
			cout << "3. Multiply(Fraction A, Fraction B)" << endl;
			cout << "4. Divide(Fraction A, Fraction B)" << endl;
			cin >> option;
		}

		if (option == "1")
		{
			cout << "Please enter a numerator and denominator for Fraction B, separated by a space: ";
			cin >> numerator;

			while (!cin >> numerator)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid numerator, please enter a numerator and denominator, separated by a space: ";
				cin >> numerator;
			}

			cin >> denominator;

			while (!cin >> denominator || denominator == 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid denominator, please enter a numerator and denominator, separated by a space: ";
				cin >> denominator;
			}
			Fraction new_fraction_2(numerator, denominator);

			new_fraction_1 = new_fraction_1.add(new_fraction_1, new_fraction_2);

			cout << "Result: " << new_fraction_1.numerator_ << "/" << new_fraction_1.denominator_ << endl;
		}

		else if (option == "2")
		{
			cout << "Please enter a numerator and denominator for Fraction B, separated by a space: ";
			cin >> numerator;

			while (!cin >> numerator)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid numerator, please enter a numerator and denominator, separated by a space: ";
				cin >> numerator;
			}

			cin >> denominator;

			while (!cin >> denominator || denominator == 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid denominator, please enter a numerator and denominator, separated by a space: ";
				cin >> denominator;
			}
			Fraction new_fraction_2(numerator, denominator);

			new_fraction_1 = new_fraction_1.subtract(new_fraction_1, new_fraction_2);

			cout << "Result: " << new_fraction_1.numerator_ << "/" << new_fraction_1.denominator_ << endl;
		}

		else if (option == "3")
		{
			cout << "Please enter a numerator and denominator for Fraction B, separated by a space: ";
			cin >> numerator;

			while (!cin >> numerator)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid numerator, please enter a numerator and denominator, separated by a space: ";
				cin >> numerator;
			}

			cin >> denominator;

			while (!cin >> denominator || denominator == 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid denominator, please enter a numerator and denominator, separated by a space: ";
				cin >> denominator;
			}
			Fraction new_fraction_2(numerator, denominator);

			new_fraction_1 = new_fraction_1.multiply(new_fraction_1, new_fraction_2);

			cout << "Result: " << new_fraction_1.numerator_ << "/" << new_fraction_1.denominator_ << endl;
		}

		else if (option == "4")
		{
			cout << "Please enter a numerator and denominator for Fraction B, separated by a space: ";
			cin >> numerator;

			while (!cin >> numerator)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid numerator, please enter a numerator and denominator, separated by a space: ";
				cin >> numerator;
			}

			cin >> denominator;

			while (!cin >> denominator || denominator == 0)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid denominator, please enter a numerator and denominator, separated by a space: ";
				cin >> denominator;
			}
			Fraction new_fraction_2(numerator, denominator);

			new_fraction_1 = new_fraction_1.divide(new_fraction_1, new_fraction_2);

			cout << "Result: " << new_fraction_1.numerator_ << "/" << new_fraction_1.denominator_ << endl;
		}

		cout << "Would you like to do more calculations with fractions? ('y' or 'n') ";
		cin >> option;
	}
	return EXIT_SUCCESS;
}