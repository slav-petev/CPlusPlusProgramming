#pragma once
#include <string>

class Building
{
private:
	std::string name;
	int numberOfFloors;
	int numberOfOffices;
	int numberOfEmployees;
	int numberOfFreeWorkingSeats;
public:
	Building(const std::string& name, int numberOfFloors, 
		int numberOfOffices, int numberOfEmployees,
		int numberOfWorkingSeats) : name(name), numberOfOffices(numberOfOffices),
		numberOfEmployees(numberOfEmployees), numberOfFreeWorkingSeats(numberOfWorkingSeats)
	{

	}
public:
	~Building()
	{

	}
public:
	const std::string& get_Name() const { return name; }
	int get_NumberOfEmployees() const { return numberOfEmployees; }
	int get_NumberOfFreeWorkingSeats() const { return numberOfFreeWorkingSeats; }
public:
	int calculateEmployeesCoefficient() const;
	int calculateEmployeesPerOffice() const;
	int calculatePeoplePerFloor() const;
	int calculateOfficessPerFloor() const;
};