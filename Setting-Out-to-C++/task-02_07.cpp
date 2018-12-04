#include <iostream>

void show_time(int hours, int minutes);

int main()
{
	using namespace std;
	
	int hours, minutes;
	
	cout << "Enter the numbers of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	show_time(hours, minutes);
	
	return 0;
}

void show_time(int hours, int minutes)
{
	using namespace std;
	cout << hours << ":" << minutes << endl;
}
