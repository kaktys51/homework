#pragma once
#include <iostream>
#include <string>
#include <iomanip>


class Student
{
public:
	Student(std::string _name, int id);
	std::string returnNameString();
	std::string getName();
	void getID();
	void defaultName();
	void defaultId();
	void printStudent();
private:
	std::string name;
	int sdID;
	int GPA;
};

class Group
{
private:
	std::string groupName;
	static const int maxStudents = 6;
	int countStud;
	Student* students[maxStudents];
public:
	Group(std::string name);
	std::string getGroupName();
	bool freeSpaceCheck();
	void intStudent(Student& student);
	void removeStudent(int a);
	void editSudent(int a);
	void addStudent(int a);
	void printGroup();
};

bool exitFunc(char a);
void actionGroup(Group& someGroup);