#ifndef FIND_H
#define FIND_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include "listbase.h"

using namespace std;

class Track
{
    public:
        Track();
        void setPlName(string test1);
        void setPlAndName(string test2, string test1);
        void displayMenu(string msg);
        Track(string tName, string plName);
        string getName();
        string getPlName();
        void setName(string s);

        virtual ~Track();
    protected:
    private:
        string playlistName;
        string trName;
};

#endif