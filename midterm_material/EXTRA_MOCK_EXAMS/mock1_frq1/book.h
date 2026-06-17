/**
 *  class · constructors · getters · methods
FRQ 1 — Book
Define a class Book that represents a book in a library system. You write everything from scratch — there is no freeze code.

Attributes (private)
std::string title;    // title of the book
std::string author;   // author's full name
std::string genre;    // genre (e.g. "Fiction")
int pages;            // number of pages
Methods to implement
1.
A default constructor. Defaults: title = "Unknown", author = "Anonymous", genre = "General", pages = 0.
2.
A parameterized constructor taking (string title_, string author_, string genre_, int pages_) in that order.
3.
A method
addChapter(int numPages)
that increases
pages
by
numPages
and returns nothing.
4.
A method
changeGenre(std::string newGenre)
that updates
genre
and returns nothing.
5.
A method
Display()
that prints each attribute in order. Example output:

Title: Unknown
Author: Anonymous
Genre: General
Pages: 0
6.
Four getters:
getTitle()
,
getAuthor()
,
getGenre()
,
getPages()
— each returns the type of its attribute.
 */
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
        string title;
        string author;
        string genre;
        int pages;
    public:
    Book();
    Book(string title_, string author_, string genre_, int pages_);

    string getTitle();
    string getAuthor();
    string getGenre();
    int getPages();

    void addChapter(int numPages);
    void changeGenre(string newGenre);
    void Display();

    Book(){
        title = "Unknown";
        author = "Anonymous";
        genre = "General";
        pages = 0;
    }

    Book(string title_, string author_, string genre_, int pages_){
        title = title_;
        author = author_;
        genre = genre_;
        pages = pages_;
    }

    string getTitle(){
        return title;
    }

    string getAuthor(){
        return author;
    }

    string getGenre(){
        return genre;
    }

    int getPages(){
        return pages;
    }

    void addChapter(int numPages){
        pages += numPages;
    }

    void changeGenre(string newGenre){
        genre = newGenre;
    }

    void Display(){
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Genre: " << getGenre() << endl;
        cout << "Pages: " << getPages() << endl;
    }
};

#endif