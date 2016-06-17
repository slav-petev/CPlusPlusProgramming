#include <iostream>
#include "Student.h"

void Student::printData() const
{
	User::printData();
	std::cout << "Course Points: " << currentCoursePoints << std::endl;
	std::cout << "Average Evaluation Mark: " << averageEvaluationMark << std::endl;
}