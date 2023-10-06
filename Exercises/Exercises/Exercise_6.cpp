#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 

using std::cout;
using std::cin;

int main()
{
	//¬права_1

	int array_1[10];
	long multip = 1;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter number: " << std::endl;
		cin >> array_1[i];
		multip *= array_1[i];
	}
	cout << "Enter number: " << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << " " << array_1[i];
	}

	cout << std::endl;
	cout << "Array multiplied:  " << multip << std::endl;


	//¬права_2

	std::srand(std::time(nullptr));

	int array_2[7];

	int negativNum = 0;
	int positiveNum = 0;

	for (int i = 0; i < 7; ++i)
	{
		array_2[i] = rand() % 62 - 12;
		cout << " " << array_2[i];
	}

	for (int i = 0; i < 7; ++i)
	{
		if (array_2[i] < 0) ++negativNum;
		else ++positiveNum;
	}

	cout << std::endl;
	cout << "Array have: " << std::endl;
	cout << "Negative numbers: " << negativNum << std::endl;
	cout << "Positive numbers: " << positiveNum << std::endl;


	//¬права_3


	long array_3[7]{ 6, 55, 12, 89, 33 , 41, 9 };
	int evenSum = 0;

	for (int i = 0; i < 7; ++i)
	{
		if (array_3[i] % 2 == 0) evenSum += array_3[i];
	}

	cout << "The summ of all even numbers of array = " << evenSum << std::endl;


	//¬права_4

	const int arraySize = 30;
	long long array_4[arraySize]{1};
	int coun = 0;


	for (int i = 0; i < arraySize -1; ++i)
	{
		if (i == 28)
		{
			array_4[29] = array_4[28] * 2;
			break;
		}
		array_4[i + 1] = array_4[i] * 2;
		//cout << array_4[i] << " ";
		//++coun;

	}

	for (int i = 0; i < 30; ++i)
	{
		cout << array_4[i] << std::endl;

	}

	cout << std::endl;

	for (int i = arraySize - 1; i >= 0; --i)
	{
		cout << array_4[i] << std::endl;
	}


	//¬права_5


	int array_5[]{ 5, 2, -32, 10 , -2, -7 };

	for (int i = 0; i < 6; ++i)
	{
		if (array_5[i] < 0)
			array_5[i] = array_5[i] * (-1);
		cout << array_5[i] << std::endl;

	}


	//¬права_6


	int array_6[]{ 45, 8, 3, -13, 44, -1};
	int temp = 0;
	int minIndex = 0;
	int maxIndex = 0;

	for (int i = 0; i < 6; ++i)
	{
		if (array_6[i] < array_6[minIndex])
		{
			minIndex = i;
		}

		if (array_6[i] > array_6[maxIndex])
		{
			maxIndex = i;
		}
		
	}

	temp = array_6[minIndex];
	array_6[minIndex] = array_6[maxIndex];
	array_6[maxIndex] = temp;

	for (int i = 0; i < 6; ++i)
	{
		cout << array_6[i] << std::endl;
	}


	//¬права_7


	int array_7[]{ 11, 4, -3, 83, 9, -1};
	int summ1 = 0;

	for (int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
			summ1 += array_7[i];
	}

	cout << summ1 << std::endl;


	//¬права_8

	int array_8[]{ 45, -88, 71, 10, -3, 3, 10, 19, 33, -6, 13, 5 };
	int firstMinIndex = 0;
	int lastMinIndex = 0;
	int lenght = sizeof(array_8) / sizeof(array_8[0]);

	for (int i = 0; i < lenght; ++i)
	{
		if (array_8[i] < 0)
		{
			firstMinIndex = i;
			break;
		}
	}

	for (int i = lenght - 1; i >= 0; --i)
	{
		if (array_8[i] < 0)
		{
			lastMinIndex = i;
			break;
		}
	}

	int indexCount = 0;

	lastMinIndex = (lenght - lastMinIndex) - 1; // знаходимо к≥льк≥сть чисел в≥д потр≥бного до к≥нц€ массиву  
	indexCount = lenght - (firstMinIndex + lastMinIndex) - 2; // в≥дн≥маЇмо 2 бо результат потр≥бен м≥ж 2 цими числами

	cout << indexCount;


	//¬права_9


	int array_9[]{ 12, 45, 78, -9, 5, -11, 8, 75 };
	int lenghtAray_9 = sizeof(array_9) / sizeof(array_9[0]);
	int temp1 = 0;

	for (int i = 0; i < lenghtAray_9; ++i)
	{
		if (i == lenghtAray_9-1) break;
		temp1 = array_9[i];
		array_9[i] = array_9[i + 1];
		array_9[i + 1] = temp1;
	}

	for (int i = 0; i < lenghtAray_9; ++i)
	{
		cout << array_9[i] << " ";
	}


	//¬права_10


	const int lenghtArray_10 = 8;
	int array_10[lenghtArray_10]{ 10, 8, 12, 35, -66, 42, 11,-1 };
	int cloneArray_10[lenghtArray_10];

	for (int i = 0; i < lenghtArray_10; ++i)
	{
		cloneArray_10[i] = array_10[i];

	}

	for (int i = 0; i < lenghtArray_10; ++i)
	{
		cout << cloneArray_10[i] << " ";
	}


	//¬права_11


	const int lenghtArray_11 = 8;
	int array_11[lenghtArray_11]{ 0, 8, -32, 11, 10, 4, 18, 5 };
	int reversCloneArray_11[lenghtArray_11];

	for (int i = 0; i < lenghtArray_11; ++i)
	{
		reversCloneArray_11[i] = array_11[lenghtArray_11 - 1 - i];
	}

	cout << std::left << std::setw(10) << "Index" << std::setw(20) << "Original array" << std::setw(20) << "Reverse array" << std::endl;

	for (int j = 0; j < lenghtArray_11; ++j)
	{
		cout << std::left << std::setw(10) << j << std::setw(20) << array_11[j] << std::setw(20) << reversCloneArray_11[j] << std::endl;

	}


	//¬права_12


	const int kLenght = 7;
	int array_12_1[kLenght]{ 1, 45, 78, 8, 64, 2, -7 };
	int array_12_2[kLenght]{ 77, 91, -8, 7, 13, 14, 4, };

	const int cloneLenght = kLenght * 2;
	int cloneArray_12[cloneLenght]{};

	for (int i = 0; i < kLenght; ++i)
	{
		cloneArray_12[i] = array_12_1[i];
	}

	for (int i = kLenght ; i < cloneLenght; ++i)
	{
		cloneArray_12[i] = array_12_2[i - kLenght];
	}

	for (int i = 0; i < cloneLenght; ++i)
	{
		cout << cloneArray_12[i] << " ";
	}


	//¬права_13

	const int lenghtArrayA = 10;
	int arrayA[lenghtArrayA]{ 31, 14, 47, -54, 11, -78, 21, 20, 6, 25 };
	
	const int lenghtBC = lenghtArrayA / 2;
	int arrayB[lenghtBC]{};
	int arrayC[lenghtBC]{};

	for (int i = 0; i < lenghtBC; ++i)
	{
		arrayB[i] = arrayA[i];
	}

	for (int i = 0; i < lenghtBC; ++i)
	{
		arrayC[i] = arrayA[i + lenghtBC];

	}

	for (int i = 0; i < lenghtBC; ++i)
	{
		cout << arrayB[i] << " ";
		cout << arrayC[i] << " ";

	}


		return 0;
}