#include <iostream>

const int ArSize = 18;
struct car
{
  char name[ArSize];
  int year;
};

int main()
{
  using namespace std;
  
  int catalog;
  cout << "How much cars in catalog: ";
  cin >> catalog;
  
  car * p = new car[catalog];
  
  for (int i = 0; i < catalog; i++)
  {
    cin.ignore();
    cout << "Car #" << i + 1 << endl;
    cout << "Enter producer: ";
    cin.getline(p[i].name, ArSize);
    cout << "Enter year of produce: ";
    cin >> p[i].year;
  }
  cout << "Here is your collection:" << endl;
  for (int i = 0; i < catalog; i++)
  {
      cout << p[i].name << " " << p[i].year << endl;
  }
  
	return 0;
}
