#include <iostream>
#include <string>

int main()
{
	using namespace std; 		
	const string months[12] = { "January", "February", "March","April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int books[3][12];
  int year[3];
	int sum = 0;
  
  for (int l = 0; l < 3; l++)
  {
    cout << "Year: " << l + 1 << endl;
    for (int i = 0; i < 12; i++)
    {
      cout << "Enter books sales for " << months[i] << ": ";
      cin >> books[l][i];
      sum += books[l][i];
      year[l] += books[l][i];
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
      cout << "Year: " << i << " " << year[i] << " books" << endl;
  }
  
	cout << "Total: " << sum << endl;
	return 0;
}

