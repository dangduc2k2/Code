#include<iostream>

using namespace std;

long factorial(int x)
{
	cout << "x= " << x << " at " << &x << endl;
	if (x == 1) return 1;
	return x * factorial(x - 1);
}

int main()
{
	cout << factorial(7);
	return 0;
}
