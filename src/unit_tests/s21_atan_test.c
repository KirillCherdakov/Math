#include "s21_math_test.h"

START_TEST(atan_test1) { ck_assert_ldouble_nan(s21_atan(MAX_NAN)); }
END_TEST

START_TEST(atan_test2) { ck_assert_ldouble_nan(s21_atan(MIN_NAN)); }
END_TEST

START_TEST(atan_test3) {
  ck_assert_ldouble_eq_tol(s21_atan(MIN_INF), atan(MIN_INF), 1e-8);
}
END_TEST

START_TEST(atan_test4) {
  ck_assert_ldouble_eq_tol(s21_atan(MAX_INF), atan(MAX_INF), 1e-8);
}
END_TEST

START_TEST(atan_test5) {
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), 1e-8);
}
END_TEST

START_TEST(atan_test6) {
  ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), 1e-8);
}
END_TEST

START_TEST(atan_test7) {
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-8);
}
END_TEST

START_TEST(atan_test8) { ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-8); }
END_TEST

START_TEST(atan_test9) {
  ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), 1e-8);
}
END_TEST

START_TEST(atan_test10) {
  ck_assert_ldouble_eq_tol(s21_atan(-2.1), atan(-2.1), 1e-8);
}
END_TEST

START_TEST(atan_test11) {
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-15);
}
END_TEST

START_TEST(atan_test12) {
  ck_assert_ldouble_eq_tol(s21_atan(-0), atan(-0), 1e-15);
}
END_TEST

START_TEST(atan_test13) {
  ck_assert_ldouble_eq_tol(s21_atan(5.123456789123), atan(5.123456789123),
                           1e-15);
}
END_TEST

START_TEST(atan_test14) {
  ck_assert_ldouble_eq_tol(s21_atan(0.00000004564897), atan(0.00000004564897),
                           1e-15);
}
END_TEST

START_TEST(atan_test15) {
  ck_assert_ldouble_eq_tol(s21_atan(170000000000000.1), atan(170000000000000.1),
                           1e-15);
}
END_TEST

Suite *atan_suite(void) {
  Suite *test_suite = suite_create("atan_suite");
  TCase *test_case = tcase_create("atan_case");

  tcase_add_test(test_case, atan_test1);
  tcase_add_test(test_case, atan_test2);
  tcase_add_test(test_case, atan_test3);
  tcase_add_test(test_case, atan_test4);
  tcase_add_test(test_case, atan_test5);
  tcase_add_test(test_case, atan_test6);
  tcase_add_test(test_case, atan_test7);
  tcase_add_test(test_case, atan_test8);
  tcase_add_test(test_case, atan_test9);
  tcase_add_test(test_case, atan_test10);
  tcase_add_test(test_case, atan_test11);
  tcase_add_test(test_case, atan_test12);
  tcase_add_test(test_case, atan_test13);
  tcase_add_test(test_case, atan_test14);
  tcase_add_test(test_case, atan_test15);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}