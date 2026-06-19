#include <iostream>
#include <string>
using namespace std;

class Playlist{
    private:
        string* tracks;
        int size;
    public:
        Playlist(){
            size = 0;
            tracks = new string[1];
            tracks[0] = "";
        }

        // parametrized constructor
        Playlist(int sz, const string* arr){
            size = sz;
            tracks = new string[size];
            for(int i = 0; i < size; i++){
                tracks[i] = arr[i];
            }
        }

        ~Playlist(){
            delete[] tracks;
        }

        // copy constructor
        Playlist(const Playlist& other){
            size = other.size;
            tracks = new string[size];
            for(int i = 0; i < size; i++){
                tracks[i] = other.tracks[i];
            }
        }

        // copy assignment operator
        Playlist& operator=(const Playlist& other){
            if(this == &other){
                return *this;
            }
            delete[] tracks;
            size = other.size;
            tracks = new string[size];
            for(int i = 0; i < size; i++){
                tracks[i] = other.tracks[i];
            }
            return *this;
        }

        Playlist operator+(const Playlist& other){
            Playlist combined; // CALLS DEFAULT CONSTRUCTO WE DONT WANT THAT
            delete[] combined.tracks; // CLEANS IT
            combined.size = this->size + other.size;
            combined.tracks = new string[combined.size];
            for(int i = 0; i < this->size; i++){
                combined.tracks[i] = this->tracks[i];
            }
            for(int j = 0; j < other.size; j++){
                combined.tracks[this->size + j] = other.tracks[j];
            }
            return combined;
        }
        
};