//Cau 26

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    double tb;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        tb+=a[i];
    }
    tb=tb/n;
    sort(a, a+n);
    cout << "Gia tri trung binh la: " << tb << endl
         << "Gia tri lon nhat la: " << a[n-1] << endl
         << "Gia tri nho nhat la: " << a[0];
    return 0;
}
