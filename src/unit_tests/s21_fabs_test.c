#include "s21_math_test.h"

START_TEST(fabs_test1) { ck_assert_ldouble_infinite(s21_fabs(MIN_INF)); }
END_TEST

START_TEST(fabs_test2) { ck_assert_ldouble_infinite(s21_fabs(MAX_INF)); }
END_TEST

START_TEST(fabs_test3) { ck_assert_ldouble_nan(s21_fabs(MAX_NAN)); }
END_TEST

START_TEST(fabs_test4) { ck_assert_ldouble_nan(s21_fabs(MIN_NAN)); }
END_TEST

START_TEST(fabs_test5) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.5), fabs(0.5), 1E-15);
}
END_TEST

START_TEST(fabs_test6) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.5), fabs(-0.5), 1E-15);
}
END_TEST

START_TEST(fabs_test7) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.0), fabs(-1.0), 1E-15);
}
END_TEST

START_TEST(fabs_test8) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.0), fabs(1.0), 1E-15);
}
END_TEST

START_TEST(fabs_test9) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 1E-15);
}
END_TEST

START_TEST(fabs_test10) {
  ck_assert_ldouble_eq_tol(s21_fabs(-2.1), fabs(-2.1), 1E-15);
}
END_TEST

START_TEST(fabs_test11) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1E-15);
}
END_TEST

START_TEST(fabs_test12) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.0), fabs(-0.0), 1E-15);
}
END_TEST

START_TEST(fabs_test13) {
  ck_assert_ldouble_eq_tol(s21_fabs(5.123456789123), fabs(5.123456789123),
                           1E-15);
}
END_TEST

START_TEST(fabs_test14) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.00000004564897), fabs(0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(fabs_test15) {
  ck_assert_ldouble_eq_tol(s21_fabs(170000000000000.1), fabs(170000000000000.1),
                           1E-15);
}
END_TEST

START_TEST(fabs_test16) {
  ck_assert_ldouble_eq_tol(s21_fabs(-5.123456789123), fabs(-5.123456789123),
                           1E-15);
}
END_TEST

START_TEST(fabs_test17) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.00000004564897), fabs(-0.00000004564897),
                           1E-15);
}
END_TEST

START_TEST(fabs_test18) {
  ck_assert_ldouble_eq_tol(s21_fabs(-170000000000000.1),
                           fabs(-170000000000000.1), 1E-15);
}
END_TEST

Suite *fabs_suite(void) {
  Suite *test_suite = suite_create("fabs_suite");
  TCase *test_case = tcase_create("fabs_case");

  tcase_add_test(test_case, fabs_test1);
  tcase_add_test(test_case, fabs_test2);
  tcase_add_test(test_case, fabs_test3);
  tcase_add_test(test_case, fabs_test4);
  tcase_add_test(test_case, fabs_test5);
  tcase_add_test(test_case, fabs_test6);
  tcase_add_test(test_case, fabs_test7);
  tcase_add_test(test_case, fabs_test8);
  tcase_add_test(test_case, fabs_test9);
  tcase_add_test(test_case, fabs_test10);
  tcase_add_test(test_case, fabs_test11);
  tcase_add_test(test_case, fabs_test12);
  tcase_add_test(test_case, fabs_test13);
  tcase_add_test(test_case, fabs_test14);
  tcase_add_test(test_case, fabs_test15);
  tcase_add_test(test_case, fabs_test16);
  tcase_add_test(test_case, fabs_test17);
  tcase_add_test(test_case, fabs_test18);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}