#include <iostream>

int main()
{
  double dafna = 100;
  double kleo = 100;
  double temp;
  int year;
  
  while (kleo <= dafna)
  {
    temp = kleo * 0.05;
    kleo += temp;
    dafna += 10.0;
    std::cout << "Kleo balance: " << kleo << "$, Dafna balance: " << dafna << "$" << std::endl;
    year++;
  }
  
  std::cout << "Year: " << year - 1 << std::endl;
  
	return 0;
}
