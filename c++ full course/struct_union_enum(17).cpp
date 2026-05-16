#include <iostream>
#include <string>
using namespace std;

// 1. ENUM: A list of named constants for weapon types
enum WeaponType {
    SWORD = 1,  // Starts at 1 instead of 0
    BOW = 2,
    SPELL = 3
};

// 2. UNION: Shares memory. Can hold raw damage OR a multiplier percentage.
union WeaponPower {
    int rawDamage;       // 4 bytes
    float multiplier;    // 4 bytes (Shares memory with rawDamage!)
};

// 3. STRUCT: Combines everything to make a full character profile
struct Character {
    string name;            // Independent memory
    WeaponType choice;      // Independent memory (Uses our Enum)
    WeaponPower power;      // Independent memory (Uses our Union)
};

int main() {
    // Create an instance of our struct
    Character hero;2
    hero.name = "Juni";
    
    // Using the ENUM to set the weapon type
    hero.choice = SWORD; 
    
    // Using the UNION to set the power
    // Since it's a sword, we will use 'rawDamage'
    hero.power.rawDamage = 150; 

    // ---- Displaying the data ----
    cout << "--- Character Profile ---" << endl;
    cout << "Character Name: " << hero.name << endl;
    cout << "Weapon Type (Enum Value): " << hero.choice << endl; 
    cout << "Weapon Raw Damage (Union Value): " << hero.power.rawDamage << endl;

    cout << "\n--- Demonstrating Union Memory Sharing ---" << endl;
    // CRITICAL UNION PROOF: 
    // If we assign a value to 'multiplier', it will corrupt/overwrite 'rawDamage'
    hero.power.multiplier = 2.5f; 
    
    cout << "New Multiplier set: " << hero.power.multiplier << endl;
    cout << "What happened to Raw Damage? " << hero.power.rawDamage << " (Overwritten/Garbage Data!)" << endl;

    cout << "\n--- Memory Sizes ---" << endl;
    cout << "Size of WeaponPower (Union): " << sizeof(WeaponPower) << " bytes (Size of largest element)" << endl;
    cout << "Size of Character (Struct): " << sizeof(Character) << " bytes (Sum of all element sizes)" << endl;

    return 0;
}