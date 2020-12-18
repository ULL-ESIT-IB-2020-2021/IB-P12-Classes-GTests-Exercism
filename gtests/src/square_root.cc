// Nan check: https://stackoverflow.com/questions/570669/checking-if-a-double-or-float-is-nan-in-c

#include <cmath>

double SquareRoot(const double a) {
  double sqrta = sqrt(a);
  if(sqrta != sqrta) { // nan check
    return -1.0;
  } else {
    return sqrta;
  }
}
