//  8.8
//  Carson Jenkins

#include <iostream>
using namespace std;

// global constants
const int ARRAY_SIZE = 20;

// function prototypes
int linearSearchBench(int[], int, int);
int binarySearchBench(int[], int, int);

int main(int argc, const char * argv[]) {
    int comparisons; // hold number of comparisons
    
    // intitialize array with 20 int values
    int tests[ARRAY_SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
    
    // display value being searched for
    cout << "Searching for the value 521, " << "located near the end of the array.\n";
    
    // perform linear search
    comparisons = linearSearchBench(tests, ARRAY_SIZE, 521);
    
    // display results of linear search
    cout << "The linear search made " << comparisons << " comparisons.\n";
    
    // perform binary search
    comparisons = binarySearchBench(tests, ARRAY_SIZE, 521);
    
    // display results of binary search
    cout << "The binary search made " << comparisons << " comparisons.\n";
    
    return 0;
}

int linearSearchBench(int values[], int size, int value){
    // variables
    bool found = false;
    
    int comparisons = 0;
    int index = 0;
    
    // search while value has not been found, and index is still in array bounds
    while(!found && index < size){
        comparisons++;
        
        if(values[index++] == value){
            found = true;
        }
    }
    
    // return number of comparisons
    return comparisons;
}

int binarySearchBench(int array[], int size, int value){
    // variables
    bool found = false;
    int first = 0;
    int middle;
    int last = size - 1;
    int comparisons = 0;
    
    // search while value has not been found, and index is still in array bounds
    while(!found && first <= last){
        middle = (first + last) / 2;
        comparisons++;
        
        if(array[middle] == value){
            found = true;
        }
        else if(array[middle] > value){
            last = middle - 1;
        }
        else{
            first = middle + 1;
        }
    }
    
    // return number of comparisons
    return comparisons;
}
