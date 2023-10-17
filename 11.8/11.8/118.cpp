//  11.8
//  Carson Jenkins

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Customer{
    string name;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    double balance;
    string lastPay;
};

void getInfo(Customer&);
void showInfo(Customer);
void showSearch(Customer[], string, int);

int main(int argc, const char * argv[]) {
    const int NUM_ACCOUNTS = 20;
    
    Customer account[NUM_ACCOUNTS];
    
    int maxCust = 0;
    int choice = 0;
    int cust = 0;
    int count = 0;
    string search = 0;
    
    do{
        
        cout << "1. Enter new acc info\n";
        cout << "2. Change acc info\n";
        cout << "3. Display all acc info\n";
        cout << "4. Search for a customer\n";
        cout << "5. Exit program\n";
        
        cout << "1. Enter your choice: ";
        cin >> choice;
        while(choice < 1 || choice > 5){
            cout << "Please eneter 1, 2, 3, 4, or 5\n";
            cout << "Enter your choice: ";
            cin >> choice;
        }
        
        switch(choice){
            case 1:
                cin.get();
                getInfo(account[maxCust]);
                cout << "You have entered info for customer number";
                cout << maxCust << endl;
                maxCust++;
                break;
            case 2:
                cout << "Customer number: ";
                cin >> cust;
                
                while(cust < 0 || cust >= maxCust){
                    cout << "ERROR: Invalid Number";
                    cout << "Enter valid number: ";
                    cin >> cust;
                }
                
                showInfo(account[cust]);
                
                cin.get();
                getInfo(account[cust]);
                break;
            case 3:
                cin.get();
                for(count=0; count < maxCust; count++){
                    showInfo(account[count]);
                    cout << "Press enter to continue";
                    cin.get();
                }
                break;
            case 4:
                cin.get();
                cout << "Enter part of customer name: ";
                getline(cin, search);
                showSearch(account, search, maxCust);
        }
        
    } while(choice != 5);
    
    return 0;
}

void getInfo(Customer& c){
    // get customer name
    cout << "\nCustomer name: ";
    getline(cin, c.name);
    while(c.name.empty()){
        cout << "You must enter a name.\n";
        getline(cin, c.name);
    }
    
    // get customer address
    cout << "\nCustomer address: ";
    getline(cin, c.address);
    while(c.address.empty()){
        cout << "You must enter a address.\n";
        getline(cin, c.address);
    }
    
    // get customer city
    cout << "\nCustomer city: ";
    getline(cin, c.city);
    while(c.city.empty()){
        cout << "You must enter a city.\n";
        getline(cin, c.city);
    }
    
    // get customer state
    cout << "\nCustomer state: ";
    getline(cin, c.state);
    while(c.state.empty()){
        cout << "You must enter a state.\n";
        getline(cin, c.state);
    }
    
    // get customer ZIP code
    cout << "\nCustomer ZIP code: ";
    getline(cin, c.zip);
    while(c.zip.empty()){
        cout << "You must enter a ZIP code.\n";
        getline(cin, c.zip);
    }
    
    // get customer phone number
    cout << "\nCustomer phone number: ";
    getline(cin, c.phone);
    while(c.phone.empty()){
        cout << "You ust enter a phone number.\n";
        getline(cin, c.phone);
    }
    
    // get customer account balance
    cout << "\nCustomer account balance: ";
    getline(cin, c.balance);
    while(c.balance.empty()){
        cout << "You ust enter a balance.\n";
        getline(cin, c.balance);
    }
    
    // get customer last payment
    cout << "\nCustomer last payment: ";
    getline(cin, c.lastPay);
    while(c.lastPay.empty()){
        cout << "You ust enter a last payment.\n";
        getline(cin, c.lastPay);
    }
}

void showInfo(Customer c){
    cout << fixed << showpoint << setprecision(2);
    cout << "Name: " << c.name << endl;
    cout << "Address: " << c.address << endl;
    cout << "City: " << c.city << endl;
    cout << "State: " << c.state << endl;
    cout << "Zip: " << c.zip << endl;
    cout << "Phone number: " << c.phone << endl;
    cout << "Account Balance: " << c.balance << endl;
    cout << "Last payment: " << c.lastPay << endl;
}

void showSearch(Customer c[], string s, int max){
    bool found = false;
    
    for (int count = 0; count < max; count++){
        if(c[count].name.find(s) != -1){
            found = true;
            showInfo(c[count]);
        }
    }
    
    if(!found){
        cout << "Record nor found";
        
        cout << "Press enter to continue";
        cin.get();
    }
}
