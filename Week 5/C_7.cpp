#include<iostream>

using namespace std;

void in_cach(int& m)
{
	for (int i = 0; i < m; i++) cout << ' ';
}

void in_sao(int& n)
{
	for (int i = 0; i < n; i++) cout << '*';
}

int main()
{
	int so_dong;
	cin >> so_dong;
	int m = so_dong - 1, n = 1;
	so_dong = so_dong * 2 - 1;
	while (n <= so_dong)
	{
		in_cach(m);
		in_sao(n);
		cout << endl;
		m--;
		n += 2;
	}
	return 0;
}