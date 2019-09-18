#include <iostream>
#include <cstring>
//#include <string>
#include <cstdlib>

using namespace std;

class Chatbot{

private:
    string name;

public:
    Chatbot(string);
    string respondTo(string);
    string getName(string);
    string botName();
};

Chatbot::Chatbot(string n){
    name = n;
    cout << n << endl;
}

string Chatbot::respondTo(string s){
    int i, j;
    string restoq[] = {"That's interesting, tell me more", "Why do you think that is?", "Just go away", "I'm not inerested in talking about this topic", "You must be really smart"}, restos[] = { "Who are you?",  "Why are you annoying me?", "Can we talk about something else?" , "What do you want?", "What type of music do you like?"}, q = "?";
    std::size_t found = s.find(q);
    if(found == std::string::npos){
        i = rand() % 5;
        while(i==j){
            i = rand() % 5;
        }
        j=i;
        return restos[i];
    }
    else{
        i = rand() % 5;
        while(i==j){
            i = rand() % 5;
        }
        j=i;
        return restoq[i];
    }
}

string Chatbot::getName(string u){
    cout << "Hello " << u << endl;
    return u;
}

string Chatbot::botName(){
    return name;
}

int main()
{
    int i = 0;
    string name, in1, in2, start = "Begin conversing";
    Chatbot bot1("Bob"), bot2("Bill");
    cout << "Enter Your Name: " << endl;
    cout << bot1.botName() << ":    " << bot1.botName() << endl;
    cout << start << endl;
    start = in1;
    while(i<10){
        in2 = bot2.respondTo(in1);
        cout << bot2.botName() << ": " << bot2.respondTo(in2) << endl;
        in1 = bot1.respondTo(in2);
        cout << bot1.botName() << ": " << bot1.respondTo(in1) << endl;
        i++;
    }
    return 0;
}
