#include <iostream>
#include <array>

int main()
{
  using namespace std;
  
  array<int, 3> result;
  
  cout << "Enter result: ";
  cin >> result[0];
  cout << "Enter result: ";
  cin >> result[1];
  cout << "Enter result: ";
  cin >> result[2];
  
  cout << "All results: " << result[0] << ", " << result[1] << ", " << result[2] << endl;
  cout << "Average: " << (result[0] + result[1] + result[2]) / 3 << endl;
  
	return 0;
}
