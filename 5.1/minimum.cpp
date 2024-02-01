#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter A Number : ";
	cin >> a;
	cout << "Enter B Number : ";
	cin >> b;
	
	if(a<b)
	{
		cout << "B Number Is Big !!" << endl << b;
	}
	else
	{
		cout << "A Number Is Big !!" << endl << a;
	}
	return 0;
	
}
