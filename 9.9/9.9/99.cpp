// 9.9
// Carson Jenkins

#include <iostream>
using namespace std;

// function prototypes
double median(int*, int);
void displayArray(int*, int);


int main(int argc, const char * argv[]) {
    // array with odd elements
    int odd[] = {1,2,3,4,5,6,7};
    
    // array with even numbers
    int even[] = {1,2,3,4,5,6,7,8};
    
    // display odd array
    cout << "Odd set of values is: ";
    displayArray(odd, 7);
    
    // display odd array's median
    cout << "The median is: " << median(odd, 7) << endl << endl;
    
    // display even array
    cout << "Evene set of values is: ";
    displayArray(even, 8);
    
    // display even array's median
    cout << "The median is: " << median(even, 8) << endl << endl;
    
    return 0;
}

double median(int* arr, int num){
    double med;
    
    if(num % 2 == 0){
        int mid1 = num / 2, mid2 = (num/2) -1;
        med = ((*(arr+mid1) + *(arr+mid2)) / 2.0);
    }
    else{
        med = *(arr + (num / 2));
    }
    
    return med;
}

void displayArray(int* arr, int size){
    cout << endl;
    
    for (int k = 0; k < size; k++){
        cout << arr[k] << " ";
    }
    
    cout << endl;
}
