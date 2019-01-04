#include <iostream>
#include <string>

struct patron
{
  std::string name;
  double donation;
};

int main()
{
  using namespace std;
  int size;
  
  cout << "Enter number of patrons: ";
  cin >> size;
  patron * p = new patron[size];
  
  for (int i = 0; i < size; i++)
  {
    cin.ignore();
    cout << "Enter name of patron: ";
    getline(cin, (p + i)->name);
    cout << "Enter donation of patron: ";
    cin >> (p + i)->donation;
  }
  
  cout << "Patrons: " << endl;
  for (int i = 0; i < size; i++)
  {
    if ((p + i)->donation < 10000)
      cout << (p + i)->name << " " << (p + i)->donation << endl;
  }
  
  cout << "Grand Patrons: " << endl;
  for (int i = 0; i < size; i++)
  {
    if ((p + i)->donation >= 10000)
      cout << (p + i)->name << " " << (p + i)->donation << endl;
  }
  
  return 0;
}
