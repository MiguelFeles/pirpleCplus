#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	float number = 3.9999;
	float pi = 3.141516;

	cout << setiosflags(ios::fixed);

	cout  <<setprecision(2)<< number <<"     " <<  pi << endl;




	
	return 0;
}