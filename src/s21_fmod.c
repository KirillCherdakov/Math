#include "s21_math.h"

// https://man7.org/linux/man-pages/man3/fmod.3p.html#:~:text=error%20has%20occurred.-,RETURN%20VALUE,-top
// https://en.cppreference.com/w/cpp/numeric/math/fmod#:~:text=rounding)%20is%20returned.-,Error%20handling,-Errors%20are%20reported
long double s21_fmod(double x, double y) {
  long double result;

  if (S21_IS_NAN(x) || S21_IS_NAN(y) || S21_IS_INF(x) ||
      s21_fabs(y) < S21_EPS) {
    result = MAX_NAN;
  } else if (s21_fabs(x) < S21_EPS) {
    result = 0.0;
  } else if (S21_IS_INF(y)) {
    result = (long double)x;
  } else {
    result = x - (long int)(x / y) * y;
  }

  return result;
}