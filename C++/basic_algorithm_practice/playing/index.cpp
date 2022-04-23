#include <iostream>
#include <string>

using namespace std;

string check(string x) {
    if (x.substr(0, 2) == "if")
    return x;
    else
    return "if" + x;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline (cin, input);
    cout << check(input);
}

/*
Linear Search: 
    A linear search is the simplest method of searching a data set.
    Starting at the beginning of the data set, each item of data is examined until a match is made.
    Once the item is found, the search ends.
Binary Search:
    A binary search is a search that finds the middle element in the list recursively until the
    middle element is matched with a searched element.

*/