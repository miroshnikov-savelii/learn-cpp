#include <iostream>

void time(long);

int main (void) {

	using namespace std;

	long seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	time(seconds);

	return 0;
}

void time(long sec) {
	const int SEC_IN_MIN = 60;
 	const int MIN_IN_HOUR = 60;
	const int HOUR_IN_DAY = 24;

	int seconds = sec % SEC_IN_MIN;
	int minutes = sec / SEC_IN_MIN;

	int hours = minutes / MIN_IN_HOUR;
	minutes = minutes % MIN_IN_HOUR;

	int days = hours / HOUR_IN_DAY;
	hours = hours % HOUR_IN_DAY;

	std::cout << sec << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
}
