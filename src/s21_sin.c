#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  if (x == MAX_INF || x == MIN_INF || x != x) {
    res = MAX_NAN;
  } else {
    x = s21_fmod(x, 2 * S21_PI);
    long double xi = x;
    res = x;
    int i = 1;
    while (s21_fabs(xi) > S21_EPS) {
      xi *= -(x * x) / ((i + 1) * (i + 2));
      res += xi;
      i += 2;
    }
  }
  return res;
}