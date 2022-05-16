#include <iostream>

using namespace std;

int main() {
    int n, ans = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i > 1; i --) 
        ans = ans * i;
    cout << "Factorial: " << ans;
}