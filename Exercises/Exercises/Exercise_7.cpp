#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
using std::cout;
using std::cin;

int stringNumCount(std::string a)
{
	int count = 0;
	for (int i = 0; i < a.length(); ++i)
	{
		if (isdigit(a[i]))
		{
			++count;
		}
	}
	return count;
}

std::string cryptStr(std::string a)
{
	for (int i = 0; i < a.length(); ++i)
	{
		if (a[i] >= 'a' && a[i] < 'z' || a[i] >= 'A' && a[i] < 'Z')
			a[i]++;
		else if (a[i] == 'z')
		{
			a[i] = 'a';
		}
		else if (a[i] == 'Z')
		{
			a[i] = 'A';
		}
	}
	return a;
}

int main()
{
	srand(time(NULL));
	//Вправа_1


	int hour = 6;
	int min = 32;
	int sec = 51;

	int* pHour = &hour;
	int* pMin = &min;
	int* pSec = &sec;

	int res = (*pHour * 60 * 60) + (*pMin * 60) + *pSec;
	int* pRes = &res;

	cout << *pRes << " seconds have passed since the beginning of the day " << std::endl;


	//Вправа_2


	int* dynInt = new int(12);
	float* dynFloat = new float(7.19);
	double* dynDouble = new double(22.5);

	cout << "Dynamic int: " << *dynInt << std::endl
		<< "Dynamic float: " << *dynFloat << std::endl
		<< "Dynamic double: " << *dynDouble << std::endl;

	double convertInt = static_cast<double>(*dynInt);
	double res = convertInt * *dynFloat * *dynDouble;

	cout << "Multiply = " << res << "; Avg =  " << res / 3 << std::endl;

	delete dynInt;
	delete dynFloat;
	delete dynDouble;


	//Вправа_3


	int arrayA[4] = { 18, 21, 27, 55 };
	int arrayB[8] = { 1, 17, 22, 77};

	int count = 3;
	for (int i = 0; i < 4; ++i)
	{
		if (arrayA[i] % 3 == 0) arrayB[count++] = arrayA[i];
		else if (arrayA[i] % 7 ==0) arrayB[count++] = arrayA[i];
	}

	for (int i = 0; i < 8; ++i)
		cout << arrayB[i] << std::endl;


	//Вправа_4


	int array4[6];

	for (int i = 0; i < 6; ++i)
	{
		array4[i] = rand() % 100;
	}

	for (int i = 0; i < 6; ++i)
	{
		if (array4[0] % 2 == 0)
		{
			for (int j = 0; j < 6; ++j)
			{
				if (array4[j] % 2 == 0) array4[j] = 0;
			}
			break;
		}
		else
		{
			for (int j = 0; j < 6; ++j)
			{
 				if (array4[j] % 2 != 0) array4[j] = 0;
			}
			break;
		}
	}

	for (int i = 0; i < 6; ++i)
	{
		cout << array4[i] << std::endl;
	}


	//Вправа_5


	int array5[7];

	for (int i = 0; i < 7; ++i)
	{
		array5[i] = rand() % 100;
	}

	for (int i = 0; i < 7; ++i)
	{
		if (array5[i] % 2 != 0) array5[i] = 0;

	}

	for (int i = 0; i < 7; ++i)
	{
		cout << array5[i] << std::endl;
	}


	//Вправа_6


	int array6[4]{ 18, 11, 73, 27 };
	int arrayCopy[8];
	int index = 0;

	for (int i = 0; i < 4; ++i)
	{
		int last = array6[i] % 10;
		arrayCopy[index++] = last;
		arrayCopy[index++] = array6[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		cout << array6[i] << std::endl;
	}

	cout << std::endl;

	for (int i = 0; i < 8; ++i)
	{
		cout << arrayCopy[i] << std::endl;
	}


	//Вправа_7


	std::string somStr = "+Hello+world+!+";

	for (int i = 0; i < somStr.length(); ++i)
	{
		if (somStr[i] == '+') {
			somStr[i] = '-';
		}
	}
	cout << somStr << std::endl;


	//Вправа_8


	std::string newStr = "We1 g0t 2som3 7ex7 and numbe2s";

	cout << stringNumCount(newStr) << std::endl;


	//Вправа_9 


	std::string againStr = "zzzaHere some valuable info";

	cout << cryptStr(againStr) << std::endl;

	return 0;
}