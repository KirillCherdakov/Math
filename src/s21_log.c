#include "s21_math.h"

// https://ru.wikibrief.org/wiki/Natural_logarithm#:~:text=.-,%D0%92%D1%8B%D1%81%D0%BE%D0%BA%D0%B0%D1%8F%20%D1%82%D0%BE%D1%87%D0%BD%D0%BE%D1%81%D1%82%D1%8C,-%D0%94%D0%BB%D1%8F%20%D0%B2%D1%8B%D1%87%D0%B8%D1%81%D0%BB%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BD%D0%B0%D1%82%D1%83%D1%80%D0%B0%D0%BB%D1%8C%D0%BD%D0%BE%D0%B3%D0%BE
// https://en.cppreference.com/w/cpp/numeric/math/log#:~:text=HUGE_VALL%20is%20returned.-,Error%20handling,-Errors%20are%20reported
long double s21_log(double number) {
  int ex_pow = 0;
  double result = 0;
  double compare = 0;

  if (number < 0 || S21_IS_NAN(number) || number == MIN_INF) {
    result = MAX_NAN;
  } else if (number == 0.0) {
    result = MIN_INF;
  } else if (number == MAX_INF) {
    result = MAX_INF;
  } else {
    for (; number >= S21_E; number /= S21_E, ex_pow++)
      ;

    for (int i = 0; i <= 100; ++i) {
      compare = result;
      result = compare +
               2 * (number - s21_exp(compare)) / (number + s21_exp(compare));
    }
  }

  return (result + ex_pow);
}