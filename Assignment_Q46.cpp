#include <iostream>
using namespace std;

int main() {
    int n=7;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

           
            if (i == 0) {
                
                if (j >= n / 2 || j == 0)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else if (i < n / 2) {
                
                if (j == n / 2 || j == 0)
                    cout << "* ";
                else
                    cout << "  ";
           }
            else if (i == n / 2) {
                cout << "* ";
            }
            else if (i < n - 1) {
                
                if (j == n / 2 || j == n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else {
                
                if (j <= n / 2 || j == n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

