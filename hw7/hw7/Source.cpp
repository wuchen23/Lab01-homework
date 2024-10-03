#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout << "number	square	cube" << endl;
	for (i = 0; i <= 10; i++)
	{
		cout << i<<'\t'<<i*i<<'\t'<<i*i*i<<endl;
	}
	return 0;
}