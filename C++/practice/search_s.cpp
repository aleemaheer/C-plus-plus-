/// Searching strings from an array

#include <iostream>
#include <string>

using namespace std;

int main() {
    char *color[5] = { "one", "two", "three", "four", "five" };
    for (int i = 0; i < 4; i++) {
        cout << color[i] << endl;
    }

    // Searching
    string s;
    cout << "Enter string to search: ";
    getline(cin, s);
    for (int i = 0; i <= 4; i++) {
        if (s == color[i]) {
            cout << color[i] << " is founded";
        }
    }

}