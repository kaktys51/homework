#include <iostream>
#include <stdio.h>
#include <iomanip>
using std::cout;
using std::cin;



int main()
{

	setlocale(LC_ALL, "Russian"); // ця функція потрібна для відображення символу градуса у консолі

	////Вправа_1

	//float temp = 0;
	//
	//cout << "Insert your body temeperature in °C: " << std::endl;
	//cin >> temp;

	//if (temp < 37 && temp >= 35) cout << temp << " °C - Your body temperature is within normal limits" << std::endl;
	//else if (temp <= 38 && temp >= 37) cout << temp << " °C - Your temperature is higher than normal, you should consult a doctor " << std::endl;
	//else if (temp < 35 && temp >= 34.5) cout << temp << " °C - Your temperature is below normal, your body is weakened" << std::endl;
	//else if (temp <= 40 && temp > 38) cout << temp << " °C - You have a fever, you need to see a doctor immediately" << std::endl;
	//else if (temp > 40 || temp < 35) cout <<  "Call the ambulance !!!" << std::endl;


	////Вправа_2


	//int hour = 0, min = 0, sec = 0;
	//
	//cout << "Enter 24h time in format HH.MM.SS : " << std::endl;
	//cin >> hour >> min >> sec;
	//
	//if (hour > 24 || hour < 0) 
	//{
	//	cout << "Invalid hours" << std::endl;
	//	if (min > 60 || min < 0)
	//	{
	//		cout << "Invalid minutes" << std::endl;
	//		if (sec > 60 || sec < 0)
	//		{
	//			cout << "Invalid seconds" << std::endl;
	//		}
	//	}
	//}
	//else 
	//{
	//	cout << "Your time in format HH.MM.SS is : ";
	//	cout << std::setfill('0') << std::setw(2) << hour << ".";
	//	cout << std::setfill('0') << std::setw(2) << min << ".";
	//	cout << std::setfill('0') << std::setw(2) << sec << std::endl;
	//}


	////Вправа_3 


	//int year = 0;

	//cout << "Enter the year : " << std::endl;
	//cin >> year;

	//bool isLeapYear = false;

	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
	//	isLeapYear = true;
	//}
	//		
	//if (isLeapYear)	cout << year << " - is leap year" << std::endl;
	//else cout << year << " - is not leap year" << std::endl;


	////Вправа_4 


	//int age = 0;

	//enum gen
	//{
	//	Male,
	//	Female,
	//};
	//int gen_pns = Male;

	//do {

	//	cout << "Enter age" << std::endl;
	//	cin >> age;
	//	cout << "Select sex (Male = 0, Female = 1)" << std::endl;
	//	cin >> gen_pns;

	//	switch (gen_pns)
	//	{
	//	case Male:
	//		if (age >= 60) cout << age << " years is the retirement age for men in Ukraine" << std::endl;
	//		else cout << age << " is not a sufficient retirement age for men in Ukraine" << std::endl;
	//		break;
	//	case Female:
	//		if (age >= 50) cout << age << " years is the retirement age for woman in Ukraine" << std::endl;
	//		else cout << age << " is not a sufficient retirement age for woman in Ukraine" << std::endl;
	//		break;
	//	default: cout << "Invalid gender!" << std::endl;
	//		cout << "Try again" << std::endl;
	//	}
	//} while (gen_pns != 1 && gen_pns != 0);


	////Вправа_5 


	//int IntegNum = 0;

	//while (IntegNum <= 100)
	//{
	//	cout << IntegNum << " ";
	//	++IntegNum;
	//}


	////Вправа_6 


	//int num2 = 0;
	//int summ = 0;
	//int i = 0;

	//while (i < 10)
	//{
	//	cin >> num2;
	//	summ += num2;
	//	++i;

	//}
	//cout << "Sum of numbers if " << summ << std::endl;
	//cout<<"Aithmetical mean is " << summ / i << std::endl;


	////Вправа_7 


	//const int maxCount = 4;
	//int oddArray[maxCount];
	//int oddNum = 0;
	//int count = 0;
	//int squareRes = 0;

	//do
	//{
	//	cin >> oddNum;
	//	if (oddNum != 0 && oddNum % 2 != 0)
	//	{
	//		if (count < maxCount)
	//		{
	//			oddArray[count] = oddNum;
	//			++count;
	//		}
	//		else break;
	//	}
	//} while (count < 4);

	//do
	//{
	//	for (count = 0; count < 4; ++count)
	//	{
	//		squareRes = oddArray[count] * oddArray[count];
	//		cout << "Number - " << oddArray[count] << ", Square - " << squareRes << std::endl;
	//		squareRes = 0;
	//	}
	//} while (count < 4);


	////Вправа_8 


	//int eveNum = 0;
	//int summ2 = 0;
	//int ii = 0;

	//while (ii < 7)
	//{
	//	cin >> eveNum;
	//	summ2 += eveNum;
	//	++ii;

	//}
	//cout << "Sum of numbers if " << summ2 << std::endl;


	////Вправа_9 


	//float inCM = 0;
	//float resConv = 0;

	//enum measuringValues
	//{
	//	Meter,
	//	Decemeter,
	//	Millimeter
	//};

	//int meserm = Meter;
	//do
	//{
	//	cout << "Enter value in cm : " << std::endl;
	//	cin >> inCM;
	//	cout << "Select measurement type: 0 - Meter, 1 - Decemeter, 2 - Millimeter " << std::endl;
	//	cin >> meserm;

	//	switch (meserm)
	//	{
	//	case Meter:
	//		resConv = inCM * 0.01;
	//		cout << inCM << " cm equal " << resConv << " meters" << std::endl;
	//		break;
	//	case Decemeter:
	//		resConv = inCM * 0.1;
	//		cout << inCM << " cm equal " << resConv << " decemeters" << std::endl;
	//		break;
	//	case Millimeter:
	//		resConv = inCM * 10;
	//		cout << inCM << " cm equal " << resConv << " decemeters" << std::endl;
	//		break;
	//	default: cout << "Invalid measurement type!" << std::endl;
	//	}
	//} while (meserm < 0 || meserm > 2);


	//Вправа_10


	float val_1 = 0;
	float val_2 = 0;
	float result = 0;
	char inCycle = 'n';
	
	enum operations
	{
		plus = '+',
		minus = '-',
		divide = '/',
		multiply = '*'
	};
	char symbol = '+';
	bool cycle = false;
	cout << "Enter your operation like this: 1 + 1 " << std::endl;
	cin >> val_1;


	do
	{
		if (cycle)  //result != 0
		{
			val_1 = result;
			cout << val_1 ;
		}

		cin >> symbol;

		switch (symbol)
		{
		case plus:

			cin >> val_2;
			result = val_1 + val_2;
			cout << result << std::endl;
			cout << "____________________" << std::endl;
			break;
		case minus:
			cin >> val_2;
			result = val_1 - val_2;
			cout << result << std::endl;
			break;
		case divide:
			cin >> val_2;
			if (val_1 == 0 && val_2 == 0)
			{
				cout << "Cant divide on 0 " << std::endl;
				cout << "Enter your operation like this: 1 + 1 " << std::endl;
				cin >> val_1;
				break;
			}
			result = val_1 / val_2;
			cout << result << std::endl;
			cout << "____________________" << std::endl;
			break;
		case multiply:
			cin >> val_2;
			result = val_1 * val_2;
			cout << result << std::endl;
			cout << "____________________" << std::endl;
			break;
		}

		cout << "Continue ? y - yes, n - no" << std::endl;
		cin >> inCycle;
		cycle = inCycle == 'y';

	} while (cycle);

	return 0;
}