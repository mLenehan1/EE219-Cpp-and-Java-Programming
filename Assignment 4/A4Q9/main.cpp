#include <iostream>

using namespace std;

class Counter
{
protected:
    static int count;
    int test, counter;
private:
    void construct();
public:
    Counter(int);
    ~Counter();
    void display();
};

int Counter::count = 0;

void Counter::construct()
{
    counter = count++;
}
Counter::Counter(int t)
{
    t = test;
    construct();
}

Counter::~Counter()
{
    cout << "Object Deleted" << endl;
}

void Counter::display()
{
    cout << counter+1 << endl;
}

int main()
{
    Counter c1(1);
    c1.display();
    Counter c2(1);
    c2.display();
    Counter c3(1);
    c3.display();
}
