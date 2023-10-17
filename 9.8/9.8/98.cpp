//  9.8
//  Carson Jenkins

#include <iostream>
using namespace std;

// function prototypes
int getMode(int*, int);
int *makeArray(int);

int main(int argc, const char * argv[]) {
    // constant for array size
    const int SIZE = 11;
    
    // array of test values
    int test[SIZE] = {1, 2, 3, 3, 3, 2, 2, 1, 3, 4, 5};
    
    // variable to hold the mode
    int mode;
    
    // get the mode
    mode = getMode(test, SIZE);
    
    // display the mode
    if(mode == -1){
        cout << "The test set has no mode.\n";
    }
    else{
        cout << "\nThe mode of test set is: " << mode << endl;
    }
    
    return 0;
}

int getMode(int* array, int size){
    // variables
    
    // pointer to reference a dynamically allocated array to hold the frequencies of each value
    int* frequencies = nullptr;
    
    int mode = -1; // the mode, intiialized to -1
    int highest = 0; // the value with highest frequency
    int element = 0; // to hold an element subscript
    int count = 0; // loop counter
    
    
    // dynamically allocate an array to hold the frequencies of each
    // element in the array. When this function ends, frequencies[0]
    // will hold the frequency of the value in array[0], and so forth
    frequencies = makeArray(size);
    
    // store 0 in all the elements of frequencies
    for(count = 0; count < size; count++){
        frequencies[count] = 0;
    }
    
    for(int count1 = 0; count1 < size; count1++){
        
        for(int count2 = 0; count2 < size; count2++){
            
            if(*(array+count2) == *(array + count1))
            (*(frequencies + count1))++;
        }
    }
    
    highest = *frequencies;
    element = 0;
    
    for(count = 1; count < size; count++){
        if(*(frequencies+count) > highest){
            highest = *(frequencies + count);
            element = count;
        }
    }
    
    frequencies = nullptr;
    
    if(highest > 1){
        mode = *(array + element);
    }
    
    return mode;
}

int* makeArray(int size){
    // dynamically allocate an integer array of given size and initialize it to all zeros
    int* newArray = new int[size];
    for (int i = 0; i < size; i++){
        newArray[i] = 0;
    }
    return newArray;
}

