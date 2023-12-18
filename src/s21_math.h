#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>   // DBL_MAX / DBL_MIN
#include <limits.h>  // INT_MAX / INT_MIN
#include <stdbool.h>

#define S21_E 2.718281828459045
#define S21_PI 3.141592653589793
#define MAX_INF 1.0 / 0.0
#define MIN_INF -1.0 / 0.0
#define MAX_NAN 0.0 / 0.0
#define MIN_NAN -0.0 / 0.0
#define S21_EPS 1.0E-17
#define S21_IS_NAN(value) (value != value)
#define S21_IS_INF(value) (value == MAX_INF || value == MIN_INF)

int s21_abs(int number);
long double s21_fabs(double number);
long double s21_sqrt(double number);
long double s21_exp(double exp);
long double s21_log(double number);
long double s21_fmod(double x, double y);
long double s21_pow(double base, double exp);
long double s21_floor(double number);
long double s21_ceil(double number);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);

#endif  // SRC_S21_MATH_H_