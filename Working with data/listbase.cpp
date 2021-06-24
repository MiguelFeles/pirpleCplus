#include "listbase.h"

    Listbase :: Listbase(string _name)
    {
        this->name = _name;
        ofstream myfile;
        string fName = (_name == "index.txt") ? _name : _name + ".playlist";
        myfile.open(fName.c_str());
        myfile.close();
    }

string Listbase::getName()
{
    return this->name;
}

void Listbase::nameFor(string _name)
{
    this->name = _name;
}

void Listbase::addItem(string wha)
{
    this->items.push_back(wha);
    saveToFile();

}

void Listbase::deleteItem(string item)
{
    vector<string>::iterator itName = items.begin();
    while(itName != items.end())
    {
        if(*itName == item)
        {
            items.erase(itName);
            remove((item+".playlist").c_str());
            saveToFile();
            break;
        }
        itName++;
    }
}

bool Listbase::exists(string item)
{
    vector<string>::iterator name_t = items.begin();
    while(name_t != items.end())
    {
        if(*name_t == item)
        {
            return true;
        }
        name_t++;
    }
    return false;
}

int Listbase::numOfItems()
{
    return this->items.size();
}

void Listbase::saveToFile()
{
    ofstream myfile;
    string fName = (this->name == "index.txt") ? this->name : this->name + ".playlist";
    myfile.open(fName.c_str());
    if(!items.empty())
    {
        sort(items.begin(), items.end());
        int index = 1;
        vector<string>::iterator itName = items.begin();
        while(itName != items.end())
        {
            myfile << index << " - " << *itName << endl;
            itName++;
            index++;
        }
    }
    myfile.close();
}

void Listbase::printList(string message)
{
    if(!items.empty())
    {
        sort(items.begin(), items.end());
        int index = 1;
        vector<string>::iterator itName = items.begin();
        cout << "\n" << message << endl;
        while(itName != items.end())
        {
            cout << index << " - " << *itName << endl;
            itName++;
            index++;
        }
    }
}

Listbase::~Listbase()
{
    //dtor
}