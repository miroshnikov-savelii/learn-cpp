#include <iostream>
#include <string>

const int ArSize = 3;
struct bop
{
  std::string fullname;
  std::string title;
  std::string bopname;
  int preference;
};

int main()
{
  using namespace std;
  char choice;
  bop list[ArSize] =
  {
    {"Wimp Macho",   "Junior Programmer", "Macho", 3},
    {"Raki Rhodes",  "Middle Programmer", "Rhodes", 2},
    {"Celia Laiter", "Senior Programmer", "Celia", 1}
  };
  
  cout << "Benevolent Order of Programmers Report" << endl << "a. display by name    b. display by title" << endl << "c. display by bopname d. display by preference" << endl << "q. quit" << endl;
  
  cout << "Enter your choice: ";
  cin.get(choice);
  while (choice != 'q')
  {
    switch(choice)
    {
      case 'a':
      {
        for (int i = 0; i < ArSize; i++)
        {
          cout << list[i].fullname << endl;
        }
        break;
      }
      case 'b':
      {
        for (int i = 0; i < ArSize; i++)
        {
          cout << list[i].title << endl;
        }
        break;
      }
      case 'c':
      {
        for (int i = 0; i < ArSize; i++)
        {
          cout << list[i].bopname << endl;
        }
        break;
      }
      case 'd':
      {
        for (int i = 0; i < ArSize; i++)
        {
          switch (list[i].preference)
          {
            case 1:
            {
              cout << list[i].fullname << endl;
              break;
            }
            case 2:
            {
              cout << list[i].title << endl;
              break;
            }
            case 3:
            {
              cout << list[i].bopname << endl;
              break;
            }
          }
        }
        break;
      }
    }
    cout << "Next choice: ";
    cin >> choice;
  }
  
  return 0;
}
