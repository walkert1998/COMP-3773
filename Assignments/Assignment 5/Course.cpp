///////////////////////////////////////////////////////////////////////////////
//
//	File: Course.cpp
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include "Course.h"
#include "Student.h"
#include <iostream>

// Constructor for course object
Course::Course(const string & code)
{
	course_code_ = code;
}

// Prints out code for the course
void Course::printCode()
{
	cout << course_code_ << endl;
}

// Prints list of students registered in the course
void Course::printCourseList()
{
	for (list<Student*>::iterator iter = students_.begin(); iter != students_.end(); iter++)
	{
		(*iter)->print_info();
	}
}

// Removes student from course list
void Course::remove_student_(Student * student)
{
	for (list<Student*>::iterator iter = students_.begin(); iter != students_.end(); iter++)
	{
		if ((*iter) == student)
		{
			students_.remove(student);
			return;
		}
	}
	
}

// Adds student to the course list
void Course::add_student_(Student * student)
{
	for (list<Student*>::iterator iter = students_.begin(); iter != students_.end(); iter++)
	{
		if ((*iter) == student)
		{
			return;
		}
	}
	students_.push_back(student);
}
