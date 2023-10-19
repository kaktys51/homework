#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;

namespace Months
{
	enum month
	{
		January = 1,
		Febuary,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	};
}

int monthDays(int a) //Вправа_1
{
	int days = 0;

	if (a == 2) days = 28;
	else if (a >= 8 && a < 13)
	{
		if (a % 2 == 0) days = 31;
		else days = 30;
	}
	else if (a % 2 == 0)
	{
		days = 30;
	}
	else days = 31;

	return days;
}

std::string monthName(int a) //Вправа_1
{

	std::string name = "Default";

	switch (a)
	{
	case Months::January:
		name = "January";
		break;
	case Months::Febuary:
		name = "Febuary";
		break;
	case Months::March:
		name = "March";
		break;
	case Months::April:
		name = "April";
		break;
	case Months::May:
		name = "May";
		break;
	case Months::June:
		name = "June";
		break;
	case Months::July:
		name = "July";
		break;
	case Months::August:
		name = "August";
		break;
	case Months::September:
		name = "September";
		break;
	case Months::October:
		name = "October";
		break;
	case Months::November:
		name = "November";
		break;
	case Months::December:
		name = "December";
		break;
	default:
		break;
	}

	return name;
}

int Sum(int a, int b, int c) //Вправа_2
{
	int res = 1 * a + 2 * b + 3 * c;

	return res;
}

int SumParni(int a, int b, int c, int d) //Вправа_3
{
	int res = 0;

	if (a % 2 == 0) res += a;
	if (b % 2 == 0) res += b;
	if (c % 2 == 0) res += c;
	if (d % 2 == 0) res += d;

	return res;
}

int Count(int a, int b, int c, int d) //Вправа_4
{
	int* array = new int[4];
	array[0] = a;
	array[1] = b;
	array[2] = c;
	array[3] = d;

	int count = 0;

	for (int i = 0; i < 4; ++i)
	{
		if (array[i] < 10 && array[i] > -10) ++count;
	}
	delete[] array;
	return count;
}

double Count(double a, double b, double c, double d) //Вправа_6
{
	double inpart = 0;
	int count = 0;

	a = modf(a, &inpart);
	if (inpart == 0) ++count;

	b = modf(b, &inpart);
	if (inpart == 0) ++count;

	c = modf(c, &inpart);
	if (inpart == 0) ++count;

	d = modf(d, &inpart);
	if (inpart == 0) ++count;

	return count;
}

float Avg(float a, float b, float c, float d) //Вправа_5
{
	float res = (a + b + c + d) / 4;
	return res;
}

int maxFinder(int a, int b) //Вправа_7
{
	int max = 0;
	if (a > b) max = a;
	else max = b;
	
	return max;
}

int maxFinder(int a, int b, int c) //Вправа_7
{
	int max = 0;
	if (a > b)
	{
		if (a > c) max = a;
		else max = c;
	}
	else if (b > c) max = b;
	else max = c;

	return max;
}

int maxFinder(int array[], int size) //Вправа_7
{
	int max = array[0];

	for (int i = 0; i<size; ++i)
	{
		if (array[i] > max) max = array[i];
	}

	return max;
}

int signFinder(int array[], int size) //Вправа_8
{
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (array[i] > 9 && array[i] < 100 ) ++count;
		else if (array[i] < -9 && array[i] > -100) ++count;
	}
	return count;
}

int signFinder (int array[][3], int rows, int cols) //Вправа_8
{
	int count = 0;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (array[i][j] > 9 && array[i][j] < 100) ++count;
			else if (array[i][j] < -9 && array[i][j] > -100) ++count;
		};
	};
	return count;
}

int multiplyFinder(int a, int b, int c) //Вправа_9
{
	int sum = 0;
	return sum = (a * b) + (b * c);
}

int multiplyFinder(int array[], int size) //Вправа_9
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		if (i + 1 == size - 1)
		{
			sum += array[i] * array[i + 1];
			break;
		}
		else
		{
			sum += array[i] * array[i + 1];
			cout << array[i] << " " << array[i + 1] << std::endl;
			cout << sum << std::endl;
		}
	}
	return sum;
}

int avgFinder(int a, int b) //Вправа_10
{
	int res = 0;
	return res = (a + b) / 2;
}


int avgFinder(int a, int b, int c) //Вправа_10
{
	int res = 0;
	return res = (a + b + c) / 3;
}

int avgFinder(int array[], int size) //Вправа_10
{
	int res = 0;
	
	for (int i = 0; i < size; ++i)
	{
		res += array[i];
	}
	
	res /= size;
	return res;
}

int main()
{

	////Вправа_1

	int monthNum = 0;

	cout << "Enter month number: " << std::endl;
	cin >> monthNum;
	cout << "Amount of days: " << monthDays(monthNum) << std::endl;
	cout << "Name of month: " << monthName(monthNum) << std::endl;

	//Вправа_2

	cout << Sum(4, 10, 3) << std::endl;

	//Вправа_3

	cout << SumParni(10, 3, 4, 5) << std::endl;

	//Вправа_4

	cout << "Amount of single-digit numbers: " << Count(-10, -3, 4, 5) << std::endl;

	//Вправа_5

	cout << Avg(3.25, 33.1, 1.45, 5.2) << std::endl;

	//Вправа_6

	cout << Count(0.25, 33.1, 1.45, 0.2) << std::endl;
	
	//Вправа_7

	cout << maxFinder(110, 321) << std::endl;

	//Вправа_8

	const int size = 5;
	int array[size]{ 141, 2, 44, -77, 9 };
	cout << signFinder(array, size) << std::endl;
	int array_2[][3] {{16, 75, -3},{12, 6, 8},{4, -12, 23}};
	cout << signFinder(array_2, 3, 3) << std::endl;


	//Вправа_9

	cout << multiplyFinder(19, 2, 5) << std::endl;
	int array_9[5]{ 10, 7, 74, 11, 21 };
	cout << multiplyFinder(array_9, 5) << std::endl;

	//Вправа_10
	
	cout << avgFinder(10, 27) << std::endl;
	cout << avgFinder(10, 27, 41) << std::endl;
	int array_10[5]{ 9, 19, 61, 44, 52 };
	cout << avgFinder(array_10, 5) << std::endl;

	return 0;
}