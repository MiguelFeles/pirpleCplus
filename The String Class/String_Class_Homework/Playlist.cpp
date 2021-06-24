#include <iostream>
#include <string>

using namespace std;


string trim(string anystring)
{
    string retVal = anystring;
    int lastPos = retVal.length()-1;

    bool found = true;

    while(found == true && lastPos >= 0)
    {
        if(retVal.substr(lastPos, 1) == " ")
        {
            retVal = retVal.erase(lastPos, 1);
        }
        else if(retVal.substr(0, 1) == " ")
        {
            retVal = retVal.erase(0, 1);
        }
        else
        {
            found = false;
        }
        
        lastPos = retVal.length()-1;
    }
    return retVal;
}

int main()
{
    string fullname;
    string tittle;
    string artist;
    string by = "by";
    while(true)
    {



    cout<< "enter a track or Q to quit" << endl;
    getline(cin, fullname);
    cout << trim(fullname) << endl;

    if (fullname == "q")break;
    if(fullname.length() < 5){cout << "please enter a track with more than five characters. \n" <<endl;}

    if(fullname.find(":") != string::npos)
    {tittle = fullname.substr(fullname.find(":")+1, fullname.find_last_of(fullname)); cout << "TITTLE: " << tittle <<endl;}
    if(fullname.find(":") != string::npos)
    {tittle = fullname.substr(0, fullname.find(":")); cout << "ARTIST: " << tittle <<endl;}

    if(fullname.find("-") != string::npos)
    {tittle = fullname.substr(0, fullname.find("-")); cout << "TITTLE: " << tittle <<endl;}
    if(fullname.find("-") != string::npos )
    {tittle = fullname.substr(fullname.find("-")+1, fullname.find_last_of(fullname)); cout << "ARTIST: " << tittle <<endl;}

    if(fullname.find("by") != string::npos)
    {
        tittle = fullname.substr(fullname.find("by")+3, fullname.find_last_of(fullname)); 
        cout << "TITTLE: " << tittle <<endl;
        //cout <<"encontrado"<<endl;
    }
    if(fullname.find("by") != string::npos)
    {
        tittle = fullname.substr(0, fullname.find("by")); cout << "ARTIST: " << tittle <<endl;
        //cout << "encontrado 2" << endl;
    }

 


    


    }


    return 0;
}