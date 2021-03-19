#include<iostream>
#include<cmath>

using namespace std;


int main()
{
    int n, uoc=0;
    cin >> n;
    if (n<2) cout << "no";
    else
    {
        for (int i=2; i<=sqrt(n); i++) if (n%i==0) uoc++;
        if (uoc==1) cout << "no";
        else cout << "yes";
    }
    return 0;
}
