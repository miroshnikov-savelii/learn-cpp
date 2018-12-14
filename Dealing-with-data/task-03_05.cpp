#include <iostream>

float percent(float, float);

int main()
{
	using namespace std;

	long long world, us;

	cout << "Enter the world population: ";
	cin >> world;
	cout << "Enter the population of US: ";
	cin >> us;
	cout << "The population of US is " << percent(world, us) << " of the world population." << endl;

	return 0;
}

float percent(float total, float part)
{
	return total / part * 100;
}
