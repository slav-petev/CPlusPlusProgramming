#pragma once
#include "User.h"

class Student : public User
{
private:
	unsigned char currentCoursePoints;
	float averageEvaluationMark;
public:
	unsigned char get_CurrentCoursePoints() const { return currentCoursePoints; };
	float get_AverageEvaluationMark() const { return averageEvaluationMark; };
public:
	Student(unsigned short id, const std::string& name, const std::string& currentCourseName,
		unsigned char currentCoursePoints, float averageEvaluationMark) : User(id, name, currentCourseName),
		currentCoursePoints(currentCoursePoints), averageEvaluationMark(averageEvaluationMark)
	{

	}
public:
	void printData() const override;
};
