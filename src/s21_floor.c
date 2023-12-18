#include "s21_math.h"

// https://en.cppreference.com/w/cpp/numeric/math/floor#:~:text=num-,Error%20handling,-Errors%20are%20reported
long double s21_floor(double number) {
  long double result;

  if (S21_IS_INF(number) || S21_IS_NAN(number)) {
    result = number;
  } else {
    result = (long long int)number;
    if (s21_fabs(number - result) > 0.0 && s21_fabs(number) > 0.0 &&
        number != result) {
      if (number < 0.0) {
        --result;
      }
    }
  }

  return result;
}