#include <iostream>
using namespace std;

class shop {
private:
    int itemPrice[50];
    int itemId[50];
    int counter;

public:
    // Initialize counter to 0 when the object is created
    void initCounter() { 
        counter = 0; 
    }
    
    void setData();
    void display();
};

void shop::setData() {
    cout << "Enter ID of Item no " << counter + 1 << ": ";
    cin >> itemId[counter]; // Store at current index
    
    cout << "Enter Price of Item: ";
    cin >> itemPrice[counter]; // Store at current index
    
    counter++; // Increment counter for the next item
}

void shop::display() {
    cout << "\n--- Displaying Shop Items ---" << endl;
    for (int i = 0; i < counter; i++) {
        // Use [i] to access specific elements in the array
        cout << "Item ID: " << itemId[i] << " | Price: " << itemPrice[i] << endl;
    }
}

int main() {
    shop Dukan;
    
    // 1. MUST initialize counter first
    Dukan.initCounter();
    
    // 2. Add some items
    Dukan.setData();
    Dukan.setData();
    
    // 3. Display all items
    Dukan.display();

    return 0;
}
