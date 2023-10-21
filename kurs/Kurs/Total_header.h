#pragma once
#include <iostream>
#include <string>
#include <iomanip>


class Student
{
public:
	Student(std::string _name, int id, int _gpa);
	std::string returnNameString();
	std::string getName();
	void getID();
	void getGPA(); 
	void defaultName();  
	void defaultId();  
	void defaultGpa();  
	void printStudent(); //вывод одного студента
private:
	std::string name;
	int sdID;
	int gpa;
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
	std::string getGroupName(); //вспомогательная функция для вывода названия группы
	bool freeSpaceCheck(); //вспомогательная функция
	void intStudent(Student& student); //первичная инициализация 
	void removeStudent(int a); // удаление студента из списка группы
	void editSudent(int a); // редактирование данных студента
	void addStudent(int a); // добавление нового студента в группу
	void printGroup();      // вывод списка группы
};

bool exitFunc(char a); 
void actionGroup(Group& someGroup); //основная функция меню 