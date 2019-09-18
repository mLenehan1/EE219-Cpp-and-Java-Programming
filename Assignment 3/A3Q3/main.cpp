#include <iostream>
#include <cstring>

using namespace std;

class Publication{
private:
    string author, title, year;
public:
    Publication(string, string, string);
    void display();
};

Publication::Publication(string anAuthor, string aTitle, string aYear){
    author = anAuthor;
    title = aTitle;
    year = aYear;
}

void Publication::display(){
    cout << "Author: " << author << endl << "Title: " << title << endl << "Year: " << year << endl;
}

int main()
{
    Publication b1("Michael", "Book1", "2017");
    b1.display();
}
