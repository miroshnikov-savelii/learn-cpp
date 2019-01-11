#include <iostream>
#include <string>

struct box
{
  std::string maker;
  float height;
  float wight;
  float lenght;
  float volume;
};

void show(box b1);
int volume(const box * pb1);

int main()
{
  box b1 ={ "First Box", 10, 10, 10};
  b1.volume = volume(&b1);
  show(b1);
  
  return 0;
}

void show(box b1)
{
  using namespace std;
  cout << "Box maker: " << b1.maker << endl;
  cout << "Height " << b1.height << ", wigth " << b1.wight << ", lenght " << b1.lenght << endl;
  cout << "Box volume " << b1.volume << endl; 
};

int volume(const box * pb1)
{
  return (pb1->height * pb1->wight * pb1->lenght);
};
