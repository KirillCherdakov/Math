#include "s21_math.h"

// https://en.cppreference.com/w/cpp/numeric/math/pow#:~:text=rounding)%20is%20returned.-,Error%20handling,-Errors%20are%20reported
long double s21_pow(double base, double exp) {
  long double result = 0.0;

  if (((int)exp == exp) && (s21_fmod(exp, 2.0) != 0) &&
      ((base == -0 && exp < 0) || (base == MIN_INF && exp > 0))) {
    result = MIN_INF;
  } else if ((s21_fabs(base) < 1 && exp == MIN_INF) ||
             (s21_fabs(base) > 1 && exp == MAX_INF) ||
             (base == MIN_INF &&
              (exp > 0 && (((int)exp != exp) || (s21_fmod(exp, 2.0) == 0)))) ||
             (base == MAX_INF && exp > 0) ||
             (exp == MIN_INF && (base == 0.0 || base == -0.0)) ||
             (((base == 0.0 && exp < 0 && ((int)exp == exp))) &&
              (s21_fmod(exp, 2.0) != 0))) {
    result = MAX_INF;
  } else if ((base == 0 && exp > 0) || (base == MIN_INF && exp < 0) ||
             (s21_fabs(base) > 1 && exp == MIN_INF) ||
             (s21_fabs(base) < 1 && S21_IS_INF(exp)) ||
             (base == MIN_INF && (exp < 0 && (int)exp % 2 == 0))) {
    result = 0;
  } else if (base == 1 || exp == 0 || exp == -0 ||
             (base == -1 && (S21_IS_INF(exp)))) {
    result = 1;
  } else if ((base < 0 && ((int)exp != exp)) ||
             (S21_IS_NAN(base) || S21_IS_NAN(base))) {
    result = MAX_NAN;
  } else {
    if (base < 0) {
      base = -base;
      result = s21_exp(exp * s21_log(base));
      result = s21_fmod(exp, 2) != 0 ? -result : result;
    } else
      result = s21_exp(exp * s21_log(base));
  }

  return result;
}