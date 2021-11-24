#include <iostream>

// Program to check that the character that the user have entered is 
// uppercase or lowercase

using namespace std;

int main () {
    char character;
    cout << "Enter a single character: ";
    cin >> character;
    if (character >= 'a' && character <= 'z') {
        cout << "It is a lowercase letter.\n";
    }
    else if(character >= 'A' && character <= 'Z') {
        cout << "It is a uppercase letter.\n";
    }
    else {
        cout << "Invalid character!\n";
    }
}
