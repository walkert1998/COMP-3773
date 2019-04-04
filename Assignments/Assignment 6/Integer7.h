/**
@file Integer7.h
@author Mark Young
@date 2013-03-12
@brief overloaded operators (based on ch7.integernamespace.h)
*/

#ifndef INTEGER7_H
#define INTEGER7_H

#include <iostream>
using namespace std;

class Integer7 {
public:
	// members
	Integer7(int = 0);

	// "big 3" not required 
	//   -- default copy constructor, assignment operator, and destructor
	//      all provide suitable behaviour

	int get() const;
	void set(int);

	// member operators

	// ... from the plus family
	Integer7& operator+=(const Integer7& i);
	Integer7& operator+=(int v);

	// .. from the increment family
	Integer7& operator++();  // prefix; member of Integer7
	Integer7 operator++(int); //postfix; also a member; dummy parameter!

	// ... from the multiply family
	Integer7& operator*=(const Integer7& i);
	Integer7& operator*=(int v);

protected:
	int value_;
};

// helpers
// ... from the plus family      // note the parameter types!
Integer7 operator+(int v, Integer7 j);  // (int, value)
Integer7 operator+(Integer7 j, int v);  // (value, int)
Integer7 operator+(Integer7 j, const Integer7& i);  // (value, const ref)!

// ... from the multiply family
Integer7& operator*(Integer7 j, const Integer7& i);
Integer7& operator*(int v, Integer7 j);
Integer7& operator*(Integer7 j, int v);

// ... the minus, times, divide, and modulus families would be similar

// ... the input/output operators
istream& operator>>(istream& is, Integer7& i);
ostream& operator<<(ostream& os, const Integer7& i);

// ... from the equality family
inline bool operator==(const Integer7& lhs, const Integer7& rhs);
inline bool operator!=(const Integer7& lhs, const Integer7& rhs);

// ... from the less-than family
inline bool operator< (const Integer7& lhs, const Integer7& rhs);
inline bool operator> (const Integer7& lhs, const Integer7& rhs);
inline bool operator<=(const Integer7& lhs, const Integer7& rhs);
inline bool operator>=(const Integer7& lhs, const Integer7& rhs);

#endif
