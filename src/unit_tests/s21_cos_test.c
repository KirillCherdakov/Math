#include "s21_math_test.h"

START_TEST(cos_test1) { ck_assert_ldouble_nan(s21_cos(MAX_INF)); }
END_TEST

START_TEST(cos_test2) { ck_assert_ldouble_nan(s21_cos(MIN_INF)); }
END_TEST

START_TEST(cos_test3) { ck_assert_ldouble_nan(s21_cos(MAX_NAN)); }
END_TEST

START_TEST(cos_test4) { ck_assert_ldouble_nan(s21_cos(MIN_NAN)); }
END_TEST

START_TEST(cos_test5) {
  ck_assert_ldouble_eq_tol(s21_cos(0.5), cos(0.5), 1e-15);
}
END_TEST

START_TEST(cos_test6) {
  ck_assert_ldouble_eq_tol(s21_cos(-0.5), cos(-0.5), 1e-15);
}
END_TEST

START_TEST(cos_test7) { ck_assert_ldouble_eq_tol(s21_cos(-1), cos(-1), 1e-15); }
END_TEST

START_TEST(cos_test8) { ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 1e-15); }
END_TEST

START_TEST(cos_test9) {
  ck_assert_ldouble_eq_tol(s21_cos(1.1), cos(1.1), 1e-15);
}
END_TEST

START_TEST(cos_test10) {
  ck_assert_ldouble_eq_tol(s21_cos(-2.1), cos(-2.1), 1e-15);
}
END_TEST

START_TEST(cos_test11) { ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-15); }
END_TEST

START_TEST(cos_test12) {
  ck_assert_ldouble_eq_tol(s21_cos(-0), cos(-0), 1e-15);
}
END_TEST

START_TEST(cos_test13) {
  ck_assert_ldouble_eq_tol(s21_cos(5.123456789123), cos(5.123456789123), 1e-15);
}
END_TEST

START_TEST(cos_test14) {
  ck_assert_ldouble_eq_tol(s21_cos(0.00000004564897), cos(0.00000004564897),
                           1e-15);
}
END_TEST

START_TEST(cos_test15) {
  ck_assert_ldouble_eq_tol(s21_cos(17000000000.1), cos(17000000000.1), 1e-7);
}
END_TEST

Suite *cos_suite(void) {
  Suite *test_suite = suite_create("cos_suite");
  TCase *test_case = tcase_create("cos_case");

  tcase_add_test(test_case, cos_test1);
  tcase_add_test(test_case, cos_test2);
  tcase_add_test(test_case, cos_test3);
  tcase_add_test(test_case, cos_test4);
  tcase_add_test(test_case, cos_test5);
  tcase_add_test(test_case, cos_test6);
  tcase_add_test(test_case, cos_test7);
  tcase_add_test(test_case, cos_test8);
  tcase_add_test(test_case, cos_test9);
  tcase_add_test(test_case, cos_test10);
  tcase_add_test(test_case, cos_test11);
  tcase_add_test(test_case, cos_test12);
  tcase_add_test(test_case, cos_test13);
  tcase_add_test(test_case, cos_test14);
  tcase_add_test(test_case, cos_test15);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}