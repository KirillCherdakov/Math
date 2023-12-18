#include "s21_math_test.h"

START_TEST(sqrt_test1) { ck_assert_ldouble_nan(s21_sqrt(MIN_INF)); }
END_TEST

START_TEST(sqrt_test2) { ck_assert_ldouble_infinite(s21_sqrt(MAX_INF)); }
END_TEST

START_TEST(sqrt_test3) { ck_assert_ldouble_nan(s21_sqrt(MAX_NAN)); }
END_TEST

START_TEST(sqrt_test4) { ck_assert_ldouble_nan(s21_sqrt(MIN_NAN)); }
END_TEST

START_TEST(sqrt_test5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.5), sqrt(0.5), 1E-15);
}
END_TEST

START_TEST(sqrt_test6) { ck_assert_ldouble_nan(s21_sqrt(-0.5)); }
END_TEST

START_TEST(sqrt_test7) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1E-15);
}
END_TEST

START_TEST(sqrt_test8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), 1E-15);
}
END_TEST

START_TEST(sqrt_test9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1E-15);
}
END_TEST

START_TEST(sqrt_test10) {
  ck_assert_ldouble_eq_tol(s21_sqrt(-0), sqrt(-0), 1E-15);
}
END_TEST

START_TEST(sqrt_test11) {
  ck_assert_ldouble_eq_tol(s21_sqrt(5.123456789123), sqrt(5.123456789123),
                           1E-15);
}
END_TEST

START_TEST(sqrt_test12) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.00000004564897), sqrt(0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(sqrt_test13) {
  ck_assert_ldouble_eq_tol(s21_sqrt(170000000000000.1), sqrt(170000000000000.1),
                           1E-8);
}
END_TEST

Suite *sqrt_suite(void) {
  Suite *test_suite = suite_create("sqrt_suite");
  TCase *test_case = tcase_create("sqrt_case");

  tcase_add_test(test_case, sqrt_test1);
  tcase_add_test(test_case, sqrt_test2);
  tcase_add_test(test_case, sqrt_test3);
  tcase_add_test(test_case, sqrt_test4);
  tcase_add_test(test_case, sqrt_test5);
  tcase_add_test(test_case, sqrt_test6);
  tcase_add_test(test_case, sqrt_test7);
  tcase_add_test(test_case, sqrt_test8);
  tcase_add_test(test_case, sqrt_test9);
  tcase_add_test(test_case, sqrt_test10);
  tcase_add_test(test_case, sqrt_test11);
  tcase_add_test(test_case, sqrt_test12);
  tcase_add_test(test_case, sqrt_test13);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}