#include<iostream>
using namespace std;
string str(string x) {
    cout << &x << endl;
    return x;
}

int main()
{
    string s = "";
    cout << &s << endl;
    cout << str(s);
    return 0;
}

//mang duoc truyen theo co che pass-by-reference
//string duoc truyen theo co che pass-by-value