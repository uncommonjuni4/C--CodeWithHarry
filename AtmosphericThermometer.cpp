#include<iostream>
using namespace std;

// Function prototype - changed to void since we are just printing inside
void checkW(int tempP);

int main() {
    cout << "Welcome to Juni Atmospheric Thermometer" << endl;
    
    int days;
    cout << "How many days would you like to check? ";
    cin >> days;
    
    for(int i = 1; i <= days; i++) {
        int temp;
        cout << "\nEnter Temperature for Day " << i << ": ";
        cin >> temp;
        
        // Calling the function
        checkW(temp);
    }
    
    return 0;
}

// Function definition
void checkW(int tempP) {
    if (tempP < 15) {
        cout << "Recommendation: Wear a Coat. It's chilly!" << endl;
    } 
    else if (tempP >= 15 && tempP <= 35) {
        cout << "Recommendation: Wear a T-shirt. It's nice out!" << endl;
    } 
    else if (tempP > 35) {
        // Adding your "Heat" logic here for higher temps
        cout << "Warning: Extreme Heat! Stay hydrated." << endl;
    }
}
