#include <iostream>
#include <string> // Include string header for string manipulation
// Name : EMMANUEL BARAKA 
//Reg : BSCIT-05-0113/2024
using namespace std;

struct Patient {
    string name;
    int age;
    string diagnosis;
};

void displayPatients(const Patient &p) {
    cout << "Patient Name: " << p.name << endl;
    cout << "Patient Age: " << p.age << endl;
    cout << "Patient Diagnosis: " << p.diagnosis << endl;
}

int main() {
    Patient patient1;
    Patient patient2;

    // Get input for patient 1
    cout << "Enter details for Patient 1:" << endl;
    cout << "Name: ";
    getline(cin, patient1.name); // Use getline to handle spaces in name
    cout << "Age: ";
    cin >> patient1.age;
    cin.ignore(); // Consume the newline character left in the buffer
    cout << "Diagnosis: ";
    getline(cin, patient1.diagnosis);

    // Get input for patient 2
    cout << "\nEnter details for Patient 2:" << endl;
    cout << "Name: ";
    getline(cin, patient2.name);
    cout << "Age: ";
    cin >> patient2.age;
    cin.ignore();
    cout << "Diagnosis: ";
    getline(cin, patient2.diagnosis);

    cout << "\nPatient Information:" << endl;
    displayPatients(patient1);
    displayPatients(patient2);

    return 0;
}
