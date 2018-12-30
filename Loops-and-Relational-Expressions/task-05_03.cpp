#include <iostream>

int main()
{
  using namespace std;
  
  int sum = 0;
  int i = 1;
  
  for( i; i != 0;)
  {
    cout << "Enter number: ";
    cin >> i;
    sum += i;
    cout << "Total: " << sum << endl;
  }
	return 0;
}
