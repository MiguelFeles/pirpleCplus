#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c = 0; 
    float x1, x2 = 0;

    cout << "Enter a value for a " << endl;
    cin >> a;
    cout << "Enter a value for b " << endl;
    cin >> b;
    cout << "Enter a value for c " << endl;
    cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/ (2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/ (2*a);
    cout << "te first value of x is " <<  x1 << endl;
    cout << "the second value of x is " <<  x2 << endl;
    

    return 0; 

}