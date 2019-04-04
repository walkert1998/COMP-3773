///////////////////////////////////////////////////////////////////////////////
//
//	File: Integer7.cpp
//	Author: Thomas Walker 100139103
//	Assignment #6
//	April 4, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Integer7.h"
using namespace std;

// Constructor
Integer7::Integer7(int value)
{
	value_ = value;
}
 // Returns value of Integer7 object
int Integer7::get() const
{
	return value_;
}

// Set value of Integer7
void Integer7::set(int value)
{
	value_ = value;
}

// Overloaded operator for += Integer7
Integer7 & Integer7::operator+=(const Integer7 & i)
{
	this->value_ = (this->value_ + i.value_);
	return *this;
}

// Overloaded operator for += int
Integer7 & Integer7::operator+=(int v)
{
	this->value_ = (this->value_ + v);
	return *this;
}

// Overloaded operator for ++ by reference
Integer7 & Integer7::operator++()
{
	value_++;
	return *this;
}

// Overloaded operator for ++
Integer7 Integer7::operator++(int)
{
	Integer7 temp = *this;
	++*this;
	return temp;
}

// Overloaded operator for *= Integer7
Integer7 & Integer7::operator*=(const Integer7 & i)
{
	this->value_ = this->value_ * i.value_;
	return *this;
}

// Overloaded operator for *= int
Integer7 & Integer7::operator*=(int v)
{
	this->value_ = this->value_ * v;
	return *this;
}

// Overloaded operator for int + Integer7
Integer7 operator+(int v, Integer7 j)
{
	return Integer7(v + j.get());
}

// Overloaded operator for Integer7 + int
Integer7 operator+(Integer7 j, int v)
{
	return Integer7(j.get() + v);
}

// Overloaded operator for Integer7 + Integer7
Integer7 operator+(Integer7 j, const Integer7 & i)
{
	return Integer7(j.get() + i.get());
}

// Overloaded operator for Integer7 + Integer7
Integer7 & operator*(Integer7 j, const Integer7 & i)
{
	Integer7 *temp = new Integer7();
	temp->set(j.get()* i.get());
	return *temp;
}

// Overloaded operator for int + Integer7
Integer7 & operator*(int v, Integer7 j)
{
	Integer7 *temp = new Integer7();
	temp->set(v * j.get());
	return *temp;
}

// Overloaded operator for Integer7 + int
Integer7 & operator*(Integer7 j, int v)
{
	Integer7 *temp = new Integer7();
	temp->set(j.get()* v);
	return *temp;
}

// Overloaded operator for reading in Integer7
istream & operator>>(istream & is, Integer7 & i)
{
	is >> i;
	return is;
}

// Overloaded operator for printing out Integer7
ostream & operator<<(ostream & os, const Integer7 & i)
{
	return os << i.get() << endl;
}

// Overloaded operator for checking if Integer7 is equal to Integer7
inline bool operator==(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() == rhs.get();
}

// Overloaded operator for checking if Integer7 is not equal to Integer7
inline bool operator!=(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() != rhs.get();
}

// Overloaded operator for checking if Integer7 is less than Integer7
inline bool operator<(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() < rhs.get();
}

// Overloaded operator for checking if Integer7 is greater than Integer7
inline bool operator>(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() > rhs.get();
}

// Overloaded operator for checking if Integer7 is less than or equal to Integer7
inline bool operator<=(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() <= rhs.get();
}

// Overloaded operator for checking if Integer7 is greater than or equal to Integer7
inline bool operator>=(const Integer7 & lhs, const Integer7 & rhs)
{
	return lhs.get() >= rhs.get();
}
