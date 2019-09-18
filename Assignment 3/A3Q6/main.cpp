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

class JournalArticle: public Publication{
private:
    string journalName;
    int issueNumber;
public:
    JournalArticle(string author, string title, int year, string jName, int iNum);
    void display();
};
Publication::Publication(string anAuthor, string aTitle, int aYear){
    author = anAuthor;
    title = aTitle;
    year = aYear;
}

void Publication::display(){
    cout << "Author: " << author << endl << "Title: " << title << endl << "Year: " << year << endl;
}

Book::Book(string author, string title, int year, string publish):Publication(author, title, year), publisher(publish)
{}

void Book::display(){
    cout << "Author: " << author << endl << "Title: " << title << endl << "Year: " << year << endl << publisher << endl;
}

JournalArticle::JournalArticle(string author, string title, int year, string jName, int iNum):Publication(author, title, year), journalName(jName), issueNumber(iNum)
{}

void JournalArticle::display(){
        cout << "Author: " << author << endl << "Title: " << title << endl << "Year: " << year << endl << journalName << endl << issueNumber << endl;
}

int main()
{
    Publication p1("Michael", "Book1", 2017);
    p1.display();
    Book b1("Michael", "Book2", 2017, "Publishing");
    b1.display();
    JournalArticle j1("Michael", "Article1", 2017, "EngJournal", 1541);
    j1.display();
}
