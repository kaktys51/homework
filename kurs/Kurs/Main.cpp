#include <iostream>
#include <string>
#include <iomanip>
#include "Total_header.h"

using std::cout;
using std::cin;

//class Kafedra
//{
//
//};
//
//class Student
//{
//public:
//	Student(std::string _name, int a) :
//		name(_name), sdID(a)
//	{}
//	std::string returnNameString()
//	{
//		return name;
//	}
//	std::string getName()
//	{
//		cout << "Enter student name: ";
//		std::string temp;
//		cin.ignore();
//		std::getline(cin, temp);
//		name = temp;
//		return name;
//	}
//	void getID()
//	{
//		do
//		{
//			cout << "Enter student ID: ";
//			cin >> sdID;
//			if (sdID < 1000 || sdID > 9999)
//			{
//				cout << std::endl;
//				cout << "****** Error: Value must have 4 digits ******" << std::endl;
//				cout << std::endl;
//			}
//		} while (sdID < 1000 || sdID > 9999);
//
//	}
//	void defaultName()
//	{
//		name = " ";
//	}
//	void defaultId()
//	{
//		sdID = 0;
//	}
//	void printStudent()
//	{
//		//printf("%-6s %-20s Student ID: %d\n", "Name:", name.c_str(), sdID);
//		printf(" %-25s %-8d %s\n", name.c_str(), sdID, "|");
//	}
//private:
//	std::string name;
//	int sdID;
//};
//
//class Group
//{
//private:
//	std::string groupName;
//	static const int maxStudents = 6;
//	int countStud;
//	Student* students[maxStudents];
//
//public:
//	Group(std::string name) :
//		groupName(name), countStud(0)
//	{}
//	std::string getGroupName()
//	{
//		return groupName;
//	}
//	bool freeSpaceCheck()
//	{
//		for (int i = 0; i < countStud; ++i)
//		{
//			if (students[i]->returnNameString() == " ")
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//	void intStudent(Student& student)
//	{
//		if (countStud < maxStudents)
//		{
//			students[countStud] = &student;
//			countStud++;
//		}
//		else cout << "Group have maximum amount of students" << std::endl;
//	}
//
//	void removeStudent(int a)
//	{
//		if (a < 1 || a > countStud) {
//			cout << "Invalid student index." << std::endl;
//			return;
//		}
//
//		Student* studentToRemove = students[a - 1];
//		studentToRemove->defaultName();
//		studentToRemove->defaultId();
//
//		for (int i = a - 1; i < countStud - 1; ++i) {
//			students[i] = students[i + 1];
//		}
//
//		students[countStud - 1] = studentToRemove;
//		//countStud--;
//	}
//	void editSudent(int a)
//	{
//		for (int i = a - 1; i < countStud; ++i)
//		{
//			students[i]->getName();
//			students[i]->getID();
//			return;
//
//		}
//	}
//	void addStudent(int a)
//	{
//		for (int i = 0; i < countStud; ++i)
//		{
//			if (students[i]->returnNameString() == " ")
//			{
//				students[i]->getName();
//				students[i]->getID();
//				return;
//			}
//		}
//	}
//
//	void printGroup()
//	{
//		cout << std::endl;
//		cout << " " << std::setw(5) << " *************  " << groupName << "  *************  " << std::endl;
//		cout << std::endl;
//
//		cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
//		printf("%-7s %-20s %s\n", " |", " Name", "Student ID  |");
//		cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
//		for (int i = 0; i < countStud; ++i)
//		{
//			cout << " |" << i + 1 << ". ";
//			students[i]->printStudent();
//			cout << " " << std::setw(42) << std::setfill('-') << " " << std::endl;
//		}
//	}
//};
//
//
//bool exitFunc(char a) //дописать адекватный выход
//{
//	if (a == 'y') return true;
//	else if (a == 'q') return false;
//	else
//	{
//		cout << "****** Invalid input ******" << std::endl;
//	}
//	while (a != 'y' && a != 'q')
//	{
//		cin >> a;
//		if (a == 'y') return true;
//		else if (a == 'q') return false;
//		else
//		{
//			cout << "****** Invalid input ******" << std::endl;
//		}
//	}
//}
//
//void actionGroup(Group& someGroup)
//{
//	someGroup.printGroup();
//	cout << std::endl;
//	char select = 0;
//	int studentSelect = 0;
//	char toExit;
//	do
//	{
//		cout << "Do you want to continue?" << std::endl;  //дописать адекватный выход
//		cout << "y - continue |";
//		cout << "q - exit |" << std::endl;
//		cin >> toExit;
//		if (exitFunc(toExit) == false) return;
//		cout << "Select next option: " << std::endl;
//
//		cout << " " << std::setw(69) << std::setfill('-') << " " << std::endl;
//		cout << " | 1. Add new student |";
//		cout << " 2. Delete student |";
//		cout << " 3. Edit student details |" << std::endl;
//		cout << " " << std::setw(69) << std::setfill('-') << " " << std::endl;
//		cout << std::endl;
//
//		//printf("% -10s %s\n", " ", "***** Enter 0 to exit *****");
//		do
//		{
//			cin >> select;
//			switch (select)
//			{
//			case '1':
//				if (someGroup.freeSpaceCheck() == false)
//				{
//					select = 0;
//					cout << std::endl;
//					cout << "****** There are no free places left in the group ******" << std::endl;
//					cout << std::endl;
//					cout << "Please select other option:" << std::endl;
//					break;
//				}
//				cout << "Please enter number of avalible space: " << std::endl;
//				cin >> studentSelect;
//				someGroup.addStudent(studentSelect);
//				break;
//			case '2':
//				cout << "Enter student number that you want to delete: " << std::endl;
//				cin >> studentSelect;
//				someGroup.removeStudent(studentSelect);
//				break;
//			case '3':
//				cout << "Select studetnt by number on the list: " << std::endl;
//				cin >> studentSelect;
//				cout << "Enter new student data" << std::endl;
//				someGroup.editSudent(studentSelect);
//				break;
//			default:
//				cout << std::endl;
//				cout << "****** Invalid option. Please try again ******" << std::endl;
//				cout << std::endl;
//				break;
//			}
//		} while (select != '1' && select != '2' && select != '3');
//		someGroup.printGroup();
//
//	} while (select != 'q');
//}

