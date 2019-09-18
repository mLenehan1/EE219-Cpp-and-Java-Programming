#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

string frequentWord(string textSample)
{
    istringstream iss(textSample);
    string returnWord, currentWord, compareWord;
    int match = 0, mostFreq = 0;
    while(iss>>currentWord)
    {
        istringstream iss(textSample);
        while(iss>>compareWord)
            {
            if(currentWord==compareWord)
            {
                match++;
            }
            if(match>mostFreq)
            {
                match = mostFreq;
                returnWord = currentWord;
            }
            }
            match = 0;

    }

    return returnWord;
}

int main()
{
    string n;
    cin >> n;
    cout << frequentWord(n);
}
