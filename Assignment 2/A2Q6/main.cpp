#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

string chatBot(){
    int j;
    string ex = "Bye", res[] = {"That's interesting, tell me more", "Why do you think that is?", "Who are you?", "Why are you annoying me?"}, in;
    cout << "Hello. How are you today?" << endl;
    while(in != "Bye"){
        std::getline(std::cin, in);
        int i = rand() % 4;
        while(i==j){
            i = rand() % 4;
        }
        j=i;
        cout << res[i] << endl;
    }
    return "Conversation over";
}
int main()
{
    cout << chatBot();
    return 0;
}
