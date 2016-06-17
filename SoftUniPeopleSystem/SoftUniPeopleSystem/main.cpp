#include <iostream>
#include <map>
#include <memory>
#include "Student.h"
#include "Teacher.h"
#include "GuestTeacher.h"

std::shared_ptr<User> createStudent()
{
	unsigned short id;
	std::cin >> id;
	std::string name;
	std::getline(std::cin, name);
	std::string currentCourseName;
	std::getline(std::cin, currentCourseName);

}

int main()
{
	std::map<unsigned short, std::shared_ptr<User>> users;
	
	unsigned char operation;
	std::cin >> operation;
	return 0;
}