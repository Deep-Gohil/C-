#include<iostream>
using namespace std;

int main()
{
	
	int n;
	
	cout << "Enter Any Number : ";
	cin >> n;
	
	if(n>0)
	{
		cout << "The Number Is Positive !!";
	}
	else if(n==0)
	{
		cout << "The Number Is Neutral !!";
	}
	else
	{
		cout << "The Number Is Nagative !!";
	}
	
	return 0;
}
