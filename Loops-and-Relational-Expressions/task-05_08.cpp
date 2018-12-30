#include <iostream>
#include <cstring>
 
int main()
{
  using namespace std;
  char string[64];
  int counter = 0;
  
  cout << "Enter words (for finish enter word done): ";
  do
  {
    cin >> string;
    counter++;
  } while (strcmp(string, "done"));
  cout << "You entered " << counter - 1 << " words.";
  
	return 0;
}
