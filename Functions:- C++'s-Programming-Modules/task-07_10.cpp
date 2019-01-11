#include <iostream>

double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double multiplication(double x, double y);

int main()
{
	using namespace std;	
	int x, y;
	char check;
	
	while (x != 0 && x != 0)
	{
		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << "Multiplication: " << calculate(x, y, multiplication) << endl;
		cout << "Add: " << calculate(x, y, add) << endl;
	}

	return 0;	
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return (*pf)(x, y);
}

double add(double x, double y)
{
	return x + y;
}

double multiplication(double x, double y)
{
	return x * y;
}
