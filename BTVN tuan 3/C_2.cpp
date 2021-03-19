#include<iostream>
#include<string>

using namespace std;

bool doi_xung(string s)
{
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (doi_xung(s)) cout << "Yes";
    else cout << "No";
    return 0;
}
