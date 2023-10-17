// 6.6

#include <iostream>
using namespace std;

// funciton prototype
double kineticEnergy(double, double);

int main(int argc, const char * argv[]) {
    // variables
    double mass; // holds object mass
    double velocity; // holds object velocity
    
    // get object mass
    cout << "Enter object mass (kg): ";
    cin >> mass;
    
    // get object velocity
    cout << "Enter object velocity (m/s): ";
    cin >> velocity;
    
    // display object's kinetic energy (1/2*mv^2)
    cout << "Object's kinetic energy is: "
    << kineticEnergy(mass, velocity)
    <<  " joules\n";
    
    return 0;
}
double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}
