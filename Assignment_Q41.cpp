#include <iostream>
using namespace std;

int main() {
    int n, sum, rem;

    cout << "Armstrong numbers under 1000 are:\n";

    for (n = 1; n < 1000; n++) {
        int temp = n;
        sum=0;

        while (temp > 0) {
            rem = temp % 10;
            sum =sum +rem*rem*rem;
            temp= temp/10;
        }

        if (sum == n) {
            cout << n << " ";
        }
    }

    return 0;
}

