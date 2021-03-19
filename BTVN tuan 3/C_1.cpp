#include<iostream>

using namespace std;
bool tim_lap(int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]==a[j]) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i=0; i<n; i++) cin >> a[i];
    if (tim_lap(a, n)) cout << "YES";
    else cout << "NO";
    return 0;
}
