#include "playlist.h"
#include <iostream>

PlayList::PlayList(const string& username, int capacity): username(username), capacity(capacity) {
    songs = new const Song*[capacity];  // assuming a maximum of 100 songs
    for (int i = 0; i < capacity; i++) {
        songs[i] = nullptr;
    }
}

PlayList::PlayList(const string& username, const PlayList& playlist, int capacity) : username(username), capacity(capacity){
    // TODO 3: PlayList constructor.
    songs = new const Song*[capacity];
    for (int i = 0; i < capacity; i++) {
        songs[i] = playlist.songs[i];
    }
    if (capacity > playlist.capacity) {
        for (int i = playlist.capacity; i < capacity; i++) {
            songs[i] = nullptr;
        }
    }
}

PlayList::~PlayList() {
    // TODO 6: Build the destructors.
}

void PlayList::addSong(const Song* song) {
    // TODO 4: Add and Remove Songs of a Playlist.
    for (int i = 0; i < capacity; i++) {
        if (songs[i] == nullptr) {
            songs[i] = song;
            break;
        }
    }
}

void PlayList::removeSong(const string& name) {
    // TODO 4: Add and Remove Songs of a Playlist.
    for (int i = 0; i < capacity; i++) {
        if (songs[i]->getName() == name) {
            for (int j = i; j < capacity - 1; j++) {
                songs[j] = songs[j + 1];
                cout << "testing: " << songs[j]->getName() << endl;
            }

        }
        break;
    }
}

string PlayList::getUsername() const {
    return username;
}

void PlayList::display() const {
    cout << "========================================" << endl; 
    cout << "Playlist of " << username << endl;
    for (int i = 0; i < capacity; i++) {
        if (songs[i] != nullptr) {
            cout << i << ". " << songs[i]->getName() << " - " << songs[i]->getSinger()->getName() << endl;
        }
    }
    cout << "========================================" << endl;
}

