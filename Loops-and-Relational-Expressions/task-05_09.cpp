#include <iostream>
#include <cstring>
#include <string>
 
int main()
{
  using namespace std;
  string words;
  int counter = 0;
  
  cout << "Enter words (for finish enter word done): ";
  do
  {
    cin >> words;
    counter++;
  } while (words != "done");
  cout << "You entered " << counter - 1 << " words.";
  
	return 0;
}
