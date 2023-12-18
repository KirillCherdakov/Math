#include "s21_math.h"

long double s21_asin(double x) {
  long double res = x;
  if (x == MAX_INF || x == MIN_INF || x != x || (s21_fabs(x) - 1) > S21_EPS) {
    res = MAX_NAN;
  } else if ((x == 1) || (x == -1)) {
    res = x * S21_PI / 2;
  } else {
    long double xi = x;
    long double i = 1;
    while (s21_fabs(xi) > S21_EPS) {
      xi *= (i * i * x * x) / ((i + 1) * (i + 2));
      res += xi;
      i += 2;
    }
  }
  return res;
}