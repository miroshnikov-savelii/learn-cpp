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
  
  CandyBar *snack = new CandyBar[3];
  
  snack[0].name = "Snikers";
  snack[0].weight = 2.3;
  snack[0].calorie = 350;
  
  snack[1].name = "Skittels";
  snack[1].weight = 1.8;
  snack[1].calorie = 250;
  
  snack[2].name = "Pringles";
  snack[2].weight = 1.3;
  snack[2].calorie = 150;
  
  cout << "snack name: " << snack[0].name << ", snack weight: " << snack[0].weight << ", snack calorie: " << snack[0].calorie << endl;
  cout << "snack name: " << snack[0].name << ", snack weight: " << snack[1].weight << ", snack calorie: " << snack[1].calorie << endl;
  cout << "snack name: " << snack[0].name << ", snack weight: " << snack[2].weight << ", snack calorie: " << snack[2].calorie << endl;
  
	return 0;
}
