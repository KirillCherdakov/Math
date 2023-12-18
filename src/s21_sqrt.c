#include "s21_math.h"

// https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Heron's_method
// https://en.cppreference.com/w/cpp/numeric/math/sqrt#:~:text=rounding)%20is%20returned.-,Error%20handling,-Errors%20are%20reported
long double s21_sqrt(double number) {
  long double x_n, x_n1 = 1.0;

  if (number < 0 || S21_IS_NAN(number)) {
    x_n1 = MAX_NAN;
  } else if (S21_IS_INF(number)) {
    x_n1 = MAX_INF;
  } else {
    do {
      x_n = x_n1;
      x_n1 = (x_n + number / x_n) / 2;
    } while (s21_fabs(x_n1 - x_n) >= S21_EPS);
  }

  return x_n1;
}