#include <iostream>
#include <cstring>

using namespace std;

class Publication{
protected:
    string author, title;
    int year;
public:
    Publication(string anAuthor, string aTitle, int aYear);
    void display();
};

class Book: public Publication{
private:
    string publisher;
public:
    Book(string author, string title, int year, string publish);
    void display();
};

Book::Book(string author, string title, int year, string publish):Publication(author, title, year), publisher(publish)
{}

void Book::display(){
    cout << "Author: " << author << endl << "Title: " << title << endl << "Year: " << year << endl << publisher << endl;
}

int main()
{
    Publication p1("Michael", "Book1", 2017);
    p1.display();
    Book b1("Michael", "Book2", 2017, "Publishing");
    b1.display();
}
