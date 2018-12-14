#include <iostream>

float converter(int, int, int);
float sqrt(float);

int main()
{
	using namespace std;

	int feet, inches, pound;

	cout << "Enter your height in feet: ";
	cin >> feet;
	cout << "Enter your height in inches: ";
	cin >> inches;
	cout << "Enter yout weight in pound: ";
	cin >> pound;
	cout << "Your BMI is " << converter(feet, inches, pound) << endl;

	return 0;
}

float converter(int f, int i, int p)
{
	const int FEET_TO_INCH = 12;
	const float INCH_TO_METER = 0.0254;
	const float POUND_TO_KILO = 2.2;

	float height = i + FEET_TO_INCH * f;
	height = height * INCH_TO_METER;
	float weight = p / POUND_TO_KILO;

	return weight / sqrt(height);
}

float sqrt(float x)
{
	return x*x;
}
