///////////////////////////////////////////////////////////////////////////////
//
//	File: A5Driver.cpp
//	Author: Thomas Walker 100139103
//	Assignment #5
//	March 21, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Registrar.h"

int main()
{
	// 1.  create a Registrar object
	Registrar * registrar = new Registrar();
	// 2.  create and add at least three courses to the Registrar
	Course * comp3773 = new Course("COMP 3773");
	Course * comp3663 = new Course("COMP 3663");
	Course * comp3753 = new Course("COMP 3753");
	registrar->addCourse(comp3773);
	registrar->addCourse(comp3663);
	registrar->addCourse(comp3753);
	// 3.  create and add at least five students to the Registrar
	Student * jeff = new Student("Jeff");
	Student * jim = new Student("Jim");
	Student * darcy = new Student("Darcy");
	Student * duane = new Student("Duane");
	Student * cindy = new Student("Cindy");
	registrar->addStudent(jeff);
	registrar->addStudent(jim);
	registrar->addStudent(darcy);
	registrar->addStudent(duane);
	registrar->addStudent(cindy);
	// 4.  enroll one student in three courses
	registrar->enroll(1000, "COMP 3773");
	registrar->enroll(1000, "COMP 3663");
	registrar->enroll(1000, "COMP 3753");
	// 5.  enroll one student in two courses
	registrar->enroll(1002, "COMP 3773");
	registrar->enroll(1002, "COMP 3663");
	// 6.  enroll three students in one course each
	registrar->enroll(1003, "COMP 3663");
	registrar->enroll(1004, "COMP 3773");
	registrar->enroll(1001, "COMP 3753");
	// 7.  for each student a.print their name and number and the list of courses
	// they're enrolled in
	jeff->print_info();
	jeff->print_courses();
	cout << endl;
	jim->print_info();
	jim->print_courses();
	cout << endl;
	darcy->print_info();
	darcy->print_courses();
	cout << endl;
	duane->print_info();
	duane->print_courses();
	cout << endl;
	cindy->print_info();
	cindy->print_courses();
	cout << endl;
	// 8.  for each course a.print its code and the list of students enrolled
	// in it
	comp3773->printCode();
	comp3773->printCourseList();
	cout << endl;
	comp3663->printCode();
	comp3663->printCourseList();
	cout << endl;
	comp3753->printCode();
	comp3753->printCourseList();
	cout << endl;
	// 9.  drop (any) one student from (any) one course
	registrar->drop(1000, "COMP 3773");
	// 10. print the name and number of that student and the list of courses
	// they're enrolled in
	jeff->print_info();
	jeff->print_courses();
	cout << endl;
	//  11. print the code and list of students for the course that student
	//  dropped Use STL lists and algorithms(find, find_if, etc.) as
	//	appropriate.Use pointers to Courses and Students in the lists, and
	//	as method arguments and return types.  (We don't want to create copies
	//  of these objects.)
	comp3773->printCode();
	comp3773->printCourseList();

}