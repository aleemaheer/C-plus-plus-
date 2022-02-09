#include <iostream>

using namespace std;

int sum() {
    int a, b, sum;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    sum = a + b;
    return sum;
}

int main() {
    // calling sum function in main
    int s;
    s = sum();
    cout << "Sum of numbers: " << s << "\n";
}