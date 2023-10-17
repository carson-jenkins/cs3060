//  10.12
//  Carson Jenkins

#include <iostream>
using namespace std;

// constants
const int SIZE = 80;
const int MIN = 6;

// protoytpes
void displayRequirements();
void displayResult(char[]);
bool isValid(char[]);
bool hasLength(char[]);
bool hasLower(char[]);
bool hasUpper(char[]);
bool hasDigit(char[]);

int main(int argc, const char * argv[]) {
    
    char cstring[SIZE];
    
    displayRequirements();
    
    cout << "Enter a password: ";
    cin.getline(cstring, SIZE);
    
    displayResult(cstring);
    
    return 0;
}

void displayRequirements(){
    cout << "Password Requiremnets:\n - The password should be at least" << MIN << "characters long.\n - The password should have at least 1 lower case, 1 upper case, and 1 digit";
}

void displayResult(char str[]){
    // determine if password is valid
    if(isValid(str)){
        cout << "Valid password\n";
    }
    else{
        cout << "Invalid password\n";
        
        if(!hasLength(str)){
            cout << "It should be at least " << MIN << " characters long.\n";
        }
    }
    
    if(!hasLower(str)){
        cout << "It should contain at least one lower case letter.\n";
    }
    
    if(!hasUpper(str)){
        cout << "It should contain at least one upper case letter.\n";
    }
    
    if(!hasDigit(str)){
        cout << "It should contain at least one digit.\n";
    }
}


bool isValid(char str[]){
    bool status = false;
    
    if(hasLength(str) && hasLower(str) && hasUpper(str) && hasDigit(str)){
        status = true;
    }
    
    return status;
}

bool hasLength(char str[]){
    bool status = false;
    int count = 0;
    
    while(*str != '\0'){
        count++;
        
        *str++;
    }
    
    if(count >= MIN){
        status = true;
    }
    
    return status;
}

bool hasLower(char str[]){
    bool status = false;
    int count = 0;
    
    while(*str != '\0' && count == 0){
        if(islower(*str)){
            count++;
        }
        else{
            *str++;
        }
    }
    
    if(count > 0){
        status = true;
    }
    
    return status;
}

bool hasUpper(char str[]){
    bool status = false;
    int count = 0;
    
    while(*str != '\0' && count == 0){
        if(isupper(*str)){
            count++;
        }
        else{
            *str++;
        }
    }
    
    if(count > 0){
        status = true;
    }
    
    return status;
}

bool hasDigit(char str[]){
    bool status = false;
    int count = 0;
    
    while(*str != '\0' && count == 0){
        if(isdigit(*str)){
            count++;
        }
        else{
            *str++;
        }
    }
    
    if(count > 0){
        status = true;
    }
    
    return status;
}

