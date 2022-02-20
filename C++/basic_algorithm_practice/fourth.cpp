// Write a C++ program to check a given integer and
// return true if it is within 10 of 100 or 200.

#include <iostream>

using namespace std;

int check(int x) {
    {
        if(abs(x - 100) <= 10 || abs(x - 200) <= 10) // abs will return absolute value, for example abs(-5) = 5
            return true;
        return false;
    }
}

int main() {
    int x, ans;
    cout << "Enter any number: ";
    cin >> x;
    ans = check(x);
    cout << ans << endl;

}