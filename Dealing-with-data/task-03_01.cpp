#include <iostream>

void converter(int);

int main()
{
	using namespace std;
	int height;

	cout << "Enter height: ___ \b\b\b";
	cin >> height;
	converter(height);

	return 0;
}

void converter(int x)
{
	using namespace std;

	const int FACTOR = 12;

	int feet = x / FACTOR;
	int inches = x % FACTOR;

	cout << feet << "feet and " << inches << " inches" << endl; 
}
