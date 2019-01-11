#include <iostream>

double func(double x, double y);

int main()
{
  using namespace std;
  
  double x, y;
  
  while (true)
	{
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Result: " << func(x, y) << endl;
    if (x == 0 || y == 0)
      break;
  }
  
  return 0;
}

double func(double x, double y)
  { return 2.0 * x * y / (x + y); };
