#include <iostream>
#include <unistd.h>

using namespace std;

int linearSearch(int array[], int n, int key);
int binarySearch(int array[], int n, int key);

int main()
{
    int n, array[n];
    cout << "Enter size of array: ";
    cin >> n;
    sleep(0.4);
    cout << "Enter numbers of array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sleep(0.4);
    int key;
    cout << "Enter a number to search in an array: ";
    cin >> key;
    // Calling a function to search the number with linear search
    if (linearSearch(array, n, key) != -1)
    cout << "Linear Search: Found number on index " << linearSearch(array, n, key) << endl;
    else
    cout << "Not Found";
    if (binarySearch(array, n, key) != -1)
    cout << "Binary Search: Found number on index " << binarySearch(array, n, key);
    else
    cout << "Not Found";


    cout << "\n";
}

int linearSearch(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == array[i])
            return i;
    }
    return -1;
}

int binarySearch(int array[], int n, int key) {
    int s = 0;
    int e = n;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        return mid;
        else if (array[mid] > key)
        e = mid - 1;
        else
        s = mid + 1;
    }
    return -1;
}