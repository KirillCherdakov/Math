#include "s21_math.h"

long double s21_tan(double x) {
  long double res = s21_sin(x);
  if (res == res) {
    res /= s21_cos(x);
  }
  return res;
}