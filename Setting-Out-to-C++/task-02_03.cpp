#include <iostream>

using namespace std;

void first_sentence();
void second_sentence();

int main()
{
	first_sentence();
	first_sentence();
	second_sentence();
	second_sentence();
	
	return 0;
}

void first_sentence()
{
    cout << "Three blind mice" << endl;
}

void second_sentence()
{
    cout << "See how they run" << endl;
}
