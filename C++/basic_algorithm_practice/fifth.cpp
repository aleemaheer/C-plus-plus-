// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if',
// return the string unchanged

#include <iostream>

using namespace std;

string check(string s) {
    if (s.length() > 2 && s.substr(0, 2) == "if") {
        return s;
    } else {
        return "if " + s;
    }
}

int main() {
    string s, answer;
    cout << "Enter a string: ";
    cin >> s;
    answer = check(s);
    cout << answer << endl; 
    //cout << "New" << check("if else");
    // There's a problem in taking input from the user
    // I'll fix it later
}