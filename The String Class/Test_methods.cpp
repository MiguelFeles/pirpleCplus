#include <iostream>
#include <string>
#include <cstddef>  
#include <vector>
using namespace std;

int main()
{
    //.substr()
    cout << "use .susbtr " << endl;
    string test1 = "example";
    string test_method1 = test1.substr(2,5);
    cout << "your word is  " << test_method1 << "\n\n" << endl;

    //.erase()
    cout << "use .erase " << endl;
    string test2 = "example";
    string test_mehod2 = test2.erase(1, 3);
    cout << "you word is " << test_mehod2 << "\n\n" << endl;

    //.length()
    cout << "use .lenght() " << endl;
    string test3 = "example";
    //string test_mehod3 = test3.length();
    cout << "you word is " << test3.length() << " characters or bytes\n\n" << endl;

    //::npos
    cout << "use ::npos and find " << endl;
    string test4 = "example";
    size_t found1 = test4.find("p");
    //string test_mehod2 = test2.erase(1, 3);
    cout << "you character is " << found1 << "\n\n" << endl;

    //found first of and last of

    // string::find_first_of
    cout << "\n\n\ncopy" <<endl;
     std::string str ("Please, replace the vowels in this sentence by asterisks.");  // Pl**s*, r*pl*c* th* v*w*ls *n th*s s*nt*nc* by *st*r*sks.
    std::size_t found = str.find_first_of("aeiou");
    while (found!=std::string::npos)
    {
    str[found]='*';
    found=str.find_first_of("aeiou",found+1);
     }
     std::cout << str << '\n';

     cout << "\n\n\ncopy" <<endl;

    //begin
    /*cout<<"begin"<<endl;

   vector<string> test5 = {"casa", "perro", "cara"};

    string i = *test5;

    cout <<"test" << *test5 <<endl;+/




}