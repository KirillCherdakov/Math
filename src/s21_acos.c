#include "s21_math.h"

long double s21_acos(double x) {
  long double res = s21_asin(x);
  if (res == res) {
    res = S21_PI / 2 - res;
  }
  return res;
}