#include "s21_math_test.h"

START_TEST(ceil_test1) {
  ck_assert_ldouble_eq(s21_ceil(MAX_INF), ceil(MAX_INF));
}
END_TEST

START_TEST(ceil_test2) {
  ck_assert_ldouble_eq(s21_ceil(MIN_INF), ceil(MIN_INF));
}
END_TEST

START_TEST(ceil_test3) { ck_assert_ldouble_nan(s21_ceil(MAX_NAN)); }
END_TEST

START_TEST(ceil_test4) { ck_assert_ldouble_nan(s21_ceil(MIN_NAN)); }
END_TEST

START_TEST(ceil_test5) {
  ck_assert_ldouble_eq(s21_ceil(INT_MAX + 34.654654),
                       ceil(INT_MAX + 34.654654));
}
END_TEST

START_TEST(ceil_test6) {
  ck_assert_ldouble_eq(s21_ceil(INT_MIN - 12.98801), ceil(INT_MIN - 12.98801));
}
END_TEST

START_TEST(ceil_test7) { ck_assert_ldouble_eq(s21_ceil(-0.45), ceil(-0.45)); }
END_TEST

START_TEST(ceil_test8) { ck_assert_ldouble_eq(s21_ceil(0.45), ceil(0.45)); }
END_TEST

START_TEST(ceil_test9) {
  ck_assert_ldouble_eq(s21_ceil(-0.00000000000000045),
                       ceil(-0.00000000000000045));
}
END_TEST

Suite *ceil_suite(void) {
  Suite *test_suite = suite_create("ceil_suite");
  TCase *test_case = tcase_create("ceil_case");

  tcase_add_test(test_case, ceil_test1);
  tcase_add_test(test_case, ceil_test2);
  tcase_add_test(test_case, ceil_test3);
  tcase_add_test(test_case, ceil_test4);
  tcase_add_test(test_case, ceil_test5);
  tcase_add_test(test_case, ceil_test6);
  tcase_add_test(test_case, ceil_test7);
  tcase_add_test(test_case, ceil_test8);
  tcase_add_test(test_case, ceil_test9);

  suite_add_tcase(test_suite, test_case);

  return test_suite;
}