
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    
    const int ArSize = 10;
    
    char first_name[ArSize];
    char last_name[ArSize];
    char full_name[ArSize * 2 + 2];

    cout << "Enter your first name: ";
    cin.getline(first_name, ArSize);
    cout << "Enter your last name: ";
    cin.getline(last_name, ArSize);

    strcpy(full_name, first_name);
    strcat(full_name, ", ");
    strcat(full_name, last_name);

    cout << "Here's the information in a single string: " << full_name << endl;
    
    return 0;
}
