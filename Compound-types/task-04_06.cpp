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
  
  CandyBar snack[3] =
  {
    {"Snikers", 2.3, 350},
    {"Skittels", 1.8, 250},
    {"Pringles", 1.3, 150}
  };
  
  cout << "snack name: " << snack[0].name << ", snack weight: " << snack[0].weight << ", snack calorie: " << snack[0].calorie << endl;
  cout << "snack name: " << snack[1].name << ", snack weight: " << snack[1].weight << ", snack calorie: " << snack[1].calorie << endl;
  cout << "snack name: " << snack[2].name << ", snack weight: " << snack[2].weight << ", snack calorie: " << snack[2].calorie << endl;
  
	return 0;
}
