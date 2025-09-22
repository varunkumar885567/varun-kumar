#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the triangle:\n";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    } 
    else {
        cout << "Invalid Tringle" << endl;
    }

    return 0;
}

