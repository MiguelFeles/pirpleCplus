#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
	float price1 = 0;
	float price2 = 0;
	float price3 = 0;
	float variable = 0;

	cout << "enter a price \n  ", 
	cin >> price1;
	cout << "enter a price \n  ", 
	cin >> price2;
	cout << "enter a price \n  ", 
	cin >> price3;


	cout << setiosflags(ios::fixed) << "\n";
	cout << setprecision(2) << "price 1 is " << price1 << endl;
						cout << "price 2 is " << price2 << endl;
						cout << "price 3 is " << price3 << endl;
	cout << "total price is " << price1 + price2 + price3 << endl; 


	cout << price1 << "\n";
	cout << price2 << "\n";
	cout << price3 << "\n" << endl;		


	

	return 0;
}