//Cau 27

#include<iostream>

using namespace std;

int main()
{
    int n;
    for (int i=1; i>0; i++)
    {
        cin >> n;
        if (n>-0 && n%5==0) cout << n/5 << endl;
        else {
            cout << "-1" << endl << "Bye";
            break;
        }
    }
    return 0;
}
