#include<iostream>

using namespace std;

int main()
{
    int i;
    for (i=1; i<=100; i++) cout << i << ' ';
    cout << endl;
    i=1;
    while (i<=100)
    {
        cout << i << ' ';
        i++;
    }
    cout << endl;
    i=1;
    do
    {
        cout << i << ' ';
        i++;
    } while (i<=100);
    return 0;
}
