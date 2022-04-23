// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if',
// return the string unchanged

#include <iostream>

using namespace std;

string check(string s) {
    if (s.substr(0, 2) == "if") {
        return s;
    } else {
        return "if " + s;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << check(s) << endl;
}