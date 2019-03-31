///////////////////////////////////////////////////////////////////////////////
//
//	File: Student.cpp
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Student.h"

// Constuctor for student, every time a new student is created a number tracking
// the number of students is incremented and is used as the number for the next
// student.
int Student::num_students;
Student::Student(const string & name)
{
	name_ = name;
	number_ = 1000 + num_students;
	num_students++;
}

// Prints out Students name and number
void Student::print_info()
{
	cout << name_ << " (#" << number_ << ")" << endl;
}

// Prints out the list of the courses a student is registered in
void Student::print_courses()
{
	for (list<Course*>::iterator iter = courses_.begin(); iter != courses_.end(); iter++)
	{
		(*iter)->printCode();
	}
}

// Remove course from students course list
void Student::remove_course(Course * course)
{
	for (list<Course*>::iterator iter = courses_.begin(); iter != courses_.end(); iter++)
	{
		if ((*iter) == course)
		{
			courses_.remove(course);
			return;
		}
	}
	cout << name_ << " is not registered in " << course->course_code_ << endl;
}

// Adds a course to the students course list
void Student::add_course(Course * course)
{
	for (list<Course*>::iterator iter = courses_.begin(); iter != courses_.end(); iter++)
	{
		if ((*iter)->course_code_ == course->course_code_)
		{
			cout << name_ << " is already registered in " << course->course_code_ << "." << endl;
			return;
		}
	}
	courses_.push_back(course);
}
