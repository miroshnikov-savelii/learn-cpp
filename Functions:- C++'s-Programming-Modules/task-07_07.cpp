#include <iostream>
#include <cfloat>
const int Max = 5;

int fill_array(double * begin, int n);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, const double * end); 

int main ()
{
	using namespace std;
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, (properties + size));
	if (size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) 
		{
			cin.clear ();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";  
		}
		revalue(factor, properties, (properties + size));
		show_array(properties, (properties + size));
	}
	cout << "Done.\n";
	return 0;
}
int fill_array(double * begin, int n)
{
	using namespace std;
	double temp;
	int i = 0;
	double * pt = begin;
	for (i; i < n; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!(temp >= DBL_MIN) && !(temp <= DBL_MAX))
			break;
		if (temp < 0)
			break;
		pt[i] = temp;
	}
	return i;
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	const double * pt = begin;
	int i = 0;
	for (i, pt; pt != end; pt++, i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *pt << endl;
	}
}

void revalue(double r, double * begin, const double * end)
{
	for (double * pt = begin; pt != end; pt++)
	*pt *= r;
}
