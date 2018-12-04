#include <iostream>

using namespace std;

int degree;
int converter (int number);

int main()
{
	
	
	cout << "Please enter a Celsius value: ";
	cin >> degree;
	cout << degree << " degrees Celsius is " << converter(degree) <<" degrees Fahrenheit." << endl;
	
	return 0;
}

int converter(int number)
{
	return 1.8 * number + 32;
}
