#include<iostream>

using namespace std;

bool eq(int a[],int b[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]!=b[i]) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[100], b[100];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    for (int i=0; i<n; i++)
    {
        if (a[i]!=b[i]) {
            cout << "false";
            break;
        }
        else {
            if (i==n-1) cout << "true";
            continue;
        }
    }
    return 0;
}
