// Program to calculate the bill of electricity
// The program will take number of units from the user and prints the bill
// in rupees
// Bill criteria
// first 50 units will be 3.50Rs per unit
// Next 100 units will be 4.50Rs per unit
// Next 100 unit will be 5.50Rs per unit
// And add 15% tax if bill is greater than or equl to 2000
// Or if bill is greater than equal to 5000 than add 30% tax in the bill

#include <iostream>

using namespace std;

int main() {
    int units;
    float bill;
    cout << "Enter units: ";
    cin >> units;
    if (units <= 50)
    {
        bill = units * 3.50;
    }
    if (units > 50 && units <= 150) {
        bill = (50 * 3.50) + (units - 50) * 4.50;
    }
    if (units > 150) {
        bill = (50 * 3.50) + (100 * 4.50) + (units - 150) * 5.50;
    }

    // Printing the bill
    cout << "Your bill is " << bill;
}