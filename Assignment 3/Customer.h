#include <iostream>
#include <string>
using namespace std;
#ifndef CUSTOMER
#define CUSTOMER
class Customer
{
	public:
		Customer();
		string get_given_name();
		string get_family_name();
		string get_address_1();
		string get_address_2();
		string get_city();
		string get_province();
		string get_postal_code();
		double get_amount_owed();
		bool read_values(string arr[]);
		string write_values();
	private:
		string family_name_;
		string given_name_;
		string address_1_;
		string address_2_;
		string city_;
		string province_;
		string postal_code_;
		double amount_owed_;
};
#endif