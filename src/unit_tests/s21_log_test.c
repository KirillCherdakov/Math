#include "s21_math_test.h"

START_TEST(log_test1) { ck_assert_ldouble_infinite(s21_log(MAX_INF)); }
END_TEST

START_TEST(log_test2) { ck_assert_ldouble_nan(s21_log(MIN_INF)); }
END_TEST

START_TEST(log_test3) { ck_assert_ldouble_nan(s21_log(MAX_NAN)); }
END_TEST

START_TEST(log_test4) { ck_assert_ldouble_nan(s21_log(MIN_NAN)); }
END_TEST

START_TEST(log_test5) {
  ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1E-15);
}
END_TEST

START_TEST(log_test6) { ck_assert_ldouble_nan(s21_log(-0.5)); }
END_TEST

START_TEST(log_test7) { ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1E-15); }
END_TEST

START_TEST(log_test8) {
  ck_assert_ldouble_eq_tol(s21_log(1.1), log(1.1), 1E-15);
}
END_TEST

START_TEST(log_test9) { ck_assert_ldouble_infinite(s21_log(0)); }
END_TEST

START_TEST(log_test10) { ck_assert_ldouble_infinite(s21_log(-0)); }
END_TEST

START_TEST(log_test11) {
  ck_assert_ldouble_eq_tol(s21_log(5.123456789123), log(5.123456789123), 1E-15);
}
END_TEST

START_TEST(log_test12) {
  ck_assert_ldouble_eq_tol(s21_log(0.00000004564897), log(0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(log_test13) {
  ck_assert_ldouble_eq_tol(s21_log(170000000000000.1), log(170000000000000.1),
                           1E-8);
}
END_TEST

Suite *log_suite(void) {
  Suite *test_suite = suite_create("log_suite");
  TCase *test_case = tcase_create("log_case");

  tcase_add_test(test_case, log_test1);
  tcase_add_test(test_case, log_test2);
  tcase_add_test(test_case, log_test3);
  tcase_add_test(test_case, log_test4);
  tcase_add_test(test_case, log_test5);
  tcase_add_test(test_case, log_test6);
  tcase_add_test(test_case, log_test7);
  tcase_add_test(test_case, log_test8);
  tcase_add_test(test_case, log_test9);
  tcase_add_test(test_case, log_test10);
  tcase_add_test(test_case, log_test11);
  tcase_add_test(test_case, log_test12);
  tcase_add_test(test_case, log_test13);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}