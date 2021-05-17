#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int k=-1; k<n; k++) {
                cout << s[i] << s[j];
                if (k==-1) cout << ' ';
                else cout << s[k] << ' ';
            }
        }
    }
}
