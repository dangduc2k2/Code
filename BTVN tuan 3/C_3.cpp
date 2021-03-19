#include<iostream>

using namespace std;
bool so_doi_guong(int n)
{
    int a[100000];
    int i=0;
    while (n>0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for (int j=0; j<i; j++) if (a[j]!=a[i-1-j]) return false;
    return true;
}

int main()
{
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        int dem=0;
        for (int i=a; i<=b; i++) if (so_doi_guong(i)) dem++;
        cout << dem << endl;
    }
    return 0;
}
