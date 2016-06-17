#pragma once
#include "User.h"

class Teacher : public User
{
private:
	float monthlySalary;
	unsigned short daysSinceJoining;
public:
	float get_MonthlySalary() const { return monthlySalary; };
	unsigned short get_DaysSinceJoining() const { return daysSinceJoining; };
public:
	Teacher(unsigned short id, const std::string& name, const std::string& currentCourseName,
		float monthlySalary, unsigned short daysSinceJoining) : User(id, name, currentCourseName),
		monthlySalary(monthlySalary), daysSinceJoining(daysSinceJoining)
	{

	}
public:
	void printData() const override;
};
