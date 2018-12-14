#include <iostream>

double consumption_of_gas(double);

int main()
{
        using namespace std;

        double consumption;

        cout << "Enter the consumption: ";
        cin >> consumption;
        cout << consumption_of_gas(consumption) << endl;

        return 0;
}

double consumption_of_gas(double consumption)
{
	const double mile = 62.14;
	const double gallon = 3.875;

	return mile / (consumption / gallon);
}

