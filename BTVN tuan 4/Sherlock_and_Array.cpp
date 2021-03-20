#include<iostream>

using namespace std;
bool check(int a[], int n)
{
    int trai=0, phai=0;
    for (int i=0; i<n; i++) trai+=a[i];
    for (int i=n-1; i>=0; i--)
    {
        trai-=a[i];
        if (trai==phai) return true;
        phai+=a[i];
    }
    return false;
}

int main()
{
    int t, n;
    cin >> t;
    int a[100000];
    while (t>0)
    {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        if (check(a, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
        t--;
    }
    return 0;
}
