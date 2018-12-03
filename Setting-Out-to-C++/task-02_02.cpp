#include <iostream>

int main(void)
{
    using namespace std;

    int furlong_distance, yard_distance;
    
    cin >> furlong_distance;
    yard_distance = furlong_distance * 220;
    cout << yard_distance << endl;
    
    return 0;
}
