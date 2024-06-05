#include <stdexcept>
#include <cmath>
#include "foo.h"

namespace foo{
    double sphere::vol(double rad) {
        if (rad <= 0)
            throw std::invalid_argument("Radius should be positive");
        return (4.0/3.0)*M_PI*pow(rad,3);
    }
}
