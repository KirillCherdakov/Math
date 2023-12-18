#include "s21_math.h"

long double s21_fabs(double number) {
  return (long double)(number < 0 ? -number : number);
}