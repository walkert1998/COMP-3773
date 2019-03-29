/**
@file   Product.cpp
@date   2013-03-01
@author Mark Young
@brief  Implementation file for simple product class
*/

#include <istream>
#include <string>
using namespace std;

#include "Product.h"

#define MAX 32000

// constructor //
Product::Product(const string& code,
                 const string& name,
                 int           qty)
    : code_(code),
      name_(name),
      qty_(qty) 
{}

// getters //
string Product::getCode() const { return code_; }
string Product::getName() const { return name_; }
int Product::getQuantity() const { return qty_; }

// reading method //
// expect input to look like "|<<code>>|<<name>>|<<quantity>>|"
void Product::read(istream& in)
{
    in.ignore(MAX, '|');
    getline(in, code_, '|');
    getline(in, name_, '|');
    in >> qty_; in.ignore(MAX, '|');
}

// operator overload //
istream& operator>>(istream& in, Product& p)
{
    p.read(in);
    return in;
}

