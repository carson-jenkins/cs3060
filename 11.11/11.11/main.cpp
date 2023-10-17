// 11.11
// Carson Jenkins

#include <iostream>
#include <iomanip>
using namespace std;

const double HOUSING = 500.0;
const double UTIL = 150.0;
const double HOUSEHOLD = 65.0;
const double TRANSPORT = 50.0;
const double MEDICAL = 30.0;
const double INSURANCE = 100.0;
const double ENTERTAIN = 150.0;
const double CLOTHING = 75.0;
const double MISC = 50.0;

struct MonthlyBudget{
    double housing;
    double util;
    double household;
    double transport;
    double medical;
    double insurance;
    double entertain;
    double clothing;
    double misc;
};

void getMontlyBudget(MonthlyBudget&);
void displayMonthlyReport(const MonthlyBudget&);

int main(int argc, const char * argv[]) {
    MonthlyBudget budget;
    
    getMonthlyBudget(budget);
    
    displayonthlyReport(budget);
    
    return 0;
}

void getMontlyBudget(MonthlyBudget& mb){
    // get amount spent for housing
    cout << "Enter the amount spent for housing: ";
    cin >> mb.housing;
    
    // get amount spent for utilities
    cout << "Enter the amount spent for utilities: ";
    cin >> mb.util;
    
    // get amount spent for household expenses
    cout << "Enter the amount spent for household expenses: ";
    cin >> mb.household;
    
    // get amount spent for transport
    cout << "Enter the amount spent for transport: ";
    cin >> mb.transport;
    
    // get amount spent for medical expenses
    cout << "Enter the amount spent for medical expenses: ";
    cin >> mb.medical;
    
    // get amount spent for insurance
    cout << "Enter the amount spent for insurance: ";
    cin >> mb.insurance;
    
    // get amount spent for entertainment
    cout << "Enter the amount spent for entertainment: ";
    cin >> mb.entertain;
    
    // get amount spent for clothing
    cout << "Enter the amount spent for clothing: ";
    cin >> mb.clothing;
    
    // get miscellaneous expenses
    cout << "Enter miscellaneous expenses: ";
    cin >> mb.misc;
    
}

void displayMonthlyReport(const MonthlyBudget& mb){
    double overUnder = 0.0;
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << setw(18) << left << "\nCategory"
    << setw(10) << right << "Budgeted"
    << setw(10) << right << "Spent"
    << setw(16) << right << "Over(-)/Under" << endl;
    cout << "-------------------------------------------------------\n";
    
    
    // get budget amounts for housing
    cout << setw(18) << left << "Housing"
    << setw(10) << right << HOUSING
    << setw(10) << right << mb.housing
    << setw(16) << right
    << (HOUSING - mb.housing) << endl;
    // get amount over/under for housing
    overUnder += (HOUSING - mb.housing);
    
    // get budget amounts for utilities
    cout << setw(18) << left << "Utilities"
    << setw(10) << right << UTIL
    << setw(10) << right << mb.util
    << setw(16) << right << (UTIL - mb.util) << endl;
    // get amount over/under for utilites
    overUnder += (UTIL - mb.util);
    
    // get budget amounts for household expenses
    cout << setw(18) << left << "Household"
    << setw(10) << right << HOUSEHOLD
    << setw(10) << right << mb.household
    << setw(16) << right
    << (HOUSEHOLD - mb.household) << endl;
    // get amount over/under for household expenses
    overUnder += (HOUSEHOLD - mb.household);
    
    // get budget amounts for transportation
    cout << setw(18) << left << "Transportation"
    << setw(10) << right << TRANSPORT
    << setw(10) << right << mb.transport
    << setw(16) << right
    << (TRANSPORT - mb.transport) << endl;
    // get amount over/under for transportation
    overUnder += (TRANSPORT - mb.transport);
    
    // get budget amounts for medical
    cout << setw(18) << left << "Medical"
    << setw(10) << right << MEDICAL
    << setw(10) << right << mb.medical
    << setw(16) << right
    << (MEDICAL - mb.medical) << endl;
    // get amount over/under for medical expenses
    overUnder += (MEDICAL - mb.medical);
    
    // get budget amounts for insurance
    cout << setw(18) << left << "Insurance"
    << setw(10) << right << INSURANCE
    << setw(10) << right << mb.insurance
    << setw(16) << right
    << (INSURANCE - mb.insurance) << endl;
    // get amount over/under for insurance
    overUnder += (INSURANCE - mb.insurance);
    
    // get budget amounts for entertainment
    cout << setw(18) << left << "Entertainment"
    << setw(10) << right << ENTERTAIN
    << setw(10) << right << mb.entertain
    << setw(16) << right
    << (ENTERTAIN - mb.entertain) << endl;
    // get amount over/under for entertainment
    overUnder += (ENTERTAIN - mb.entertain);
    
    // get budget amounts for clothing
    cout << setw(18) << left << "Clothing"
    << setw(10) << right << CLOTHING
    << setw(10) << right << mb.insurance
    << setw(16) << right
    << (CLOTHING - mb.clothing) << endl;
    // get amount over/under for insurance
    overUnder += (CLOTHING - mb.clothing);
    
    // get budget amounts for misc.
    cout << setw(18) << left << "Miscellanous"
    << setw(10) << right << MISC
    << setw(10) << right << mb.misc
    << setw(16) << right
    << (MISC - mb.misc) << endl;
    // get amount over/under for insurance
    overUnder += (MISC - mb.misc);
    
    if(overUnder <= 0){
        cout << "For the month you are under "
        << "budget by $" << overUnder << endl;
    }
    else{
        cout << "For the month you are over "
        << "budget by $" << overUnder << endl;
    }
}
