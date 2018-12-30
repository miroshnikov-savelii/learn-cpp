#include <iostream>
#include <string>

int main()
{
	using namespace std; 		
	const string months[12] = { "January", "February", "March","April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int books[12];
	int sum = 0;

  for (int i = 0; i < 12; i++)
  {
    cout << "Enter books sales for " << months[i] << ": ";
    cin >> books[i];
    sum += books[i];
	}
	
	cout << "Total: " << sum << endl;
	return 0;
}
