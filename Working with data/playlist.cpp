  
#include "Playlist.h"

Playlist::Playlist() : Listbase("")
{
    //constructor
}

Playlist::Playlist(string name) : Listbase(name)
{
    //contructor
}

void Playlist::displayMenu(string message)
{
    system("clear");
    if(message != "")
    {
        cout << message << "\n" << endl;
    }
    cout << "Playlist '" << this->getName() << "' Menu\n" << endl;
    cout << "a. Add track(s) to the playlist." << endl;
    cout << "d. Delete this playlist." << endl;
    cout << "x. Exit to main menu" << endl;
    printList("Select Track #\n");
    cout << "\nYour choice: ";
}

Playlist::~Playlist()
{
    //destrucctor
}