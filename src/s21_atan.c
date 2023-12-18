#include "s21_math.h"

long double s21_atan(double x) {
  long double res;
  long double flag = 0.0;
  if (x == MAX_INF) {
    res = S21_PI / 2;
  } else if (x == MIN_INF) {
    res = -S21_PI / 2;
  } else if ((x == 1) || (x == -1)) {
    res = x * S21_PI / 4;
  } else {
    if ((x > 1) || (x < -1)) {
      flag = ((0 < x) - (x < 0)) * S21_PI / 2;
      x = 1 / x;
    }
    res = x;
    long double xi = x;
    long double i = 3;
    while (s21_fabs(xi) > S21_EPS) {
      xi *= -x * x;
      res += xi / i;
      i += 2;
    }
    if (flag != 0) {
      res = flag - res;
    }
  }
  return res;
}