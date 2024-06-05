//Header file for the foo parameterization.
#ifndef FOO_H
#define FOO_H

namespace foo {
class sphere {
    public:
    // Static member function to calculate the volume of a sphere
    // Takes the radius of the sphere as an argument
    double static vol(double rad);

    // Static member function to validate the radius of a sphere
    // Ensures the radius is positive
    void static validate_rad(double rad);
};

}


#endif //FOO_H
