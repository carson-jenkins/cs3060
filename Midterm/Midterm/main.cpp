//  Midterm Question 36
//  Created by Carson Jenkins on 10/11/23

#include <iostream>
#include <fstream>
using namespace std;

// constant for array size
const int SIZE = 15;

// declaration of division structure
struct Division{
    char divName[SIZE]; // division name
    int game;           // game number
    int win;            // game win (1 or 0)
};

int checkRecord(Division);

int main(int argc, const char * argv[]) {

    cout << "Enter 1 for a win, 0 for a loss\n\n";
    
    // division structure variables for each division
    Division america, europe, australia, africa, asia;
    
    // assign division names to division structure variables and checkRecord for each
    strcpy(america.divName, "America's");
    checkRecord(america);
    
    strcpy(europe.divName, "European Union");
    checkRecord(europe);
    
    strcpy(australia.divName, "Australia");
    checkRecord(australia);
    
    strcpy(africa.divName, "Africa");
    checkRecord(africa);
    
    strcpy(asia.divName, "South Asia");
    checkRecord(asia);
    
    return 0;
}

int checkRecord(Division div){
    // win and loss counter to display the division record
    int wins = 0;
    int losses = 0;
    cout << "Enter the record for the " << div.divName << " Division:\n";
    for(int match = 1; match <= 3; match++){
        div.game = match;
        cout << "\tGame " << match << ": ";
        cin >> div.win;
        if(div.win){
            cout << "\t--WIN--\n";
            wins++;
        }
        else{
            cout << "\t--LOSS--\n";
            losses++;
        }
    }
    // display division record
    cout << div.divName << " record: " << wins << "&" << losses << "\n\n";
    
    return 0;
}
