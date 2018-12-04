#include <iostream>

double distance;
double converter (double number);

int main()
{
	std::cout << "Enter the number of light years: ";
    std::cin >> distance;
    std::cout << distance << " light years = " << converter(distance) << " astronomical units." << std::endl;
return 0;
}

double converter (double number)
{
	return number * 63240;
};
