//Utility functions for the sphere calculations.
#include <stdexcept>
#include "foo.h"
void foo::sphere::validate_rad(double rad) {
    if (rad <= 0)
        throw std::invalid_argument("Radius should be positive");
}