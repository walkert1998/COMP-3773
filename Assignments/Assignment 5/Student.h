///////////////////////////////////////////////////////////////////////////////
//
//	File: Student.h
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////



#include <string>
#include <list>
using namespace std;
#include "Course.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student
{
	
	public:
		Student(const string&);
		void print_info();
		void print_courses();
		static int num_students;
		string name_;
		int number_;

	private:
		friend class Registrar;
		void remove_course(Course * course);
		void add_course(Course * course);
		list <Course *> courses_;
};
#endif

