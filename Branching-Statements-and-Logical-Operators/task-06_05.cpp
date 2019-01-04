#include <iostream>

int main()
{
  using namespace std;
  long int income;
  const int TAX = 5000;
  
  cout << "Enter your income: ";
  cin >> income;
  
  while(income >= 0)
  {
    if (income < TAX)
      cout << "Tax: " << 0 << endl;
    else if (income <= TAX * 3)
      cout << "Tax: " << (income  - TAX * 0.1) << endl;
    else if (income <= TAX * 7)
      cout << "Tax: " << (TAX * 0.1) + ((income - TAX * 2) * 0.15) << endl;
    else if (income > TAX * 7)
      cout << "Tax: " << (TAX * 2 * 0.1) + (TAX * 4 * 0.15) + ((income - TAX * 7) * 0.2) << endl;
    cout << "Enter your income, negative number for quit: ";
    cin >> income;
  }
  
  return 0;
}
