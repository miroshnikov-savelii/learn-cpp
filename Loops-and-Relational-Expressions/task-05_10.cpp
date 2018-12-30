#include <iostream>

int main()
{
  using namespace std;
  int i;
  
  cout << "Enter numbers of lines: ";
  cin >> i;
  
  for (int l = 1; l <= i; l++)
  {
    for (int j = 0; j < i - l; j++)
      cout << ".";
        for (int j = 0; j < l; j++)
          cout << "*";
    cout << endl;
  }
  
  return 0;
}
