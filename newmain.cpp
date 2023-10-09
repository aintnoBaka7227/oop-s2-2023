#include "demostl.h"
#include <iostream>
#include <vector>
#include <map>


typedef std::vector<Song*> Song_ptr;

int main() {

    // STL: vector

    std::vector<Song> songs;
    Song forever(1, "Forever");
    Song tremor(2, "Tremor");
    songs.push_back(forever);
    songs.push_back(tremor);
    std::cout << songs.size() << std::endl;
    for (int i = 0; i < songs.size(); i++) {
        songs[i].print();
    }

    songs.erase(songs.begin() + 1);

    for (Song& song : songs) {
        song.print();
    }

    songs.clear();

    Song_ptr ptr_newSong;
    ptr_newSong.push_back(&forever);
    ptr_newSong[0]->print();
    ptr_newSong.clear();


    // STL: map
    std::map<std::string, int> non;
    std::pair<std::string, int> e1 = {"ngu", 0};
    std::pair<std::string, int> e2 = {"non", 1};
    non.insert(e1);
    non.insert(e2);
    struct Human {
        std::string characteristic;
        int braincell;
    };
    Human human;
    human.braincell = non["ngu"];
    std::cout << human.braincell << std::endl;
    return 0;
}