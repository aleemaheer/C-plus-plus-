// This program will get 10 numbers from the user, save the numbers in an
// array and ask user to choose if the user want to search any number in an
// array or not.

#include <iostream>

using namespace std;

int main() {
    int i, array[10], ans, search_num, count = 0;
    cout << "Enter 10 values \n";
    for (i = 0; i < 10; i++) {
        cin >> array[i];
    }
    cout << "Do you want to search some number in an array? 0 for no/1 for yes:  ";
    cin >> ans;
    if (ans == 1) {
        cout << "Enter a number you want to search: ";
        cin >> search_num;
        for (i = 0; i < 10; i++) {
            if (array[i] == search_num){
                count++;
            }
        }
        if (count != 0) {
            cout << "Your number is " << count << " time in an array\n";
        }
    }
    else {
        cout << "Ok Bye!\n";
    }
}