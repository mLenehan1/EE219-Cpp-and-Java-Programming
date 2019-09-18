#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

class Chatbot{

private:
    string name;

public:
    Chatbot(string);
    string respondTo(string);
    string getName(string);
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
int main()
{
    string name, in;
    Chatbot bot1("Bob");
    cout << "Enter Your Name: ";
    std::getline(std::cin, name);
    bot1.getName(name);
    cout << "Begin Conversing" << endl;
    while(in != "EXIT"){
        std::getline(std::cin, in);
        cout << bot1.respondTo(in) << endl;
    }
    return 0;
}
