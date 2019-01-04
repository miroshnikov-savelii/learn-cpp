#include <iostream>
#include <fstream>
#include <string>

const int ArSize = 32;
struct patron
{
  char name[ArSize];
  double donation;
};

int main()
{
  using namespace std;
  
  ifstream inFile;
  inFile.open("list_of_patrons");
  
  int size;
  inFile >> size;
  inFile.get();
  
  patron * p = new patron[size];
  
  for (int i = 0; i < size; i++)
  {
    inFile.getline((p+i)->name, ArSize);
    inFile >> (p+i)->donation;
    inFile.get();
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
