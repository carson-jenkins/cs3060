/*
Carson Jenkins
08/30/2023
Dr. Rory Lewis
7.3
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// function prototypes
int getTotal(int[], int);
int posOfLargest(int[], int);
int posOfSmallest(int[], int);

int main(int argc, const char * argv[]) {
    
    // constant for # of salsa types
    const int NUM_TYPES = 5;
    
    // array of salsa types
    string types[NUM_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};
    
    // array of sales for each salsa type
    int sales[NUM_TYPES];
    
    // total # of jars sold
    int totalJarsSold;
    
    // subscript of the salsa that sold the most
    int hiSalesProduct;
    
    // subscript of the salsa that sold the least
    int loSalesProduct;
    
    // get the # of jars sold of each type of salsa
    for(int type = 0; type < NUM_TYPES; type++){
        cout << "Jars sold last month of " << types[type] << ": ";
        cin >> sales[type];
        
        while(sales[type] < 0){
            cout << "Jars sold must be 0 or more. " << "Please re-enter: ";
            cin >> sales[type];
        }
    }
    
    // get total sales and high and low selling products
    totalJarsSold = getTotal(sales, NUM_TYPES);
    hiSalesProduct = posOfLargest(sales, NUM_TYPES);
    loSalesProduct = posOfSmallest(sales, NUM_TYPES);
    
    // display the sales report header
    cout << endl << endl;
    cout << "   Salsa Sales Report \n\n";
    cout << "Name       Jars Sold \n";
    cout << "_________________________________\n";
    
    // display the name and jars sold of each type
    for(int salsaType = 0; salsaType < NUM_TYPES; salsaType++){
        cout << types[salsaType] << setw(21) << sales[salsaType] << endl;
    }
    
    // display the total sales, highest seller, and lowest seller
    cout << "\nTotal Sales: " << setw(15) << totalJarsSold << endl;
    cout << "High Seller: " << types[hiSalesProduct] << endl;
    cout << "Low Seller: " << types[loSalesProduct] << endl;
    
    return 0;
}

int getTotal(int values[], int size){
    int total = 0;
    
    for(int i = 0; i < size; i++){
        total += values[i];
    }
    
    return total;
}

int posOfLargest(int values[], int size){
    int indexOfLargest = 0;
    
    for(int i = 1; i < size; i++){
        if(values[i] > values[indexOfLargest]){
            indexOfLargest = i;
        }
    }
    
    return indexOfLargest;
}

int posOfSmallest(int values[], int size){
    int indexOfSmallest = 0;
    
    for(int i = 1; i < size; i++){
        if(values[i] < values[indexOfSmallest]){
            indexOfSmallest = i;
        }
    }
    
    return indexOfSmallest;
}
