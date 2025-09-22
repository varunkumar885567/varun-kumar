#include <iostream>
using namespace std;

int main() {
    int a, count=0;
    cout << "Enter a number: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 2) 
        cout <<"The number is a Prime number." << endl;
    else
        cout <<" The number is NOT a Prime number." << endl;

    return 0;
}

