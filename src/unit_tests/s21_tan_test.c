#include "s21_math_test.h"

START_TEST(tan_test1) { ck_assert_ldouble_nan(s21_cos(MAX_INF)); }
END_TEST

START_TEST(tan_test2) { ck_assert_ldouble_nan(s21_cos(MIN_INF)); }
END_TEST

START_TEST(tan_test3) { ck_assert_ldouble_nan(s21_cos(MAX_NAN)); }
END_TEST

START_TEST(tan_test4) { ck_assert_ldouble_nan(s21_cos(MIN_NAN)); }
END_TEST

START_TEST(tan_test5) {
  ck_assert_ldouble_eq_tol(s21_tan(0.5), tan(0.5), 1e-15);
}
END_TEST

START_TEST(tan_test6) {
  ck_assert_ldouble_eq_tol(s21_tan(-0.5), tan(-0.5), 1e-15);
}
END_TEST

START_TEST(tan_test7) { ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-15); }
END_TEST

START_TEST(tan_test8) { ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), 1e-15); }
END_TEST

START_TEST(tan_test9) {
  ck_assert_ldouble_eq_tol(s21_tan(1.1), tan(1.1), 1e-15);
}
END_TEST

START_TEST(tan_test10) {
  ck_assert_ldouble_eq_tol(s21_tan(-2.1), tan(-2.1), 1e-8);
}
END_TEST

START_TEST(tan_test11) { ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-15); }
END_TEST

START_TEST(tan_test12) {
  ck_assert_ldouble_eq_tol(s21_tan(-0), tan(-0), 1e-15);
}
END_TEST

START_TEST(tan_test13) {
  ck_assert_ldouble_eq_tol(s21_tan(5.123456789123), tan(5.123456789123), 1e-15);
}
END_TEST

START_TEST(tan_test14) {
  ck_assert_ldouble_eq_tol(s21_tan(0.00000004564897), tan(0.00000004564897),
                           1e-15);
}
END_TEST

START_TEST(tan_test15) {
  ck_assert_ldouble_eq_tol(s21_tan(170000000.1), tan(170000000.1), 1e-7);
}
END_TEST

Suite *tan_suite(void) {
  Suite *test_suite = suite_create("tan_suite");
  TCase *test_case = tcase_create("tan_case");

  tcase_add_test(test_case, tan_test1);
  tcase_add_test(test_case, tan_test2);
  tcase_add_test(test_case, tan_test3);
  tcase_add_test(test_case, tan_test4);
  tcase_add_test(test_case, tan_test5);
  tcase_add_test(test_case, tan_test6);
  tcase_add_test(test_case, tan_test7);
  tcase_add_test(test_case, tan_test8);
  tcase_add_test(test_case, tan_test9);
  tcase_add_test(test_case, tan_test10);
  tcase_add_test(test_case, tan_test11);
  tcase_add_test(test_case, tan_test12);
  tcase_add_test(test_case, tan_test13);
  tcase_add_test(test_case, tan_test14);
  tcase_add_test(test_case, tan_test15);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}