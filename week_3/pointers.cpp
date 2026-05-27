#include <iostream>
using namespace std;
class Book {
    /**
     * instance attributes should be private
     * constructor should be public
     * functions should be public and private
     */

    private: // we want to encapsulate
        string book;
        string author;
    
    public:
        // constructor will recieve 2 parameters

        // can use the this-> pointer actually points
        // to the object go access the data member book
        // inside the memory that belongs to
        // this object myBook and assign
        // this parameter book_ inside this data member book
        // that belongs to the data member my book
        Book(string book_, string author_) {
        book = book_; //
        author = author_; // name of private encapsulated variable set equal to this specific book_
        }
        
        // put getters and setters in public
        // GETTERS DO NOT TAKE IN PARAMETERS RETURN DATA TYPE
        string getBookName(){ 
            // return this->book;
            return book; // gets value of book and returns it
        }

        string getAuthorName(){

            return author; // gets value of author and returns it
        }

        // SETTERS DO TAK IN PARAMETER OF THAT SPECIFIC ATTRIBUTE INSTANCE OF CLASS
        // SETTERS DO NOT RETURN ANYTHING
        

        // cascading function call
        Book getBookName2(){
            cout << this->book << endl;
            return *this; // the de-reference operator * to get the actual book object
        }

        Book getAuthorName2() {
            cout << this->author << endl;
            return *this;
        }

        void setBookName(string book_) {
            book = book_; // set new book name
        }

        void setAuthorName(string author_) {
            author = author_; // set new author name
        } 
};

int main() {
    Book myBook("The C++ Programming Language", "Bjarne Stroustrup");
    // point to an object pointer points to a certain address
    // can be used to access these functionalities of class Book

    // how to create a pointer that points to an object
    // i created in order to use the functions wth this function must use ->
    Book* ptr = &myBook; // instead of dot notation you use ->
    cout << ptr->getBookName() << endl;
    cout << ptr->getAuthorName() << endl;
    ptr->setBookName("INTRO TO HTML & CSS");
    ptr->setAuthorName("Udemy");
    cout << ptr->getBookName() << endl;
    cout << ptr->getAuthorName() << endl;

    cout << endl << endl;
    Book myBook2("A Pale Blue Dot", "Carl Sagan");
    myBook2.getBookName2().getAuthorName2(); // returning an object which is mybook2 and then returns myBook2.getAuthorName();
    return 0; 
}