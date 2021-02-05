//Cau 28

#include<iostream>

using namespace std;

int main()
{
    int h=0 ;
    while (h<24)
    {
        if (h==0) cout << "12 midnight" << endl;
        else if (h<12) cout << h << "am" << endl;
        else if (h==12) cout << "12 noon" << endl;
        else cout << h-12 << "pm" << endl;
        h++;
    }
    return 0;
}
