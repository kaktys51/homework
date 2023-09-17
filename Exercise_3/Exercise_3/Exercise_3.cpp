#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;


int main()
{
	//Вправа_1
	cout << "(Task - 1)\n" << std::endl;

	int a = 5, b = 3;
	int res1 = 0;

	cout << "a + b = " << (res1=a+b)<< std::endl;
	cout << "a * b = " << (res1 = a * b) << std::endl;
	

	//Вправа_2 
	cout << "\n(Task - 2)\n" << std::endl;

	const int coef = 1000;
	float km = 1;

	cout << "Enter value of kilometrs (km) to convert them into miters (m)" << std::endl;
	cin >> km;
	float m = km * coef;
	cout << km << " - kilometrs = " << m << " - meters" << std::endl;


	//Вправа_3
	cout << "\n(Task - 3)\n" << std::endl;

	int min = 43;
	float costPerMin = 1.25;
	float total = min * costPerMin;

	cout << "Cotst of your call  is - " << total << "grn." << std::endl;
	cout << "Time of your call 45 min. Price for 1 minute is 1.25 grn." << std::endl;


	//Вправа_4
	cout << "\n(Task - 4)\n" << std::endl;


	const float apple = 4.30;
	const float orange = 7.90;
	const float chocolate = 35.10;
	const float tunaCan = 59.90;

	int apple_qa = 8;
	int orange_qa = 6;
	int chocolate_qa = 2;
	int tunaCan_qa = 3;

	float multipiler = 0;
	float checkout_price = 0;

	cout << "ATB - MRAKRET\n" << std::endl;

	cout << "Apple  \n" << apple_qa << " x " << apple << "            " << (multipiler = apple * apple_qa) <<"\n" << std::endl;
	checkout_price += multipiler;
	cout << "Orange  \n" << orange_qa << " x " << orange << "            " << (multipiler = orange * orange_qa) << "\n" << std::endl;
	checkout_price += multipiler;
	cout << "Chocolate  \n" << chocolate_qa << " x " << chocolate << "           " << (multipiler = chocolate * chocolate_qa) << "\n" << std::endl;
	checkout_price += multipiler;
	cout << "Tuna Can  \n" << tunaCan_qa << " x " << tunaCan << "           " << (multipiler = tunaCan * tunaCan_qa) << "\n" << std::endl;
	checkout_price += multipiler;

	cout << "Your total - " << checkout_price << " grn" << std::endl;


	//Вправа_5
	cout << "\n(Task - 5)\n" << std::endl;


	const float usd = 36.89;
	const float eur = 39.52;
	const float pln = 8.55;

	float usd_grn = 0;
	float eur_grn = 0;
	float pln_grn = 0;

	float value = 0;

	cout << "Good morning. Below you can convert your grn into euros, dollars and zlotys." << std::endl;
	cout << "Enter your value in grn: " << std::endl;
	cin >> value;

	usd_grn = value / usd;
	eur_grn = value / eur;
	pln_grn = value / pln;

	cout << "You can recive:" << std::endl;
	printf("USD: %.2f", usd_grn);
	cout << std::endl;
	printf("USD: %.2f", eur_grn);
	cout << std::endl;
	printf("USD: %.2f", pln_grn);
	cout << std::endl;


	//Вправа_6
	cout << "\n(Task - 6)\n" << std::endl;


	const int fullMarsCircle = 686;
	int circles = 0;
	int res2 = 0;

	cout << "Mars makes a complete cirle around the Sun in 686 Earth days" << std::endl;
	cout << "Enter the number of complete circles: " << std::endl;
	
	cin>> circles;

	cout << circles << " full circles of Mars around of sun is - " << (res2 = circles * fullMarsCircle) << " Earth days." << std::endl;


	//Вправа_7
	cout << "\n(Task - 7)\n" << std::endl;

	int num = 0;
	int square = 0;
	int cube = 0;

	cout << "Enter number:" << std::endl;
	cin >> num;
	
	cout << "Square - " << (square = num * num) << ", Cube - " << (cube = num * num * num) << std::endl;


	//Вправа_8
	cout << "\n(Task - 8)\n" << std::endl;


	int fuelCons = 12;
	float gasPrice = 52.45;
	int trip = 250;
	float res3 = 0;

	cout << "The price of fuel for a " << trip << " km trip will be - " << (res3 = gasPrice * (trip * fuelCons / 100)) << " grn." << std::endl;

	return 0;
}

