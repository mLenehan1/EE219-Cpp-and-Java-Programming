#include <iostream>
#include <cstdlib>
#include <cstring>
#include <time.h>

using namespace std;

class GuessingGame
{
    private:
      int n;
      int counter;
    public:
        GuessingGame(int);
        bool guess();
        void display();
};

GuessingGame::GuessingGame(int N)
{
    srand(time(NULL));
    counter = N+1;
    N = rand() %N + 1;
    n=N;
}

void GuessingGame::display()
{
    cout << n;
}

bool GuessingGame::guess()
{
    int guess = -1;
    cout << "You have " << counter << " guesses" << endl;
    while((guess !=  n)&&(counter>0))
    {
    cin >> guess;
       if(n>guess)
       {
         cout << "Too Low" << endl;
         counter--;
         cout << "You have " << counter << " guesses remaining" << endl;
       }
    else if(n<guess)
    {
        cout << "Too High" << endl;
        counter--;
        cout << "You have " << counter << " guesses remaining" << endl;
    }
    else
    {
        cout << "Correct Answer" << endl;
        return true;
    }
    }
}
int main()
{
    int n, guessing;
    cout << "Choose the max number: " << endl;
    cin >> n;
    GuessingGame g1(n);
    cout << "Start Guessing" << endl;
    g1.guess();
}
