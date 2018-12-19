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
  
  pizza cheese_pizza {};
  
  cout << "Enter pizzeria name: ";
  getline(cin, cheese_pizza.name);
  cout << "Enter pizza diameter: ";
  cin >> cheese_pizza.diameter;
  cout << "Enter pizza weight: ";
  cin >> cheese_pizza.weight;
  
  cout << "pizza name: " << cheese_pizza.name << ", pizza weight: " << cheese_pizza.weight << ", pizza diameter: " << cheese_pizza.diameter << endl;
	
  return 0;
}
