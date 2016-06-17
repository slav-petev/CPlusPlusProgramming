#pragma once
#include <string>
#include <memory>

class User
{
private:
	unsigned short id;
	std::string name;
	std::string currentCourseName;
public:
	unsigned short get_Id() const { return id; };
	const std::string& get_Name() const { return name; };
	const std::string& get_CurrentCourseName() const { return currentCourseName; };
protected:
	User(unsigned short id, const std::string name, const std::string currentCourseName)
		: id(id), name(name), currentCourseName(currentCourseName)
	{

	}
public:
	virtual void printData() const;
};
