#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-2; i++)
        for (int j=i+1; j<n-1; j++)
            for (int k=j+1; k<n; k++)
                if (a[i]+a[j]==0) cout << "Cap so can tim la: " << a[i] << ' ' << a[j];
    return 0;
}

