#include <iostream>
using namespace std;

int main() {
    float cpPerDozen, spPerDozen;
    float cpPerBanana, spPerBanana;
    float totalCost, totalSelling, profitOrLoss;

    // Input from user
    cout << "Enter the cost price per dozen bananas: ";
    cin >> cpPerDozen;

    cout << "Enter the selling price per dozen bananas: ";
    cin >> spPerDozen;

    
    cpPerBanana = cpPerDozen / 12;
    spPerBanana = spPerDozen / 12;


    totalCost = cpPerBanana * 25;
    totalSelling = spPerBanana * 25;

    
    profitOrLoss = totalSelling - totalCost;

    
    if (profitOrLoss > 0) {
        cout << "Profit earned on selling 25 bananas: " << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss on selling 25 bananas: " << profitOrLoss << endl;
    } else {
        cout << "No profit, no loss on selling 25 bananas." << endl;
    }

    return 0;
}

