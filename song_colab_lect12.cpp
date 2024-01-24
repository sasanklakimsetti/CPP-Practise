#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MusicLibrary {
private:
    struct Song {
        string songName;
        string artist;
    };

    vector<Song> library;

public:
    // Member function to add a song to the library
    void addSong(string songName, string artist) {
        Song song;
        song.songName = songName;
        song.artist = artist;
        library.push_back(song);
    }

    // Member function to display songs sorted by artist name
    void displaySortedByArtist() {
        // Sort the library vector based on artist names
        sort(library.begin(), library.end(), [](const Song& a, const Song& b) {
            return a.artist < b.artist;
        });

        // Display the sorted songs
        for (const Song& song : library) {
            cout << song.songName << "-" << song.artist << endl;
        }
    }
};

int main() {
    int N;
    cin >> N;

    MusicLibrary library;

    // Input songs and artists
    cin.ignore(); // Clear the newline character from the previous input
    for (int i = 0; i < N; i++) {
        string songName, artist;
        getline(cin, songName);
        getline(cin, artist);
        library.addSong(songName, artist);
    }

    // Display songs sorted by artist name
    library.displaySortedByArtist();

    return 0;
}
