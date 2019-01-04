#include <iostream>
#include <fstream>

int main()
{
  using namespace std;
  
  ifstream inFile;
  inFile.open("list_of_patrons");
  int symbols = 0;
  char ch;
  
  while (inFile >> ch)
    symbols++;
  
  inFile.close();
  
  cout << "Total symbols: " << symbols << endl;
  
  return 0;
}
