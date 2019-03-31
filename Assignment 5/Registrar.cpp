///////////////////////////////////////////////////////////////////////////////
//
//	File: Registrar.cpp
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////
#include "Registrar.h"
#include <iostream>

// Constructor
Registrar::Registrar()
{
	
}

// Erases students and courses from registrar when destroyed
Registrar::~Registrar()
{
	students_.clear();
	courses_.clear();
}

// Creates a course and adds it to the registrars database
void Registrar::addCourse(Course * course)
{
	courses_.push_back(course);
}

// Creates a student to be added to the database
void Registrar::addStudent(Student * student)
{
	students_.push_back(student);
}

// Removes student from a course
void Registrar::drop(int student_num, string code)
{
	Student * s = findStudent(student_num);
	Course * c = findCourse(code);
	if (s != NULL)
		s->remove_course(c);
	if (c != NULL)
		c->remove_student_(s);
}

// Adds student to a course
void Registrar::enroll(int student_num, string code)
{
	Student * s = findStudent(student_num);
	Course * c = findCourse(code);
	if (s != NULL)
		s->add_course(c);
	if (c != NULL)
		c->add_student_(s);
}

// Returns a course whose course code matches the entered code
Course * Registrar::findCourse(string code)
{
	for (list<Course*>::iterator iter = courses_.begin(); iter != courses_.end(); iter++)
	{
		if ((*iter)->course_code_ == code)
		{

			return *iter;
		}
	}
	return NULL;
}

// Returns a student whose number matches the entered number
Student * Registrar::findStudent(int student_num)
{
	Student * s = new Student("");
	for (list<Student*>::iterator iter = students_.begin(); iter != students_.end(); iter++)
	{
		if ((*iter)->number_ == student_num)
		{
			s = *iter;
			return s;
		}
	}
	return NULL;
}
