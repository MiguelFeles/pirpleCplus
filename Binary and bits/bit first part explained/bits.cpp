#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int bitsToInt(char bitList[], int bitCount)
{
    int resultOfReturn = 0;
    int placeValue = pow(2, bitCount - 1); //-1 we want until7
    char bit = '0';



    
    for(int bitNum = 0; bitNum < bitCount; bitNum++) // this will take the 8 bots of bit count
    {

        bit = bitList[bitNum];
        resultOfReturn += (bit == '1') ? placeValue: 0;// if is true add place value isnt add 0 
        cout << "resultOfReturn" << resultOfReturn << endl;
        placeValue *= 0.5;
        cout << "place value " << placeValue << endl;
    }


    return resultOfReturn;
}
int main()
{

    char myBitList2[] = "11111111"; // we need to walk way trogh these and asigned a value 

    int result = bitsToInt(myBitList2, 8); // number of bits is eight pow 2 a la 7

    cout << "result is " << result << endl;
}


