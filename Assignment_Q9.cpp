#include <iostream>
using namespace std;

int main() {
    string date;
    string day, month, year;

    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;

    // Extract day, month, and year using substr() it is a string function to extract portion of string.
    day = date.substr(0, 2);
    month = date.substr(3, 2);
    year = date.substr(6, 4);


    cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;

    return 0;
}

