//  11.14
//  Carson Jenkins

#include <iostream>
#include <string>
using namespace std;

const int NUM_BINS = 10;
const int MAX_PARTS_PER_BIN = 30;

struct InventoryBin {
    string description;
    int numParts;
};

InventoryBin bins[NUM_BINS] = {
    {"Valve", 10},
    {"Bearing", 5},
    {"Bushing", 15},
    {"Coupling", 21},
    {"Flange", 7},
    {"Gear", 5},
    {"Gear Housing", 5},
    {"Vacuum Gripper", 25},
    {"Cable", 18},
    {"Rod", 12}
};

void displayInventory() {
    cout << "Inventory Bins:\n";
    cout << "Bin#\tDescription\t\tNum Parts\n";
    for (int i = 0; i < NUM_BINS; ++i) {
        cout << i + 1 << "\t\t" << bins[i].description << "\t\t\t" << bins[i].numParts << "\n";
    }
}

void addParts(int binIndex, int numToAdd) {
    if (bins[binIndex].numParts + numToAdd <= MAX_PARTS_PER_BIN) {
        bins[binIndex].numParts += numToAdd;
        cout << "Added " << numToAdd << " parts to bin " << binIndex + 1 << "\n";
    } else {
        cout << "Can't add more parts than the bin can hold\n";
    }
}

void removeParts(int binIndex, int numToRemove) {
    if (numToRemove >= 0 && bins[binIndex].numParts >= numToRemove) {
        bins[binIndex].numParts -= numToRemove;
        cout << "Removed " << numToRemove << " parts from bin " << binIndex + 1 << "\n";
    } else {
        cout << "Can't remove more parts than the bin contains\n";
    }
}

int main() {
    int choice;
    
    do {
        displayInventory();
        cout << "\nEnter bin number to add/remove parts (1-10), or enter 0 to quit: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= NUM_BINS) {
            int binIndex = choice - 1;
            int numParts;
            int action;

            cout << "Choose 1-Add parts or 2-Remove parts: ";
            cin >> action;

            if (action == 1) {
                cout << "Enter number of parts to add: ";
                cin >> numParts;
                if (numParts < 0) {
                    cout << "Invalid. Number of parts can't be negative\n";
                    continue;
                }
                addParts(binIndex, numParts);
            } else if (action == 2) {
                cout << "Enter the number of parts to remove: ";
                cin >> numParts;
                if (numParts < 0) {
                    cout << "Invalid. Number of parts can't be negative\n";
                    continue;
                }
                removeParts(binIndex, numParts);
            } else {
                cout << "Invalid. Try again\n";
            }
        } else if (choice != 0) {
            cout << "Invalid. Try again\n";
        }
    } while (choice != 0);

    cout << "Exiting program\n";
    
    return 0;
}
