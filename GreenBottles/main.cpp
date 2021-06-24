#include <iostream>


using namespace std;

int main()
{
    int Greenbottles = 10;
#ifdef Greenbottle
    Greenbottles--;
#endif // Greenbottle

    cout << "there were "<< Greenbottles <<" Green bottles"<< endl;
    return 0;
}
