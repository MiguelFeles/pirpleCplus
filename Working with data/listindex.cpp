#include <listindex.h>

ListIndex::ListIndex() : Listbase("index.txt")
{
    //ctor
}

void ListIndex :: display(string message)
{
   system("clear");
    if(message != "") {
        cout << message << "\n" << endl;
    }
    cout << "Main Menu\n" << endl;
    cout << "c. Create a playlist" << endl;
    cout << "x. Exit the program" << endl;
    printList("Select Playlist #\n");
    cout << "\nYour choice: ";
}

ListIndex::~ListIndex()
{
    //dtor
}