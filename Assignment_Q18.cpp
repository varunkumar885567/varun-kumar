#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    int middle;

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        middle = a;
    }else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        middle = b;
    }else {
        middle = c;
    }
    cout << "The middle (second largest) number is: " << middle << endl;

    return 0;
}

