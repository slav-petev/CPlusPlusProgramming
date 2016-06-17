#include <iostream>
#include "Teacher.h"

void Teacher::printData() const
{
	User::printData();
	std::cout << "Monthly Salary: " << monthlySalary << std::endl;
	std::cout << "Days Since Joining: " << daysSinceJoining << std::endl;
}