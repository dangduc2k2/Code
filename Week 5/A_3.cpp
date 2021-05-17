#include<iostream>

using namespace std;

void pass_by_value(int n)
{
	cout << "n1->" << &n << endl;
}

void pass_by_reference(int& n)
{
	cout << "n2->" << &n << endl;
}

int main()
{
	int n;
	cin >> n;
	cout << "n->" << &n << endl;
	pass_by_value(n);
	pass_by_reference(n);
	return 0;
}

//khi truyen tham so bang co che pass_by_value, doi so va tham tri la 2 bien doc lap co dia chi khac nhau
//khi truyen tham so bang co che pass_by_reference, doi so va tham bien chinh la 1 bien