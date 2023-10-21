#include <iostream>
#include <string>
#include <cmath>
#include <complex>
using std::cout;
using std::cin;

struct Drib                    //Вправа_1_______________________________________________________________
{
public:

	Drib()
	{}

	Drib(std::string dispName, int _numerator, int _denominator) :
		displayValue(dispName), numerator(_numerator), denominator(_denominator)
	{}

	void printNumerator()
	{
		printf("Numerator: %d\n", numerator);
	}

	void printDenominator()
	{
		printf("Denominator: %d\n", denominator);
	}
	double getFractinon()
	{

		return numerator / denominator;
	}

	double getNumerator()
	{
		return numerator;
	}

	double getDenominator()
	{
		return denominator;
	}

private:
	std::string displayValue = " ";
	int numerator = 0;
	int denominator = 0;
};

int maxComDiv(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void plusFraction(int num1, int den1, int num2, int den2)
{
	int commonDenominator = den1 * den2;
	int newNum1 = num1 * den2;
	int newNum2 = num2 * den1;
	int sum = newNum1 + newNum2;

	int maximumCommonDivider = maxComDiv(sum, commonDenominator);

	int resNum = sum / maximumCommonDivider;
	int resDen = commonDenominator / maximumCommonDivider;

	cout << "Summ of fractions: " << resNum << "/" << resDen << std::endl;
}

struct Complex                 //Вправа_2_______________________________________________________________
{
	Complex()
	{}
	Complex(double a, double b) : c(a, b)
	{}

	double getReal()
	{
		return c.real();
	}
	double getImag()
	{
		return c.imag();
	}
	std::complex<double> getFull()
	{
		return c;
	}
private:
	std::complex<double> c;
};

std::complex<double> addComplex(std::complex<double> a, std::complex<double> b)
{
	std::complex<double> sum = a + b;
	return sum;
}

std::complex<double> subtractComplex(std::complex<double> a, std::complex<double> b)
{
	std::complex<double> sum = a - b;
	return sum;
}

struct Vector                  //Вправа_3_______________________________________________________________
{
public:

	Vector(double a, double b, double c) :
		x(a), y(b), z(c)
	{}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getZ()
	{
		return z;
	}

	bool arePerpendicular(const Vector& other) const
	{
		return x * other.x + y * other.y + z * other.z == 0;
	}
	bool areCollinear(const Vector& other) const 
	{
		if ((x == 0 && other.x == 0) || (y == 0 && other.y == 0) || (z == 0 && other.z == 0)) 
		{
			return true;
		}
		else if (other.x / x == other.y / y && other.y / y == other.z / z) 
		{
			return true; 
		}
		return false;
	}
private:
	double x, y, z;
};

struct Point                  //Вправа_4_______________________________________________________________
{
	Point(double a, double b):
		x(a), y(b)
	{}

	double distanceToZero() const 
	{
		return std::sqrt(x * x + y * y);
	}

	double x, y;
};

double distance(const Point& p1, const Point& p2)
{
	return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

int main()
{
	Drib one{ "3/4", 3, 4 };
	Drib two{ "1/5", 2, 5 };

	plusFraction(one.getNumerator(), one.getDenominator(), two.getNumerator(), two.getDenominator());

	Complex c1{ 3.0, 4.0 };
	Complex c2{ 1.0, 2.0 };


	std::complex<double> sum = addComplex(c1.getFull(), c2.getFull());
	std::complex<double> sub = subtractComplex(c1.getFull(), c2.getFull());
	cout << "Real: " << sum.real() << " Imag: " << sum.imag() << std::endl;
	cout << "Real: " << sub.real() << " Imag: " << sub.imag() << std::endl;

	Vector v1{ 2.0, 3.0, 4.0 };
	Vector v2{ 4.0, 6.0, 8.0 };

	if (v1.arePerpendicular(v2)) cout << "v1 and v2 are perpendicular." << std::endl;
	else cout << "v1 and v2 are not perpendicular." << std::endl;

	if (v1.areCollinear(v2)) cout << "v1 and v2 are collinear." << std::endl;
	else cout << "v1 and v2 are not collinear." << std::endl;

	Point p1{ 1.0, 4.0 };
	Point p2{ 3.0, 2.0 };

	double dist = distance(p1, p2);
	cout << "Distance betven p1 and p2: " << dist << std::endl;
	cout << "Distance to zero from p1: " << p1.distanceToZero() << std::endl;

	return 0;
}