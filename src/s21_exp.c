#include "s21_math.h"

// https://en.cppreference.com/w/cpp/numeric/math/exp#:~:text=rounding)%20is%20returned.-,Error%20handling,-Errors%20are%20reported
long double s21_exp(double exp) {
  long double result = 1.0;
  long double member_of_series = 1.0;

  if (S21_IS_NAN(exp)) {
    result = MAX_NAN;
  } else if (exp == MAX_INF || exp > 709.782712893) {
    result = MAX_INF;
  } else if (exp == MIN_INF || exp < -708.39) {
    result = 0.0;
  } else {
    int exponent_sign = (exp >= 0 ? true : false);
    exp = (exponent_sign ? exp : s21_fabs(exp));

    for (long double counter = 1.0; s21_fabs(member_of_series) > S21_EPS;
         member_of_series *= exp / counter++, result += member_of_series) {
      if (result >= DBL_MAX) {
        result = MAX_INF;
        break;
      }
    }

    if (!exponent_sign) {
      result = (result == MAX_INF ? 0.0 : 1.0 / result);
    }
  }

  return result;
}