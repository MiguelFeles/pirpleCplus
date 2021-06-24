#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <bitset>
#include <string>

using namespace std;

int bitsToInt(char bitList[], int bitCount, bool twosComplement) //twoscomplement is use to representate negative bits
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
    if (twosComplement == true && bitList[0] == '1')
        {
            placeValue = pow(2, bitCount); // next posision over will be 8 cause up we rested it
            cout << "place value negative " << placeValue << " here"<< endl;
            resultOfReturn -= placeValue;
            cout << "resultOfReturn negative " << resultOfReturn << " here" << endl;
            cout << "place value negative " << placeValue << " two here"<< endl;
        }
    return resultOfReturn;
}

void showBits(int value, int bitCount) // show string bits as an int
{
    int placeValue = pow(2, bitCount - 1);

    for(int bitNum = 0; bitNum < bitCount; bitNum++)
    {
        char bit = '0';
        if(value>=placeValue)
        {
            bit = '1';
            value -= placeValue;
        }
        cout <<bit;
        placeValue *= 0.5;
    }
}
int main()
{

    char myBitList2[] = "00000111"; // we need to walk way trogh these and asigned a value 

    int result = bitsToInt(myBitList2, 8, true); // number of bits is eight pow 2 a la 7

    cout << "result is " << result << endl;




    int myValue = 15;
    cout << myValue << " in binary is ";
    showBits(myValue, 8);
    cout<<endl;

    bitset<8> myBitSet (std :: string("01111111"));
    cout << "my bit set is " << myBitSet.to_string() << "has a decimal value of " << myBitSet.to_ulong()<< endl;

    bitset<8> myBitSet2 (15);
    cout << "the number " << myBitSet2.to_ulong() << " has a decimal value of " << myBitSet2.to_string()<< endl;
}