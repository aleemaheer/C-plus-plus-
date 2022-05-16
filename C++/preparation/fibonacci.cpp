#include <iostream>

using namespace std;

int main() {
    int r, t1, t2, nt;
    cout << "Enter a range to print fibonacci series: ";
    cin >> r;
    t1 = 0;
    t2 = 1;
    nt = t1 + t2;
    cout << t1 << "\n" << t2;
    for (int i = 3; i <= r; i++) {
        cout << "\n" << nt;
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
    }
}