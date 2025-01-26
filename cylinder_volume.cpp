#include <iostream>
#include <cmath>

using namespace std;

// Define the constant value of PI
const double PI = 3.142;

// Function to calculate the volume of a cylinder
double volumeOfCylinder(double radius, double height) {
    // Calculate the volume of the cylinder using the formula: π * r^2 * h
    double volume = PI * radius * radius * height;
    return volume;
}

int main() {
    double radius, height;

    // Prompt the user to enter the radius and height of the cylinder
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder
    double volume = volumeOfCylinder(radius, height);

    // Display the volume of the cylinder
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}