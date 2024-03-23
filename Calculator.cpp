#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char x;
	cout << "Enter First Number : ";
	cin >> a;
	cout << "Enter Second Number : ";
	cin >> b;
	cout << "Choose Your Operation (+,-,*,/) : ";
	cin >> x;
	switch (x)
	{
	case('+'):
	{
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	}
	case('-'):
	{
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	}
	case('*'):
	{
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	}
	case('/'):
	{
		cout << a << " / " << b << " = " << a / b << endl;
		break;
	}
	default:
	{
		cout << "Wrong Operator" << endl;
	}
	}
	return 0;
}