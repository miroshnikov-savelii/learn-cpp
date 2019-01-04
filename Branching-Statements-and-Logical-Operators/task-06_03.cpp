#include <iostream>

int main()
{
  using namespace std;
  char choice;
  
  cout << "Please enter one of the following choices: " << endl << "c) carnivore p) pianist" << endl << "t) tree      g) game" << endl;
  
  do
  {
    cout << "Please enter a c, p, t, g or q for exit: ";
    cin >> choice;
    switch(choice)
    {
      case 'c' : cout << "The lion is a carnivore." << endl;
        break;
      case 'p' : cout << "The pianist is a musician." << endl;
        break;
      case 't' : cout << "A maple is a tree." << endl;
        break;
      case 'g' : cout << "Chess - a game." << endl;
        break;
    }
  }while (choice != 'q');
  
  return 0;
}
