#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	char ch;

	cin.get(ch);
	while (ch != '@')
	{
		if(isdigit(ch))
		{
			cout << ch;
		}
		else
		{
			if(islower(ch))
			{
				cout << char(toupper(ch));
			}
			else	
			{
				cout << char(tolower(ch));
			}
		}
    cin.get(ch);
	}
  
	return 0;
}
