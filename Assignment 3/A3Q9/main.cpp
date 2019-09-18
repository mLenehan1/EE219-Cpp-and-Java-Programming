#include <iostream>
#include <cstring>

using namespace std;

class Publication{
protected:
    string author, title;
    int year;
public:
    Publication(string anAuthor, string aTitle, int aYear);
    virtual~Publication();
    void display();
};

class Book: public Publication{
private:
    string publisher;
public:
    Book(string author, string title, int year, string publish);
    virtual~Book();
    void display();
};

class JournalArticle: public Publication{
private:
    string journalName;
    int issueNumber;
public:
    JournalArticle(string author, string title, int year, string jName, int iNum);
    virtual~JournalArticle();
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

void printPublicationList(Publication* pubs[], int length){
    for(int i = 0; i<length ; i++){
        pubs[i]->display();
        cout << endl;
    }
}

Publication::~Publication(){
    cout << "Publication is being destroyed: " << author << " " << title << " " << year << endl;
}

Book::~Book(){
    cout << "Book is being destroyed: " << author << " " << title << " " << year << " " << publisher << endl;
}

JournalArticle::~JournalArticle(){
    cout << "Journal Article is being destroyed: " << author << " " << title << " " << year << " " << journalName << " " << issueNumber << endl;
}

int main()
{
    Publication p1("Michael", "Book1", 2017);
    p1.display();
    Book b1("Michael", "Book2", 2017, "Publishing");
    b1.display();
    JournalArticle j1("Michael", "Article1", 2017, "EngJournal", 1541);
    j1.display();
    Publication* pubSet[3];
    pubSet[0] = new Publication("Isaac Newton", "Principia", 1686);
    pubSet[1] = new Book("Bjarne Stroustrup", "The C++ Programming Language", 2013, "Addison-Wesley");
    pubSet[2] = new JournalArticle("Donald E. Knuth", "Optimum Binary Search Trees", 1971, "Acta Informatica", 1);
    printPublicationList(pubSet, 3);
}
