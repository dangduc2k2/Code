#include <iostream>
using namespace std;

bool kt_ngay(int d, int m, int y)
{
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (d>=1 && d<=31) return true;
            else return false;
            break;
        case 2:
            if (y%4==0)
            {
                if (d>=1 && d<=29) return true;
                else return false;
            }
            else
            {
                if (d>=1 && d<=28) return true;
                else return false;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (d>=1 && d<=30) return true;
            else return false;
            break;
        default:
            return false;
            break;
    }
}

struct date{
    int day,month,year;
    date (int _day, int _month, int _year){
        day=_day;
        month=_month;
        year=_year;
    }
    date getNextDay(){
        date a(day, month, year);
        switch (month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day==31) {
                    a.day=1;
                    a.month++;
                    if (a.month==13) {
                        a.month=1;
                        year ++;
                    }
                }
                else a.day++;
                break;
            case 2:
                if (a.year%4==0)
                {
                    if (a.day==29)
                    {
                        a.day=1;
                        a.month=3;
                    }
                    else a.day++;
                }
                else
                {
                    if (a.day==28)
                    {
                        a.day=1;
                        a.month=3;
                    }
                    else a.day++;
                }
                break;
            case 4: case 6: case 9: case 11:
                if (a.day==30)
                {
                    a.day=1;
                    a.month++;
                }
                else a.day=a.day+1;
                break;
        }
        return a;
    }
};

int main() {
    int d, m , y;
    char c;
    cin >> d >> c >> m >> c >> y;
    date day(d, m ,y);
    if(kt_ngay(d, m, y)==true)
    {
        date nextday = day.getNextDay();
        if (nextday.day<10) cout << "0";
        if (nextday.month<10) cout << nextday.day << "/0" << nextday.month;
        else cout << nextday.day << "/" << nextday.month;
        cout << "/" << nextday.year;
    }
    else cout << "INVALID";
    return 0;
}
