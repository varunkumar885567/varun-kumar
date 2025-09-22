#include <iostream>
using namespace std;

int main() {
    int AsciiCode;
    char character;

    cout << "Enter an ASCII code (0-127): ";
    cin >> AsciiCode;

    character = char(AsciiCode);

    
    cout << "The character corresponding to ASCII code " << AsciiCode << " is: '" << character << "'" << endl;

    return 0;
}

