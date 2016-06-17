#pragma once
#include "User.h"

class GuestTeacher : public User
{
private:
	float courseSalary;
public:
	float get_CourseSalary() const { return courseSalary; }
public:
	GuestTeacher(unsigned short id, const std::string& name, const std::string currentCourseName,
		float courseSalary) : User(id, name, currentCourseName), courseSalary(courseSalary)
	{

	}
public:
	void printData() const override;
};
