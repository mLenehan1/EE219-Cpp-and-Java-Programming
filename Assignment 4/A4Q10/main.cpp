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
    static int get();
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

int Counter::get()
{
    return count;
}

int main()
{
    Counter counts[3] = {Counter(1), Counter(2), Counter(3)};
    Counter *p = &counts[0];
    cout << p->get() << endl;
}
