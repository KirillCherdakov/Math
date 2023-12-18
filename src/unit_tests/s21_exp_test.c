#include "s21_math_test.h"

START_TEST(exp_test1) { ck_assert_ldouble_infinite(s21_exp(MAX_INF)); }
END_TEST

START_TEST(exp_test2) {
  ck_assert_ldouble_eq_tol(s21_exp(MIN_INF), exp(MIN_INF), 1E-8);
}
END_TEST

START_TEST(exp_test3) { ck_assert_ldouble_nan(s21_exp(MAX_NAN)); }
END_TEST

START_TEST(exp_test4) { ck_assert_ldouble_nan(s21_exp(MIN_NAN)); }
END_TEST

START_TEST(exp_test5) {
  ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), 1E-15);
}
END_TEST

START_TEST(exp_test6) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.5), exp(-0.5), 1E-15);
}
END_TEST

START_TEST(exp_test7) { ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1E-15); }
END_TEST

START_TEST(exp_test8) { ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1E-15); }
END_TEST

START_TEST(exp_test9) {
  ck_assert_ldouble_eq_tol(s21_exp(1.1), exp(1.1), 1E-15);
}
END_TEST

START_TEST(exp_test10) {
  ck_assert_ldouble_eq_tol(s21_exp(-2.1), exp(-2.1), 1E-15);
}
END_TEST

START_TEST(exp_test11) { ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1E-15); }
END_TEST

START_TEST(exp_test12) {
  ck_assert_ldouble_eq_tol(s21_exp(-0), exp(-0), 1E-15);
}
END_TEST

START_TEST(exp_test13) {
  ck_assert_ldouble_eq_tol(s21_exp(5.123456789123), exp(5.123456789123), 1E-8);
}
END_TEST

START_TEST(exp_test14) {
  ck_assert_ldouble_eq_tol(s21_exp(0.00000004564897), exp(0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(exp_test15) {
  ck_assert_ldouble_eq_tol(s21_exp(20.1), exp(20.1), 1E-8);
}
END_TEST

START_TEST(exp_test16) {
  ck_assert_ldouble_eq_tol(s21_exp(-20.1), exp(-20.1), 1E-8);
}
END_TEST

START_TEST(exp_test17) { ck_assert_ldouble_eq(exp(DBL_MAX), s21_exp(DBL_MAX)); }
END_TEST

START_TEST(exp_test18) { ck_assert_ldouble_eq(exp(DBL_MIN), s21_exp(DBL_MIN)); }
END_TEST

START_TEST(exp_test19) {
  ck_assert_ldouble_eq_tol(exp(-800), s21_exp(-800), 1e-6);
}
END_TEST

Suite *exp_suite(void) {
  Suite *test_suite = suite_create("exp_suite");
  TCase *test_case = tcase_create("exp_case");

  tcase_add_test(test_case, exp_test1);
  tcase_add_test(test_case, exp_test2);
  tcase_add_test(test_case, exp_test3);
  tcase_add_test(test_case, exp_test4);
  tcase_add_test(test_case, exp_test5);
  tcase_add_test(test_case, exp_test6);
  tcase_add_test(test_case, exp_test7);
  tcase_add_test(test_case, exp_test8);
  tcase_add_test(test_case, exp_test9);
  tcase_add_test(test_case, exp_test10);
  tcase_add_test(test_case, exp_test11);
  tcase_add_test(test_case, exp_test12);
  tcase_add_test(test_case, exp_test13);
  tcase_add_test(test_case, exp_test14);
  tcase_add_test(test_case, exp_test15);
  tcase_add_test(test_case, exp_test16);
  tcase_add_test(test_case, exp_test17);
  tcase_add_test(test_case, exp_test18);
  tcase_add_test(test_case, exp_test19);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}