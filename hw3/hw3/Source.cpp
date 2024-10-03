#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "請輸入一個數字：";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << a << " is even";
	}
	if (a % 2 != 0)
	{
		cout << a << " is odd";
	}
	return 0;
}