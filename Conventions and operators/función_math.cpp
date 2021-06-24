#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float power_number, root, dividend, divisor = 0;

    cout << "Enter a value for a " << endl;
    cin >> power_number;
    cout << "Enter a value for b " << endl;
    cin >> root;
    cout << "Enter a value for dividend and divisor "  << endl;
    cin >> dividend;
    cin >> divisor;

    cout << "pow is " << pow(power_number, 2) << endl; //pow(base, exponent) that is the form of a power
   
    cout << "square root is " <<sqrt(root) << endl; // sqrt(root) this form is for quadratic root
    cout << "division is " << (dividend / divisor) << endl; // a/b 

    return 0;
}