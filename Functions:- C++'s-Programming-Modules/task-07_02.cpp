#include <iostream>

int fill_array(int arr[], int limit);
void show_array(const int arr[], int limit);
void average_array(const int arr[], int limit);
using namespace std;

int main()
{
  int limit = 10;
  int array[limit];
  
  fill_array(array, limit);
  show_array(array, limit);
  average_array(array, limit);
  
  return 0;
}

int fill_array(int arr[], int limit)
{
  int temp, i;
  for (i = 0; i < limit; i++)
  {
    cout << "Enter result #" << (i + 1) << ": ";
    cin >> temp;
    if (!cin)
    {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input" << endl;
        break;
    }
    else if  (temp < 0)
      break;
    arr[i] = temp;
  }
  return i;
};


void show_array(const int arr[], int limit)
{
  cout << "All results:" << endl;
  for (int i = 0; i < limit; i++)
    cout << arr[i] << " ";
  cout << endl;
};

void average_array(const int arr[], int limit)
{
  cout << "Average result: ";
  int average = 0;
  for (int i = 0; i < limit; i++)
    average += arr[i];
  cout << (average / limit) << endl;
};
