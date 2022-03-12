// Searching from an array

#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n;
    int i;
    cout << "Enter a number to search: ";
    cin >> n;
    for (i = 0; i <= 4; i++)
    {
        if (n == a[i])
        {
            cout << "The number " << n << " is founded at index " << i << endl;
            break;
        }
    }
    //cout << "The value of i is " << i << endl;
    if (i <= 3) {
        // The number is founded
    } else
    {
        if (a[4] != n) {
            cout << "Your number is not founded!\n";
        }
    }
}