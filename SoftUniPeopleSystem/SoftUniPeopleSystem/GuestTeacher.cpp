#include <iostream>
#include "GuestTeacher.h";

void GuestTeacher::printData() const
{
	User::printData();
	std::cout << "Course Salary: " << courseSalary << std::endl;
}