#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n=n*2-1;
    int i, j=0, k=n;
    while (k>=1)
    {
        for (i=j; i>0; i--) cout << ' ';
        for (i=k; i>0; i--) cout << '*';
        for (i=j; i>0; i--) cout << ' ';
        cout << endl;
        j++;
        k-=2;
    }
    return 0;
}

