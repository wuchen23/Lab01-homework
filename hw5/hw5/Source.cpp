#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "請輸入兩個數：";
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << a << " is a multiple of the " << b<<endl;
	}
	else
	{
		cout << a << " is not a multiple of the " << b<< endl;
	}
	if (b% a  == 0)
	{
		cout << b << " is a multiple of the " << a << endl;
	}
	else
	{
		cout << b << " is not a multiple of the " << a << endl;
	}
	return 0;
}