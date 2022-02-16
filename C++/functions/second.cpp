#include <iostream>

using namespace std;

void table(int num, int range) {
    int i;
    for (i = 1; i <= range; i++) {
        cout << num << " X " << i << " = " << num * i;
    }

} 

int main() {
    int num, range;
    cout << "Enter number to print table: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;
    table(num, range);
}