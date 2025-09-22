#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
             cout << "LCM is "<<i<<endl;
            break;
        }
    }

    
    return 0;
}

