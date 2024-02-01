#include<iostream>
using namespace std;

int main()
{
	float b,h,area,half = 0.5;
	
	cout << "Enter The Base : ";
	cin >> b;
	cout << "Enter The Height : ";
	cin >> h;
	
	area = half*b*h;
	
	cout << "Area Of Triangle Is : " << area; 
	
	return 0;
}
