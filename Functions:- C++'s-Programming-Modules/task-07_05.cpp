#include <iostream>

int factorial(int	i);

int main()
{
	using namespace std;
	
	int number;
	cout << "Any negative number for exit" << endl << "Enter number: ";
	cin >> number;
	while(number >= 0)
	{
		cout << factorial(number) << endl;
		cout << "Enter number: ";
		cin >> number;
	}
	return 0;
}

int factorial(int i)
{
	if (i == 0)
		return 1;
	else
		return i * factorial(i-1);
}
