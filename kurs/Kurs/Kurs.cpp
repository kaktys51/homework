#include <iostream>
#include <string>
#include <iomanip>
#include "Total_header.h"
using std::cout;
using std::cin;



	Student::Student(std::string _name, int id) :
		name(_name), sdID(id)
	{}
	std::string Student::returnNameString()
	{
		return name;
	}
	std::string Student::getName()
	{
		cout << "Enter student name: ";
		std::string temp;
		cin.ignore();
		std::getline(cin, temp);
		name = temp;
		return name;
	}
	void Student::getID()
	{
		do
		{
			cout << "Enter student ID: ";
			cin >> sdID;
			if (sdID < 1000 || sdID > 9999)
			{
				cout << std::endl;
				cout << "****** Error: Value must have 4 digits ******" << std::endl;
				cout << std::endl;
			}
		} while (sdID < 1000 || sdID > 9999);

	}
	void Student::defaultName()
	{
		name = " ";
	}
	void Student::defaultId()
	{
		sdID = 0;
	}
	void Student::printStudent()
	{
		//printf("%-6s %-20s Student ID: %d\n", "Name:", name.c_str(), sdID);
		printf(" %-25s %-8d %s\n", name.c_str(), sdID, "|");
	}



	Group::Group(std::string name) :
		groupName(name), countStud(0)
	{}
	std::string Group::getGroupName()
	{
		return groupName;
	}
	bool Group::freeSpaceCheck()
	{
		for (int i = 0; i < countStud; ++i)
		{
			if (students[i]->returnNameString() == " ")
			{
				return true;
			}
		}
		return false;
	}
	void Group::intStudent(Student& student)
	{
		if (countStud < maxStudents)
		{
			students[countStud] = &student;
			countStud++;
		}
		else cout << "Group have maximum amount of students" << std::endl;
	}

	void Group::removeStudent(int a)
	{
		if (a < 1 || a > countStud) {
			cout << "Invalid student index." << std::endl;
			return;
		}

		Student* studentToRemove = students[a - 1];
		studentToRemove->defaultName();
		studentToRemove->defaultId();

		for (int i = a - 1; i < countStud - 1; ++i) {
			students[i] = students[i + 1];
		}

		students[countStud - 1] = studentToRemove;
		//countStud--;
	}
	void Group::editSudent(int a)
	{
		for (int i = a - 1; i < countStud; ++i)
		{
			students[i]->getName();
			students[i]->getID();
			return;

		}
	}
	void Group::addStudent(int a)
	{
		for (int i = 0; i < countStud; ++i)
		{
			if (students[i]->returnNameString() == " ")
			{
				students[i]->getName();
				students[i]->getID();
				return;
			}
		}
	}

	void Group::printGroup()
	{
		cout << std::endl;
		cout << " " << std::setw(5) << " *************  " << groupName << "  *************  " << std::endl;
		cout << std::endl;

		cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
		printf("%-7s %-20s %s\n", " |", " Name", "Student ID  |");
		cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
		for (int i = 0; i < countStud; ++i)
		{
			cout << " |" << i + 1 << ". ";
			students[i]->printStudent();
			cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
		}
	}


bool exitFunc(char a) //дописать адекватный выход
{
	if (a == 'y') return true;
	else if (a == 'q') return false;
	else
	{
		cout << "****** Invalid input ******" << std::endl;
	}
	while (a != 'y' && a != 'q')
	{
		cin >> a;
		if (a == 'y') return true;
		else if (a == 'q') return false;
		else
		{
			cout << "****** Invalid input ******" << std::endl;
		}
	}
}

void actionGroup(Group& someGroup)
{
	someGroup.printGroup();
	cout << std::endl;
	char select = 0;
	int studentSelect = 0;
	char toExit;
	do
	{
		cout << "Do you want to continue?" << std::endl;  //дописать адекватный выход
		cout << "y - continue |";
		cout << "q - exit |" << std::endl;
		cin >> toExit;
		if (exitFunc(toExit) == false) return;
		cout << "Select next option: " << std::endl;

		cout << " " << std::setw(69) << std::setfill('-') << " " << std::endl;
		cout << " | 1. Add new student |";
		cout << " 2. Delete student |";
		cout << " 3. Edit student details |" << std::endl;
		cout << " " << std::setw(69) << std::setfill('-') << " " << std::endl;
		cout << std::endl;

		//printf("% -10s %s\n", " ", "***** Enter 0 to exit *****");
		do
		{
			cin >> select;
			switch (select)
			{
			case '1':
				if (someGroup.freeSpaceCheck() == false)
				{
					select = 0;
					cout << std::endl;
					cout << "****** There are no free places left in the group ******" << std::endl;
					cout << std::endl;
					cout << "Please select other option:" << std::endl;
					break;
				}
				cout << "Please enter number of avalible space: " << std::endl;
				cin >> studentSelect;
				someGroup.addStudent(studentSelect);
				break;
			case '2':
				cout << "Enter student number that you want to delete: " << std::endl;
				cin >> studentSelect;
				someGroup.removeStudent(studentSelect);
				break;
			case '3':
				cout << "Select studetnt by number on the list: " << std::endl;
				cin >> studentSelect;
				cout << "Enter new student data" << std::endl;
				someGroup.editSudent(studentSelect);
				break;
			default:
				cout << std::endl;
				cout << "****** Invalid option. Please try again ******" << std::endl;
				cout << std::endl;
				break;
			}
		} while (select != '1' && select != '2' && select != '3');
		someGroup.printGroup();

	} while (select != 'q');
}