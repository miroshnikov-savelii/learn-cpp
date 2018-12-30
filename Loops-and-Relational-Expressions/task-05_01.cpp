#include <iostream>

int amount_of_diff(int a, int b);

int main()
{
  using namespace std;
  
  int a, b;
  
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  
  cout << amount_of_diff(a, b) << endl;
  
	return 0;
}

int amount_of_diff(int a, int b)
{
  int sum;
  
  for(a; a < b + 1; a++)
    sum = sum + a;
  
  return sum;
}
