#include<stdio.h>
#include<iostream>
using namespace std;
int main() 
{
	int a, b, c;
	cout << "請輸入三個數字：";
	cin >> a >> b >> c;
	if (a>b&&a>c)
	{
		cout << a << " is the largest" << endl;
	}
	if (b > a && b > c)
	{
		cout << b << " is the largest" << endl;
	}
	if (c > b && c > a)
	{
		cout << c << " is the largest" << endl;
	}
	if (a < b && a < c)
	{
		cout << a << " is the smallest" << endl;
	}
	if (b < a && b < c)
	{
		cout << b << " is the smallest" << endl;
	}
	if (c < b && c < a)
	{
		cout << c << " is the smallest" << endl;
	}
	return 0;
}