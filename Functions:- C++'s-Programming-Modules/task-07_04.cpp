#include <iostream>

void probability();

int main()
{
  probability();
  return 0;
}

void probability()
{
  long double result = 1.0;
  unsigned p, n;
  
  for (n = 47, p = 5; p > 0; n--, p--)
    result = result * n / p;
  for (n = 27, p = 1; p > 0; n--, p--)
    result = result * n / p;

  std::cout << "You have one chance in " << result << " of winning." << std::endl;
};
