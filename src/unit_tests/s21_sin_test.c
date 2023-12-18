#include "s21_math_test.h"

START_TEST(sin_test1) { ck_assert_ldouble_nan(s21_sin(MAX_INF)); }
END_TEST

START_TEST(sin_test2) { ck_assert_ldouble_nan(s21_sin(MIN_INF)); }
END_TEST

START_TEST(sin_test3) { ck_assert_ldouble_nan(s21_sin(MAX_NAN)); }
END_TEST

START_TEST(sin_test4) { ck_assert_ldouble_nan(s21_sin(MIN_NAN)); }
END_TEST

START_TEST(sin_test5) {
  ck_assert_ldouble_eq_tol(s21_sin(0.5), sin(0.5), 1E-15);
}
END_TEST

START_TEST(sin_test6) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.5), sin(-0.5), 1E-15);
}
END_TEST

START_TEST(sin_test7) { ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), 1E-15); }
END_TEST

START_TEST(sin_test8) { ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), 1E-15); }
END_TEST

START_TEST(sin_test9) {
  ck_assert_ldouble_eq_tol(s21_sin(1.1), sin(1.1), 1E-15);
}
END_TEST

START_TEST(sin_test10) {
  ck_assert_ldouble_eq_tol(s21_sin(-2.1), sin(-2.1), 1E-15);
}
END_TEST

START_TEST(sin_test11) { ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1E-15); }
END_TEST

START_TEST(sin_test12) {
  ck_assert_ldouble_eq_tol(s21_sin(-0), sin(-0), 1E-15);
}
END_TEST

START_TEST(sin_test13) {
  ck_assert_ldouble_eq_tol(s21_sin(5.123456789123), sin(5.123456789123), 1E-15);
}
END_TEST

START_TEST(sin_test14) {
  ck_assert_ldouble_eq_tol(s21_sin(0.00000004564897), sin(0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(sin_test15) {
  ck_assert_ldouble_eq_tol(s21_sin(17000000000.1), sin(17000000000.1), 1E-6);
}
END_TEST

Suite *sin_suite(void) {
  Suite *test_suite = suite_create("sin_suite");
  TCase *test_case = tcase_create("sin_case");

  tcase_add_test(test_case, sin_test1);
  tcase_add_test(test_case, sin_test2);
  tcase_add_test(test_case, sin_test3);
  tcase_add_test(test_case, sin_test4);
  tcase_add_test(test_case, sin_test5);
  tcase_add_test(test_case, sin_test6);
  tcase_add_test(test_case, sin_test7);
  tcase_add_test(test_case, sin_test8);
  tcase_add_test(test_case, sin_test9);
  tcase_add_test(test_case, sin_test10);
  tcase_add_test(test_case, sin_test11);
  tcase_add_test(test_case, sin_test12);
  tcase_add_test(test_case, sin_test13);
  tcase_add_test(test_case, sin_test14);
  tcase_add_test(test_case, sin_test15);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}