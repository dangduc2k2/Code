#include<iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    char a[100][100];
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(a[i][j]=='*') cout << a[i][j] << ' ';
            else
        }
        cout << endl;
    }
    return 0;
}
