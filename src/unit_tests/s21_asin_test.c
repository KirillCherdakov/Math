#include "s21_math_test.h"

START_TEST(asin_test1) { ck_assert_ldouble_nan(s21_asin(MAX_INF)); }
END_TEST

START_TEST(asin_test2) { ck_assert_ldouble_nan(s21_asin(MIN_INF)); }
END_TEST

START_TEST(asin_test3) { ck_assert_ldouble_nan(s21_asin(MAX_NAN)); }
END_TEST

START_TEST(asin_test4) { ck_assert_ldouble_nan(s21_asin(MIN_NAN)); }
END_TEST

START_TEST(asin_test5) {
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-8);
}
END_TEST

START_TEST(asin_test6) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-8);
}
END_TEST

START_TEST(asin_test7) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-15);
}
END_TEST

START_TEST(asin_test8) {
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-15);
}
END_TEST

START_TEST(asin_test9) { ck_assert_ldouble_nan(s21_asin(1.1)); }
END_TEST

START_TEST(asin_test10) {
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-15);
}
END_TEST

START_TEST(asin_test11) {
  ck_assert_ldouble_eq_tol(s21_asin(-0), asin(-0), 1e-15);
}
END_TEST

START_TEST(asin_test12) {
  ck_assert_ldouble_eq_tol(s21_asin(0.00000004564897), asin(0.00000004564897),
                           1e-15);
}
END_TEST

Suite *asin_suite(void) {
  Suite *test_suite = suite_create("asin_suite");
  TCase *test_case = tcase_create("asin_case");

  tcase_add_test(test_case, asin_test1);
  tcase_add_test(test_case, asin_test2);
  tcase_add_test(test_case, asin_test3);
  tcase_add_test(test_case, asin_test4);
  tcase_add_test(test_case, asin_test5);
  tcase_add_test(test_case, asin_test6);
  tcase_add_test(test_case, asin_test7);
  tcase_add_test(test_case, asin_test8);
  tcase_add_test(test_case, asin_test9);
  tcase_add_test(test_case, asin_test10);
  tcase_add_test(test_case, asin_test11);
  tcase_add_test(test_case, asin_test12);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}