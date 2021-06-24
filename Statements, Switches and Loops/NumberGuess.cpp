#include <iostream>

using namespace std;

int main()
{
    int highest = 100;
    int lowest = 0;
    int attempts = 0;
    char letter = 0;
 
    cout << "think of a number between 1 and 100" << endl;



    while(letter != 'y')
    {
        attempts ++;
        int guess = lowest + ((highest - lowest) * 0.5);

        cout << "I guess " << guess << ". Am I right?" << endl;
        cout <<"'q' to quit, 'y' if correct, 'h' if too high, 'l' if too low."<<endl;

        cin >> letter;

        if (letter == 'y')
        cout << "I guessed it in " << attempts << " attempts ";
        else if (letter == 'h')
        highest = guess;
        else if (letter == 'l')
        lowest = guess;
        else if (letter == 'q'){
        cout << "you quit bye" << endl;
        break;}
        else
        cout << "i didn't understand that response" << endl;
    }



    return attempts;
}