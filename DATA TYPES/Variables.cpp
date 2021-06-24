#include <iostream>

using namespace std;

int main()
{
	const int MINUTES_PER_HOUR = 60;
	int numHours = 12;
	int minutes = 0;

	minutes = numHours * MINUTES_PER_HOUR;

	//MINUTES_PER_HOUR++;
	numHours++;



	cout << "there are " << minutes << " minutes in " << numHours << " hours" << endl;

	unsigned int zeroHour  = 0;
	zeroHour--;

	cout << "1 hour before zero hour is " << zeroHour << endl;


}