/*
Carson Jenkins
08/23/2023
Dr. Rory Lewis
6.18
*/

#include <iostream>
#include <iomanip>
using namespace std;

// wall area that one gallon of paint will cover
const int WALL_AREA_PER_GALLON = 110;
// hourly labor rate
const double HOURLY_RATE = 25;

// function prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallSquareFeet();
int numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main(int argc, const char * argv[]) {
    int numRooms; // number of rooms to paint
    double paintPrice; // paint price per gallon
    int totalWallArea = 0; // accumulator for total wall area
    int gallons; // gallons of paint needed
    double hours; // labor hours needed
    
    // number of rooms
    numRooms = getNumberOfRooms();
    
    // price of paint per gallon
    paintPrice = getPaintPrice();
    
    // total wall area of the rooms
    for(int i = 0; i <= numRooms; i++){
        int wallArea;
        cout << "Room " << i << ": ";
        wallArea = getWallSquareFeet();
        totalWallArea += wallArea;
    }
    
    // number of gallons of paint needed
    gallons = numberOfGallons(totalWallArea);
    
    // number of labor hours needed
    hours = laborHours(totalWallArea);
    
    // display total charges
    displayCost(gallons, paintPrice, hours);
    
    return 0;
}

int getNumberOfRooms(){
    int rooms;
    
    // get number of rooms
    cout << "Enter number of rooms to be painted: ";
    cin >> rooms;
    
    // validation
    while (rooms < 1){
        cout << "ERROR: Enter 1 or greater\n";
        cout << "Enter number of rooms to be painted: ";
        cin >> rooms;
    }
    
    return rooms;
}

double getPaintPrice(){
    double price;
    
    // get paint price per gallon
    cout << "Enter price of paint per gallon: ";
    cin >> price;
    
    // validation
    while (price < 10){
        cout << "ERROR: Paint price must be 10 or greater\n";
        cout << "Enter price of paint per gallon: ";
        cin >> price;
    }
    
    return price;
}

double getWallSquareFeet(){
    double wallArea;
    
    // get wall space area
    cout << "Enter area of wall space in square feet: ";
    cin >> wallArea;
    
    // validate
    while(wallArea < 0){
        cout << "ERROR: Wall area must be non-negative\n";
        cout << "Enter the area of wall space in square feet: ";
        cin >> wallArea;
    }
    return wallArea;
}

int numberOfGallons(double wallArea){
    double doubleGallons;
    double remainder;
    int intGallons;
    
    // calculate gallons as double
    doubleGallons = wallArea / WALL_AREA_PER_GALLON;
    
    // get truncated number of gallons
    intGallons = static_cast<int>(doubleGallons);
    
    // get the fractional part of a gallon needed
    remainder = doubleGallons - static_cast<int>(doubleGallons);
    
    // determine if fractional part of gallons is needed
    if(remainder > 0)
    intGallons += 1;
    
    return intGallons;
}

double laborHours(double wallArea){
    double hours = wallArea / WALL_AREA_PER_GALLON;
    
    return hours;
}

void displayCost(int gallons, double paintPrice, double hours){
    double totalPaintCost;
    double totalLabor;
    double totalCharges;
    
    totalPaintCost = gallons * paintPrice;
    
    totalLabor = hours * HOURLY_RATE;
    
    totalCharges = totalPaintCost + totalLabor;
    
    // display charges for the job
    cout << fixed << showpoint << setprecision(2);
    cout << "\nESTIMATED CHARGES\n";
    cout << "---------------\n";
    cout << "Gallons of paint: " << gallons << endl;
    cout << "Price per gallons: " << paintPrice << endl;
    cout << "Paint cost: " << totalPaintCost << endl;
    cout << "Hours of labor: " << totalLabor << endl;
    cout << "Total charges: " << totalCharges << endl;
}
