#include <iostream>

int main()
{
  using namespace std;
  
  const int SIZE = 128;
  const char vowels[6] = {'a', 'e', 'u', 'i', 'y', 'o'};
  const char concordants[20] = {'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
  char word[SIZE];
  int vowel = 0;
  int concordant = 0;
  int other = 0;
  bool check;
  
  cout << "Enter words (q to quit): ";
  cin >> word;
  while (word[0] != 'q' && sizeof(word)/sizeof(char) != 2)
  {
    check = false;
    for (int i = 0; i < 6; i++)
    {
      if (word[0] == vowels[i])
      {
        vowel++;
        check = true;
      }
    }
    for (int i = 0; i < 20; i++)
    {
      if (word[0] == concordants[i])
      {
        concordant++;
        check = true;
      }
    }
    
    if (check == false)
      other++;
    cin >> word;  
  }
  
  cout << vowel << " words beginning with vowels" << endl;
  cout << concordant << " words beginning with concordant" << endl;
  cout << other << " others" << endl;
  
  return 0;
}
