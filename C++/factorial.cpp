// Program to find a factorial of a number 
// For e.g the factorial of 5 is 5*4*3*2*1
#include <iostream>

using namespace std;

int main() {
    int num, i, result = 1;
    cout << "Enter a number to find a factorial of a number: ";
    cin >> num;
    for ( i = num; i >= 1; i--) {
        result = result * i;
    }
    cout << "Facorial of " << num << " is " << result << "/n";
}