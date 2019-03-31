///////////////////////////////////////////////////////////////////////////////
//
//	File: Customer.cpp
//	Author: Thomas Walker 100139103
//	Assignment #3
//	Feb 23, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Customer.h"
#include "AbstractSort.h"
#include "NameSort.cpp"
#include "PostalSort.cpp"
#include "AmountSortHtoL.cpp"
#include "AmountSortLtoH.cpp"

// Constructor for Customer class
Customer::Customer()
{
	given_name_ = "";
	family_name_ = "";
	address_1_ = "";
	address_2_ = "";
	city_ = "";
	province_ = "";
	postal_code_ = "";
	amount_owed_ = 0;
}

// Return given name of Customer
string Customer::get_given_name()
{
	return given_name_;
}

// Return family name of Customer
string Customer::get_family_name()
{
	return family_name_;
}

// Return address line 1 of Customer
string Customer::get_address_1()
{
	return address_1_;
}

// Return address line 2 of Customer
string Customer::get_address_2()
{
	return address_2_;
}

// Return city of Customer
string Customer::get_city()
{
	return city_;
}

// Return province of Customer
string Customer::get_province()
{
	return province_;
}

// Return postal code of Customer
string Customer::get_postal_code()
{
	return postal_code_;
}

// Return amount owed by Customer
double Customer::get_amount_owed()
{
	return amount_owed_;
}

// Takes string array read in by cin and separates each value and assigns the
// Customers attributes based on each input, checking if the value is appropriate.
// If input does not fit format then the function returns false.
bool Customer::read_values(string arr[])
{
	given_name_ = arr[0];
	if (given_name_.find_first_not_of(' ') == given_name_.npos)
	{
		cerr << "Given name cannot be NULL." << endl;
		return false;
	}
	family_name_ = arr[1];
	if (family_name_.find_first_not_of(' ') == family_name_.npos)
	{
		cerr << "Family name cannot be NULL." << endl;
		return false;
	}
	address_1_ = arr[2];
	if (address_1_.find_first_not_of(' ') == address_1_.npos)
	{
		cerr << "Address line 1 cannot be NULL." << endl;
		return false;
	}
	address_2_ = arr[3];
	city_ = arr[4];
	if (city_.find_first_not_of(' ') == city_.npos)
	{
		cerr << "City cannot be NULL." << endl;
		return false;
	}
	province_ = arr[5];
	if (province_.find_first_not_of(' ') == province_.npos)
	{
		cerr << "Province cannot be NULL." << endl;
		return false;
	}
	postal_code_ = arr[6];
	if (postal_code_.find_first_not_of(' ') == postal_code_.npos)
	{
		cerr << "Postal code cannot be NULL." << endl;
		return false;
	}
	if (arr[7].find_first_not_of(' ') == arr[7].npos)
	{
		cerr << "Amount owed cannot be NULL." << endl;
		return false;
	}
	amount_owed_ = stod(arr[7]);
	return true;
}

// Attributes of Customer is returned as a single string with values separated by '|'
string Customer::write_values()
{
	string output;
	output = "|" + given_name_ + "|" + family_name_ + "|" + address_1_ + "|" + address_2_ + "|";
	output += city_ + "|" + province_ + "|" + postal_code_ + "|" + to_string(amount_owed_) + "|";
	return output;
}

// Overwritten input operator, ignores any spaces before the first '|' and after that
// breaks up input into tokens separated by the delimiter. The input is then assigned
// to the Customer class' member function read_values to be parsed into attributes.
istream & operator>>(istream &in, Customer &c)
{
	string line;
	string info[8];
	in.ignore(100000,'|');
	for (int i = 0; i < 8; i++)
	{
		getline(in, line, '|');
		// Convert all strings to lower case to avoid confusion in sorting capitalized
		// and non-capitalized values.
		transform(line.begin(), line.end(), line.begin(), ::tolower);
		info[i] = line;
	}
	c.read_values(info);
	return in;
}

// Overwritten output operator returns the Customers info as defined in
// the write_values function.
ostream & operator<<(ostream &out, Customer &c)
{
	out << c.write_values() << endl;
	return out;
}