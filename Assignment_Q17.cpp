#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;

    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    cout << "\nLeap years between " << startYear << " and " << endYear << " are:\n";

    bool found = false;

    for(int year = startYear; year <= endYear; year++) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
            found = true;
        }
    }

    if (found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}

