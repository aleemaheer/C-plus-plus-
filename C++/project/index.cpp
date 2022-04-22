#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int first_decision;
    cout << "Welcome to this Phonebook\n";
    sleep(3);
    cout << "Press 1 to Login\nPress 2 to SignUp\n";
    cin >> first_decision;
}