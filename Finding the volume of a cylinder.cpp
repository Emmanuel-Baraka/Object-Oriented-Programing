#include <iostream>

using namespace std;

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height); 

int main() {
    double radius, height;

    // Getting the user input
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calling the function and displaying the result
    double volume = calculateVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;

    return 0;
}
// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height) {
    const double PI = 3.14159;  // defining p
    return PI * radius * radius * height;  
}

