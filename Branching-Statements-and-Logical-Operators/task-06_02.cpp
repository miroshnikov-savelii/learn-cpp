#include <iostream>
#include <float.h>

bool check(double);
const int ArSize = 10;

int main()
{
	using namespace std;
	double numbers[ArSize];
	double total, average;
	int count = 0;

	for (int i = 0; i < ArSize; i++)
	{
		double temp = 0;
		cout << "Enter number: ";
		cin >> temp;

		if (check(temp))
		{
			numbers[i] = temp;
			total += temp;
		}	
		else 
			break;
	}

	average = total / ArSize;
	cout << "Average: " << average << endl;

	for (int i = 0; i < ArSize; i++)
	{
		if (numbers[i] < average)
			count++;
	}

	cout << "Numbers bigger average: " << count << endl;

	return 0;
}

bool check(double x)
{
	if (DBL_MIN <= x && DBL_MAX >= x)
		return true;
	else
		return false;
}

