#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "What is your name: ";
    getline(cin, name);
    cout << "Hello " << name << ". How are you?" << endl;
    string condition;
    getline(cin, condition);
    cout << "What is you favourite football team: ";
    string footballTeam;
    getline(cin, footballTeam);
    cout << "Oh that's great. You support " << footballTeam << ". I support Real Madrid" << endl;

    return 0;
}
