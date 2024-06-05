#include <stdexcept>
#include <cmath>
#include "foo.h"

namespace foo{
    double sphere::vol(double rad) {
        validate_rad(rad);
        return (4.0/3.0)*M_PI*pow(rad,3);
    }
}
