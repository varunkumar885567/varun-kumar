#include <iostream>
using namespace std;

int main() {
    int month, year, days;


    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else if (month == 2) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    }
    else {
        cout << "Invalid month Please enter a value between 1 and 12." << endl;
        return 0;
    }

    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;

    return 0;
}

