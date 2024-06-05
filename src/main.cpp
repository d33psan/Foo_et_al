#include <iomanip>
#include <iostream>
#include "foo.h"
using namespace std;
int main()
{
    double r;
    cout<<"Enter a radius: "<<endl;
    cin>>r;
    try {
        double v = foo::sphere::vol(r);
        cout << setprecision(8);
        cout<<"Volume of the sphere is: "<<v<<endl;
    }catch (const invalid_argument& e) {
        cerr<<"Error: "<<e.what()<<endl;
    }
    return EXIT_SUCCESS;
}
