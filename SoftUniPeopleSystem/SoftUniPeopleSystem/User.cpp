#include <iostream>
#include "User.h"

void User::printData() const
{
	std::cout << "Id: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Current Course: " << currentCourseName << std::endl;
}