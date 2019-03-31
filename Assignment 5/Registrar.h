///////////////////////////////////////////////////////////////////////////////
//
//	File: Registrar.h
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <list>
using namespace std;

#ifndef REGISTRAR_H
#define REGISTRAR_H
#include "Student.h"
#include "Course.h"

class Registrar
{
	public:
		Registrar();
		~Registrar();
		void addCourse(Course* course);
		void addStudent(Student* student);
		void drop(int student_num, string code);
		void enroll(int student_num, string code);
		Course * findCourse(string code);
		Student * findStudent(int student_num);
	private:
		list<Student *> students_;
		list<Course *> courses_;
};
#endif

#pragma once