int main()
{
	Group SM_01_22{ "SM_01_22" };

	Student g1_1{ "Artem Fedorow", 1001, 88 };
	Student g1_2{ "Vitali Serbovich", 1002, 92 };
	Student g1_3{ "Denis Fanfar", 1003, 76 };
	Student g1_4{ "Oleg Kravchenko", 1004, 87 };
	Student g1_5{ "Gregory Kosanov", 1005, 69 };
	Student g1_6{ "Nikolay Grach", 1006, 90 };

	SM_01_22.intStudent(g1_3);
	SM_01_22.intStudent(g1_4);
	SM_01_22.intStudent(g1_2);
	SM_01_22.intStudent(g1_1);
	SM_01_22.intStudent(g1_5);
	SM_01_22.intStudent(g1_6);


	Group SM_02_22{ "SM_02_22" };

	Student g2_1{ "Ekaterina Vasyanova", 2001, 91 };
	Student g2_2{ "Yulia Shchukina", 2012, 88 };
	Student g2_3{ "Ilya Khvostov", 2041, 75 };
	Student g2_4{ "Nikolay Volzhin", 2031, 80 };
	Student g2_5{ "Egor Volodkovsky", 2103,90 };
	Student g2_6{ " ", 0, 0 };

	SM_02_22.intStudent(g2_1);
	SM_02_22.intStudent(g2_2);
	SM_02_22.intStudent(g2_3);
	SM_02_22.intStudent(g2_4);
	SM_02_22.intStudent(g2_5);
	SM_02_22.intStudent(g2_6);

	Group SM_03_23{ "SM_03_23" };

	Student g3_1{ "Artyom Gavrenev", 3143, 87 };
	Student g3_2{ "Lev Ivin", 3894, 90 };
	Student g3_3{ "Stepan Akinfov", 3172, 70 };
	Student g3_4{ "Oksana Lachinova", 3414, 71 };
	Student g3_5{ " ", 0, 0 };
	Student g3_6{ " ", 0, 0 };

	SM_03_23.intStudent(g3_1);
	SM_03_23.intStudent(g3_2);
	SM_03_23.intStudent(g3_3);
	SM_03_23.intStudent(g3_4);
	SM_03_23.intStudent(g3_5);
	SM_03_23.intStudent(g3_6);

	Group SM_04_23{ "SM_04_23" };

	Student g4_1{ "Marya Bogdanovich", 4164, 91 };
	Student g4_2{ "Arkadiy Telepnev", 4476, 82 };
	Student g4_3{ "Igor Mikulaev", 4308, 79 };
	Student g4_4{ "Vera Chuprasova", 4037, 77 };
	Student g4_5{ "Alina Biryuleva", 4618, 88 };
	Student g4_6{ "Kirill Dyachenko", 4541, 93 };

	SM_04_23.intStudent(g2_2);
	SM_04_23.intStudent(g2_3);
	SM_04_23.intStudent(g2_4);
	SM_04_23.intStudent(g2_5);
	SM_04_23.intStudent(g2_1);
	SM_04_23.intStudent(g2_6);

	cout << "******************************************************************" << std::endl;
	cout << std::endl;
	printf("%-10s %s\n", " ", "National Metallurgical Academy of Ukraine");
	cout << std::endl;
	cout << "******************************************************************" << std::endl;
	cout << std::endl;
	cout << std::endl;

	printf("%-10s %s\n", " ", "Department of Steel Metallurgy");
	cout << std::endl;
	int selectG = 0;

	while (true)
	{
		cout << "Avalible groups: " << std::endl;
		cout << std::endl;

		cout << " " << std::setw(30) << std::setfill('-') << " " << std::endl;
		cout << " | 1. " << SM_01_22.getGroupName() << " | " << "2. " << SM_02_22.getGroupName() << " |" << std::endl;
		cout << " |" << std::setw(14) << "|" << std::setw(14) << "|" << std::endl;
		cout << " | 3. " << SM_03_23.getGroupName() << " | " << "4. " << SM_04_23.getGroupName() << " |" << std::endl;
		cout << " " << std::setw(30) << std::setfill('-') << " " << std::endl;

		cout << std::endl;
		cout << "Select group by number: " << std::endl;

		cin >> selectG;
		switch (selectG)
		{
		case 1:
			actionGroup(SM_01_22);
			break;
		case 2:
			actionGroup(SM_02_22);
			break;
		case 3:
			actionGroup(SM_03_23);
			break;
		case 4:
			actionGroup(SM_04_23);
			break;
		default:
			cout << std::endl;
			cout << "****** Invalid option. Please try again ******" << std::endl;
			cout << std::endl;
			break;
		}
	}


	return 0;
}

