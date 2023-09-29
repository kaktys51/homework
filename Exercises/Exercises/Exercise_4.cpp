#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;

int main() {

	//Вправа_1
	cout << "(Task - 1)\n" << std::endl;

	int num1 = 0, num2 = 0, num3 = 0;

	cout << "enter 3 integers" << std::endl;
	cin >> num1 >> num2 >> num3;

	int res1 = (num1 + num2 + num3) / 3;

	cout << "the arithmetic mean of your digets = " << res1 << std::endl;


	//Вправа_2
	cout << "(Task - 2)\n" << std::endl;

	int num11 = 89;
	int firstDig = num11 / 10;
	int secondDig = num11 % 10;

	int res = firstDig + secondDig;
	
	cout << "Value: "<< num11 << " includes two numbers: " << firstDig<< " and "<< secondDig<< std::endl;
	cout << firstDig << " + " << secondDig << " = " << res << std::endl;


	//Вправа_3
	cout << "(Task - 3)\n" << std::endl;

	int A = 7, B = 12, C = 32;

	bool compRes = A < B && B < C;

	if (compRes) cout << "true" << std::endl;
	else cout << "false" << std::endl;


	//Вправа_4
	cout << "(Task - 4)\n" << std::endl;

	int a = 5, b = 42, c = 88;

	int even_a = a % 2;
	int even_b = b % 2;
	int even_c = c % 2;

	if (a > 0 || b > 0 || c > 0) {
		if (even_a == 0 || even_b == 0 || even_b == 0)
			cout << "true" << std::endl;
	}
	else cout << "false" << std::endl;


	//Вправа_5
	cout << "(Task - 5)\n" << std::endl;

	int a1 = 42, b1 = 42;

	if (a1 == b1) cout << a1 << " equal " << b1 << std::endl;
	else if(a1 > b1) cout << a1 << " is bigger than " << b1 << std::endl;
	else cout << a1 << " is less than " << b1 << std::endl;


	//Вправа_6
	cout << "(Task - 6)\n" << std::endl;

	int num_2 = 22;

	int firstDig_1 = num_2 / 10;
	int secondDig_1 = num_2 % 10;

	if (firstDig_1 == secondDig_1) cout << "Value " << num_2 << " have equal digets " << firstDig_1 << " and " << secondDig_1 << std::endl;
	else cout << "The digets in value " << num_2 << " are not equal" << std::endl;


	//Вправа_7
	cout << "(Task - 7)\n" << std::endl;

	int num_3 = 363;

	int firstDig_2 = num_3 / 100;
	int secondDig_2 = num_3 % 10;

	if (firstDig_2 == secondDig_2) cout << "Value " << num_3 << " have equal digets " << firstDig_2 << " and " << secondDig_2 << std::endl;
	else cout << "The digets in value " << num_3 << " are not equal" << std::endl;


	//Вправа_8
	cout << "(Task - 8)\n" << std::endl;

	int rectangle_A = 0;
	int rectangle_B = 0;

	cout << "Enter the sides of the rectangle: " << std::endl;
	cin >> rectangle_A >> rectangle_B;

	if (rectangle_A == rectangle_B) cout << "Your rectangle is square" << std::endl;
	else cout << "Your rectangle if fine" << std::endl;


	//Вправа_9
	cout << "(Task - 9)\n" << std::endl;

	char letter = 0;
	
	cout << "Eter any symbol: " << std::endl;
	cin >> letter;

	if (letter >= 48 && letter <= 57) cout << "You have entered a number: " << letter << std::endl;
	else  cout << "Your symbol -"<< letter << "- is not a number" << std::endl;


	//Вправа_10
	cout << "(Task - 10)\n" << std::endl;

	int num_a = 0, num_b = 0;
	int t = 0;

	cout << "Enter the digits -a- and -b-, but -a- must be less than -b-: " << std::endl;
	cout << "Enter the digit -a-: " << std::endl;
	cin >> num_a;
	cout << "Enter the digit -b-: " << std::endl;
	cin >> num_b;

	if (num_a > num_b) {
		t = num_a;
		num_a = num_b;
		num_b = t;
		cout << "Error. Digit -a- and -b- swapped values " << std::endl;
		cout << "Now a = " << num_a << " , b = " << num_b << std::endl;
	}
	else cout << "a = " << num_a << " , b = " << num_b << std::endl;


	return 0;
}