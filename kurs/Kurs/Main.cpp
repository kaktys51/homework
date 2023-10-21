#include <iostream>
#include <string>
#include <iomanip>
#include "Total_header.h"

using std::cout;
using std::cin;



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

