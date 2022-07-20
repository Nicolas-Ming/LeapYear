#include <iostream>
using namespace std;

int year = 0;

int main()
{
    cout << "Input a year to see if it is a leap year, then hit enter: ";
    cin >> year;
    if ((year % 4) == 0 && (year % 100) != 0) {
        cout << endl << "The year " << year << " is a LEAP YEAR!!!";
    }
    else {
        if (year % 400 == 0) {
            cout << endl << "The year " << year << " is a LEAP YEAR!!!";
        }
        else {
            cout << endl << "The year " << year << " is not a leap year :(";
        }
    }
    return 0;
}