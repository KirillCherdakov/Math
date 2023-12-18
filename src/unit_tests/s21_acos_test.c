#include "s21_math_test.h"

START_TEST(acos_test1) { ck_assert_ldouble_nan(s21_acos(MAX_INF)); }
END_TEST

START_TEST(acos_test2) { ck_assert_ldouble_nan(s21_acos(MIN_INF)); }
END_TEST

START_TEST(acos_test3) { ck_assert_ldouble_nan(s21_acos(MAX_NAN)); }
END_TEST

START_TEST(acos_test4) { ck_assert_ldouble_nan(s21_acos(MIN_NAN)); }
END_TEST

START_TEST(acos_test5) {
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-8);
}
END_TEST

START_TEST(acos_test6) {
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-8);
}
END_TEST

START_TEST(acos_test7) {
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-15);
}
END_TEST

START_TEST(acos_test8) {
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-15);
}
END_TEST

START_TEST(acos_test9) { ck_assert_ldouble_nan(s21_acos(1.1)); }
END_TEST

START_TEST(acos_test10) {
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-15);
}
END_TEST

START_TEST(acos_test11) {
  ck_assert_ldouble_eq_tol(s21_acos(-0), acos(-0), 1e-15);
}
END_TEST

START_TEST(acos_test12) {
  ck_assert_ldouble_eq_tol(s21_acos(0.00000004564897), acos(0.00000004564897),
                           1e-15);
}
END_TEST

Suite *acos_suite(void) {
  Suite *test_suite = suite_create("acos_suite");
  TCase *test_case = tcase_create("acos_case");

  tcase_add_test(test_case, acos_test1);
  tcase_add_test(test_case, acos_test2);
  tcase_add_test(test_case, acos_test3);
  tcase_add_test(test_case, acos_test4);
  tcase_add_test(test_case, acos_test5);
  tcase_add_test(test_case, acos_test6);
  tcase_add_test(test_case, acos_test7);
  tcase_add_test(test_case, acos_test8);
  tcase_add_test(test_case, acos_test9);
  tcase_add_test(test_case, acos_test10);
  tcase_add_test(test_case, acos_test11);
  tcase_add_test(test_case, acos_test12);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}