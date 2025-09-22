#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    for (int i =a+1; ;i++) { 
        int count = 0;

    
        for (int j = 2; j <= i / 2; j++) {
            if (i % j== 0) {
                count = 1;
                break;
            }
        }

        if (count == 0) { 
            cout << "Next prime number is: " << i;
            break;
        }
    }

    return 0;
}

