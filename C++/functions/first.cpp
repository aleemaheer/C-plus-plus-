#include <iostream>

using namespace std;

int sum() {
    int a, b, sum;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    sum = a + b;
    return sum;
}

int subtraction() {
    int a, b, answer;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    answer = a - b;
    return answer;
}

int multiplication() {
    int a, b, answer;
    cout << "Enter two numbers : \n";
    cin >> a >> b;
    answer = a * b;
    return answer;
}

int division() {
    int a, b, answer;
    cout << "Enter two numbers to divide them: \n";
    cin >> a >> b;
    answer = a / b;
    return answer;
}

int main() {
    // Calling sum function in main
    // Asking user to choose whether he wants to perform addition, multiplication or division
    int ask;
    cout << "What you want to do: \nPress\n1 for addition\n2 for division\n3 for multiplication\n4 for subtraction\n";
    cin >> ask;
    if (ask == 1) {
        int s;
        s = sum();
        cout << "Sum of numbers: " << s << "\n";
    } else if (ask == 2) {
        int s;
        s = division();
        cout << "Division of numbers: " << s << "\n";
    } else if (ask == 3) {
        int s;
        s = multiplication();
        cout << "Multiplication of numbers: " << s << "\n";
    } else if (ask == 4) {
        int s;
        s = subtraction();
        cout << "Answer: " << s << "\n";
    } else {
        cout << "Invalid Choice\n";
    }
}