#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=n; i>0; i--) {
        int j=n-i;
        while (j>0) {
            cout << ' ';
            j--;
        }
        for (int k=0; k<i; k++) cout << '*';
        cout << endl;
    }
    return 0;
}
