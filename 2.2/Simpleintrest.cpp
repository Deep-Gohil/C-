#include<iostream>
using namespace std;

int main(){
	
	float p,r,n,area;
	cout << "Enter The Principal : ";
	cin >> p;
	cout << "Enter The Rate Of Intrest : ";
	cin >> r;
	cout << "Enter The Time : ";
	cin >> n;
	
	area = (p*r*n)/100;
	cout << "Simple Intrest Is : " << area;
	return 0;
}
