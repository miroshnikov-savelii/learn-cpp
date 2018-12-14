#include <iostream>

float sum_of_arc(float, float, float);

int main()
{
	using namespace std;

	int minutes, seconds, degrees;

	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, "<< seconds << " seconds = " << sum_of_arc(degrees, minutes, seconds)<< " degrees" << endl;
	return 0;
}

float sum_of_arc(float deg, float min, float sec)
{
	const int SEC_IN_MIN = 60;
	const int MIN_IN_DEG = 60;

	min = min / MIN_IN_DEG;
	sec = sec / SEC_IN_MIN / MIN_IN_DEG;

	return deg + min + sec;
}
