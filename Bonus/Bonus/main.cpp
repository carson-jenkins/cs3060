//  13.4
//  Carson Jenkins

#include <iostream>
#include <string>
using namespace std;

class PersonalInfo{
private:
    string name;
    string address;
    int age;
    string phone;
public:
    PersonalInfo(){
        name = "";
        address = "";
        age = 0;
        phone = "";
    }
    PersonalInfo(string n, string addr, int a, string p){
        setName(n);
        setAddress(addr);
        setAge(a);
        setPhone(p);
    }
    
    // mutator functions
    void setName(string n){
        name = n;
    }
    void setAddress(string a){
        address = a;
    }
    void setAge(int a){
        age = a;
    }
    void setPhone(string p){
        phone = p;
    }
    
    // accessor functions
    string getName() const{
        return name;
    }
    string setAddress() const{
        return address;
    }
    int setAge() const{
        return age;
    }
    string setPhone() const{
        return phone;
    }
};

void displayPersonalInfo(PersonalInfo);

int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}

void displayPersonalInfo(PersonalInfo obj){
    
}
