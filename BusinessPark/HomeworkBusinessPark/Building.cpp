#include "Building.h"

int Building::calculateEmployeesCoefficient() const
{
	return numberOfEmployees / (numberOfEmployees + numberOfFreeWorkingSeats);
}

int Building::calculateOfficessPerFloor() const
{
	if (name == "Rapid	Development	Crew")
	{
		return numberOfOffices / (numberOfFloors - 1);
	}
	else
	{
		return numberOfOffices / numberOfFloors;
	}
}

int Building::calculatePeoplePerFloor() const
{
	return calculateOfficessPerFloor() * calculateEmployeesPerOffice();
}

int Building::calculateEmployeesPerOffice() const
{
	return numberOfEmployees / numberOfOffices;
}