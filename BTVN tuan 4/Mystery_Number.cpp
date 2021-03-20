#include<iostream>

using namespace std;
void delete_number(int a[], int p, int n)
{
    for (int i=p; i<n-1; i++) a[i]=a[i+1];
    n--;
}

int main()
{
    int n;
    cin >> n;
    int *a=new int[n];
    int *b=new int[n+1];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n+1; i++) cin >> b[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n+1; j++)
        {
            if (a[i]==b[j])
            {
                delete_number(b,j,n+1);
                j--;
            }
        }
    }
    cout << b[0];
    return 0;
}
