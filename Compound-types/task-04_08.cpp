#include <iostream>
#include <string>

struct pizza
{
  std::string name;
  int diameter;
  int weight;
};

int main()
{
	using namespace std;
  
  pizza *p_pizza = new pizza;
  
  cout << "Enter pizzeria name: ";
  getline(cin, p_pizza->name);
  cout << "Enter pizza diameter: ";
  cin >> p_pizza->diameter;
  cout << "Enter pizza weight: ";
  cin >> p_pizza->weight;
  
  cout << "pizza name: " << p_pizza->name << ", pizza weight: " << p_pizza->weight << ", pizza diameter: " << p_pizza->diameter << endl;
	
  return 0;
}
