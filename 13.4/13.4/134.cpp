//  13.4
//  Carson Jenkins
    
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Procedure {
private:
    string procedureName;
    string procedureDate;
    string practitionerName;
    double procedureCharge;

public:
    // constructor
    Procedure(string name, string date, string practitioner, double charge) : procedureName(name), procedureDate(date), practitionerName(practitioner), procedureCharge(charge) {}

    // accessor functions for member variables (getters)
    string getProcedureName() const {
        return procedureName;
    }
    string getProcedureDate() const {
        return procedureDate;
    }
    string getPractitionerName() const {
        return practitionerName;
    }
    double getProcedureCharge() const {
        return procedureCharge;
    }
};

int main(int argc, const char * argv[]) {
    // create three Procedure instances with sample data
    Procedure procedure1("Physical Exam", "2023-10-04", "Dr. Irvine", 250.00);
    Procedure procedure2("X-ray", "2023-10-04", "Dr. Jamison", 500.00);
    Procedure procedure3("Blood test", "2023-10-04", "Dr. Smith", 200.00);

    // store the procedures in a vector
    vector<Procedure> procedures = {procedure1, procedure2, procedure3};

    // display information about all three procedures
    cout << "Procedures:\n";
    double totalCharges = 0.0;
    for (const auto& procedure : procedures) {
        cout << "Procedure Name: " << procedure.getProcedureName() << "\n";
        cout << "Date: " << procedure.getProcedureDate() << "\n";
        cout << "Practitioner: " << procedure.getPractitionerName() << "\n";
        cout << "Charge: $" << procedure.getProcedureCharge() << "\n\n";
        totalCharges += procedure.getProcedureCharge();
    }

    // display the total charges for all procedures
    cout << "Total Charges for all Procedures: $" << totalCharges << "\n";

    return 0;
}

