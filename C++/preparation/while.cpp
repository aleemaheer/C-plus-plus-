#include <iostream>

using namespace std;

int main() {
    int i;
    i = 1;
    do {
        if (i % 5 == 0) 
        cout << i << "\n";
        i += 2;
    }
    while (i <= 301);
}