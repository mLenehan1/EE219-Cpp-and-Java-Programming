#include <iostream>

using namespace std;

class Phone{
private:
    string brand, model, state;
    int year;
public:
    Phone(string manu, string mod, string sta, int yea);
    string tempFix(Phone p);
    void stateInfo();
    string permaFix(Phone &p);
    virtual ~Phone();
};

    Phone::Phone(string manu, string mod, string sta, int yea)
    {
        brand = manu;
        model = mod;
        state = sta;
        year = yea;
        cout << "Object Created" << endl;
    }

void    Phone::stateInfo()
{
    cout << state << endl;
}

string Phone::tempFix(Phone p)
{
    if(p.state == "Broken")
    {
        p.state = "Fixed";
    }
    return p.state;
}

string Phone::permaFix(Phone &p)
{
    if(p.state == "Broken")
    {
        p.state = "Fixed";
    }
    return p.state;
}

    Phone::~Phone()
    {
        cout << "Object " << brand << " Deleted" << endl;
    }


int main()
{
    Phone p1("Samsung", "S7", "Broken", 2017);
    Phone p2("OnePlus", "Three", "Broken", 2017);
    cout << "Phone State = " << p1.tempFix(p1) << endl;
    p1.stateInfo();
    cout << "Phone State = " << p2.permaFix(p1) << endl;
    p2.stateInfo();
}
