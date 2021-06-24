#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int rotateLeft (int value, int amount)
{
    //four bit rotate left

    const int OVERFLOW = 0b10000;
        while (amount > 0)
        {
            value = value << 1;
            if (((value & OVERFLOW) == OVERFLOW))
            {
           value = value & 0b1111;  //remove overflow bit
                value = value | 0b0001;  //set the rightmost bit
    }
    amount--;
    }
    return value;
}

int main()
{
    int rotation = 0;

    int inValvesOpen  = 0b0010;
    int outValvesOpen = 0b0100;
    int pistonUp      = 0b1010;
    int cylinderFire = 0b1000;

    for (int i = 0; i < 4 ; i++)
    {   
        string d1 = "    1        2        3        4    ";
        string d2 = "   ___      ___      ___      ___   ";
        string d3 = " x|   |x  x|   |x  x|   |x  x|   |x ";
        string d4 = "  |   |    |   |    |   |    |   |  ";
        string d5 = "   ---      ---      ---      ---   ";
        string d6 = "    ?        ?        ?        ?    ";

        for (int c = 0; c<4; c++)
        {
            int offset = (9*c);

            char stateLabel = 'C'; //upper case C (Compression)';
            char inValve = 'x';    //lower case x';
            char outValve ='x' ;   //lower case x';
            char upPiston = ' ';   //space
            char downPiston = 'T';  //Upper case T
            char chamber = ' ';    //space

            int positionMask = 0b1000 >> c;//cylinder 1

            if((inValvesOpen & positionMask) == positionMask) 
            {
                inValve = 'o';
                stateLabel = 'I';
            }
            if((pistonUp & positionMask) == positionMask)
            {
                upPiston = 'T';
                downPiston = ' '; 
            }
            if((cylinderFire & positionMask) == positionMask)
            {
                    chamber = '*';
                    stateLabel = 'P';
            }
            if((outValvesOpen & positionMask) == positionMask) {
                outValve = 'o';
                stateLabel = 'E';
            }

            d3.at(1 + offset) = inValve;
            d3.at(3  + offset) = chamber;
            d3.at(4  + offset) = upPiston;
            d3.at(5  + offset) = chamber;
            d3.at(7  + offset) = outValve;
            d4.at(4  + offset) = downPiston;
            d6.at(4  + offset) = stateLabel;

        
         }

        cout << d1 << endl;
        cout << d2 << endl;
        cout << d3 << endl;
        cout << d4 << endl;
        cout << d5 << endl;
        cout << d6 << endl;
        cout << endl;
        cout << endl;


        if((cylinderFire & 0b0010) ==  cylinderFire)
        {
            rotation = 1;
        }
        else if((cylinderFire & 0b0001) ==  cylinderFire)
        {
            rotation = 3;
        }
        else
        {
            rotation = 2;
        }


        inValvesOpen = rotateLeft(inValvesOpen, rotation);
        outValvesOpen = rotateLeft(outValvesOpen, rotation);
        pistonUp = rotateLeft(pistonUp, rotation);
        cylinderFire = rotateLeft(cylinderFire, rotation);
    }
}    
