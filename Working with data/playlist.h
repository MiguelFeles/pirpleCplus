#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Listbase.h"


class Playlist : public Listbase
{
    public:
        Playlist();
        Playlist(string name_new);
        void displayMenu(string _message);
        void displayTrackMenu(string _message, string r_name);
        virtual ~Playlist();
    protected:
    private:
};

#endif // PLAYLIST_H