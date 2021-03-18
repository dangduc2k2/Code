#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j=n-1, k=1;
    n=n*2-1;
    while (k<=n)
    {
        for (i=0; i<j; i++) cout << ' ';
        for (i=0; i<k; i++) cout << '*';
        for (i=0; i<j; i++) cout << ' ';
        cout << endl;
        j--;
        k+=2;
    }
    return 0;
}
