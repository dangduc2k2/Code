#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[100];
    int vt;
    for (int i=0; i<n; i++) cin >> s[i];
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (s[i].size()!=s[j].size()) continue;
            else
            {
                int m=s[i].size();
                for (int k=0; k<m; k++)
                {
                    if (s[i][k]!=s[j][m-1-k]) break;
                    else
                    {
                        if (k==(m-1)/2) cout << m << ' ' << s[i][k];
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}
