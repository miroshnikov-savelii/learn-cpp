#include <iostream>

void consumption_of_gas(int, int);

int main()
{
	using namespace std;

	int kilometres, litre;

	cout << "Enter the number of liters: ";
	cin >> litre;
	cout << "Enter the number of kilometres: ";
	cin >> kilometres;

	consumption_of_gas(litre, kilometres);

	return 0;
}

void consumption_of_gas(int litre, int kilometres)
{
	using namespace std;
	int consumption = litre * 100 / kilometres;
	cout << "Consumption per 100 kilometers " << consumption << endl;
}
