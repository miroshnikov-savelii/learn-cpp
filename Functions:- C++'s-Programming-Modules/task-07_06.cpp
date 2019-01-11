#include <iostream>
#include <cfloat>

int Fill_array(double array[], int size);
void Show_array(const double array[], int size);
void Reverse_array(double array[], int size);
const int ArSize = 10;
using namespace std;

int main()
{
	double array[ArSize];

	int size = Fill_array(array, ArSize);
	Show_array(array, size);
	Reverse_array(array, size);
	Show_array(array, size);

	return 0;
}

int Fill_array(double array[], int size)
{
	int i = 0;
	for (i; i < size; i++)
	{
		cout << "#" << (i + 1) << ": ";
		double temp;
		cin >> temp;
		if ( temp >= DBL_MIN && temp <= DBL_MAX)
			array[i] = temp;
		else
			break;
	}
	return i;
}

void Show_array(const double array[], int size)
{
	cout << "Array: ";
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
 	cout << endl;
}

void Reverse_array(double array[], int size)
{
	int i = 0;
	int j = size - 1;
	double temp;
	for (i, j; i < j ; i++, j--)
	{
		double temp;
		temp = array[i];
		array[i] = array[j];
		array[j] = temp; 
	}
}
