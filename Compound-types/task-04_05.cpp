#include <iostream>
#include <string>

struct CandyBar
{
  std::string name;
  float weight;
  int calorie;
};

int main()
{
	using namespace std;
  
  CandyBar snack {"Moncha Munch", 2.3, 350};
  
  cout << "snack name: " << snack.name << endl;
  cout << "snack weight: " << snack.weight << endl;
  cout << "snack calorie: " << snack.calorie << endl;
  
	return 0;
}
