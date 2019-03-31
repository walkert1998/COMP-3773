///////////////////////////////////////////////////////////////////////////////
//
//	File: Course.h
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <list>
using namespace std;

#ifndef COURSE_H
#define COURSE_H

class Student;
class Course
{
public:
	Course(const string&);
	void printCode();
	void printCourseList();
	list <Student *> students_;
	string course_code_;
private:
	friend class Registrar;
	void remove_student_(Student * student);
	void add_student_(Student * student);
};
#endif

#pragma once
