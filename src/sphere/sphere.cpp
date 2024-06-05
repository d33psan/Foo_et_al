//Implementation of sphere volume calculations
#include <stdexcept>
#include <cmath>
#include "foo.h"

namespace foo{
    // This function calculates the volume of a sphere given its radius
    double sphere::vol(double rad) {
        // Validate the radius to ensure it is positive
        validate_rad(rad);
        // Calculate and return the volume using the formula for volume of sphere
        return (4.0/3.0)*M_PI*pow(rad,3);
    }
}
