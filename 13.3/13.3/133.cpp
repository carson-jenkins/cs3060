//  13.3
//  Carson Jenkins

#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int yearModel;
    string make;
    int speed;
    
public:
    // constructor
    Car(int y, string m){
        yearModel = y;
        make = m;
        speed = 0;
    }
    
    // accelerate function
    void accelerate(){
        speed += 5;
    }
    
    // brake function
    void brake(){
        speed -= 5;
    }
    
    // accessor functions
    int getYearModel(){
        return yearModel;
    }
    string getMake(){
        return make;
    }
    int getSpeed(){
        return speed;
    }
    
    
};

int main(int argc, const char * argv[]) {
    
    int count;
    
    Car porsche(2006, "Porsche");
    
    cout << "Current speed: " << porsche.getSpeed() << endl;
    
    // accelerate 5 times
    for(count = 0; count < 5; count++){
        // accelerate and display speed
        cout << "Accelerating...\n";
        porsche.accelerate();
        cout << "Current speed: " << porsche.getSpeed() << endl;
    }
    
    // brake 5 times
    for(count = 0; count < 5; count++){
        // brake and display speed
        cout << "Braking...\n";
        porsche.brake();
        cout << "Current speed: " << porsche.getSpeed() << endl;
    }
    
    return 0;
}
