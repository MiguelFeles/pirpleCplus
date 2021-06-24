#ifndef LISTBASE_H  //ifndef begin
#define LISTBASE_H

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Listbase
{
    public:
        Listbase(string name);
        string getName();
        void nameFor(string _name);
        bool exists(string wha);
        void addItem(string wha);
        void deleteItem(string wha);
        int numOfItems();



    protected:
        void saveToFile();
        void printList(string msg);
    private: 
        string name;
        vector<string> items;
};
#endif // endif begin