//Cau 17

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year%4!=0 || (year%100==0 && year%400!=0)) cout << "false";
    else cout << "true";
    return 0;
}
