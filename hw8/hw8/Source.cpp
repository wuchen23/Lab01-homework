#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int weight, BMI=0 ;
	float height;
	cout << "weight(kg)¡G";
	cin >> weight;
	cout << "height(m)¡G";
	cin >> height;
	BMI = weight/height/height;
	cout << "BMI="<<BMI << endl;
	if (BMI >= 30)
	{
		cout << "Obese";
	}
	if (BMI>25&&BMI<29.9)
	{
		cout << "Overweight";
	}
	if (BMI > 18.5 && BMI < 24.9)
	{
		cout << "Normal";
	}
	if (BMI <= 18.5)
	{
		cout << "Underweight";
	}
}