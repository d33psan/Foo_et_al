//Main program file
#include <iomanip>
#include <iostream>
#include "foo.h"
using namespace std;
int main()
{
    double r; // Variable to hold the radius input by the user

    cout<<"Enter a radius: "<<endl; // Prompt the user to enter a radius
    cin>>r;
    try {
        double v = foo::sphere::vol(r); // Calculate the volume of the sphere with the given radius
        cout << setprecision(8); // Set the precision for the output to 8 decimal places
        cout<<"Volume of the sphere is: "<<v<<endl;
    }catch (const invalid_argument& e) {
        cerr<<"Error: "<<e.what()<<endl; // If an invalid argument exception is thrown, print the error message
    }
    return EXIT_SUCCESS;
}
