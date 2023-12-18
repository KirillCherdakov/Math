#include "s21_math_test.h"

START_TEST(pow_test1) {
  ck_assert_ldouble_eq(s21_pow(MAX_INF, MAX_INF), pow(MAX_INF, MAX_INF));
}
END_TEST

START_TEST(pow_test2) {
  ck_assert_ldouble_eq_tol(s21_pow(MAX_INF, MIN_INF), pow(MAX_INF, MIN_INF),
                           1E-8);
}
END_TEST

START_TEST(pow_test3) { ck_assert_ldouble_nan(s21_pow(MAX_INF, MAX_NAN)); }
END_TEST

START_TEST(pow_test4) { ck_assert_ldouble_nan(s21_pow(MAX_INF, MIN_NAN)); }
END_TEST

START_TEST(pow_test5) {
  ck_assert_ldouble_eq(s21_pow(MIN_INF, MAX_INF), pow(MIN_INF, MAX_INF));
}
END_TEST

START_TEST(pow_test6) {
  ck_assert_ldouble_eq_tol(s21_pow(MIN_INF, MIN_INF), pow(MIN_INF, MIN_INF),
                           1E-8);
}
END_TEST

START_TEST(pow_test7) { ck_assert_ldouble_nan(s21_pow(MIN_INF, MAX_NAN)); }
END_TEST

START_TEST(pow_test8) { ck_assert_ldouble_nan(s21_pow(MIN_INF, MIN_NAN)); }
END_TEST

START_TEST(pow_test9) { ck_assert_ldouble_nan(s21_pow(MAX_NAN, MAX_INF)); }
END_TEST

START_TEST(pow_test10) { ck_assert_ldouble_nan(s21_pow(MAX_NAN, MIN_INF)); }
END_TEST

START_TEST(pow_test11) { ck_assert_ldouble_nan(s21_pow(MAX_NAN, MAX_NAN)); }
END_TEST

START_TEST(pow_test12) { ck_assert_ldouble_nan(s21_pow(MAX_NAN, MIN_NAN)); }
END_TEST

START_TEST(pow_test13) { ck_assert_ldouble_nan(s21_pow(MIN_NAN, MAX_INF)); }
END_TEST

START_TEST(pow_test14) { ck_assert_ldouble_nan(s21_pow(MIN_NAN, MIN_INF)); }
END_TEST

START_TEST(pow_test15) { ck_assert_ldouble_nan(s21_pow(MIN_NAN, MAX_NAN)); }
END_TEST

START_TEST(pow_test16) { ck_assert_ldouble_nan(s21_pow(MIN_NAN, MIN_NAN)); }
END_TEST

START_TEST(pow_test17) { ck_assert_ldouble_infinite(s21_pow(MAX_INF, 2.4)); }
END_TEST

START_TEST(pow_test18) { ck_assert_ldouble_infinite(s21_pow(MIN_INF, 2.4)); }
END_TEST

START_TEST(pow_test19) { ck_assert_ldouble_nan(s21_pow(MAX_NAN, 2.4)); }
END_TEST

START_TEST(pow_test20) { ck_assert_ldouble_nan(s21_pow(MIN_NAN, 2.4)); }
END_TEST

START_TEST(pow_test21) { ck_assert_ldouble_infinite(s21_pow(2.4, MAX_INF)); }
END_TEST

START_TEST(pow_test22) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, MIN_INF), pow(2.4, MIN_INF), 1E-8);
}
END_TEST

START_TEST(pow_test23) { ck_assert_ldouble_nan(s21_pow(2.4, MAX_NAN)); }
END_TEST

START_TEST(pow_test24) { ck_assert_ldouble_nan(s21_pow(2.4, MIN_NAN)); }
END_TEST

START_TEST(pow_test25) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 2.4), pow(0, 2.4), 1E-8);
}
END_TEST

START_TEST(pow_test26) {
  ck_assert_ldouble_eq_tol(s21_pow(-0, 2.4), pow(-0, 2.4), 1E-8);
}
END_TEST

START_TEST(pow_test27) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 0), pow(2.4, 0), 1E-8);
}
END_TEST

START_TEST(pow_test28) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -0), pow(2.4, -0), 1E-8);
}
END_TEST

START_TEST(pow_test29) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 0.5), pow(2.4, 0.5), 1E-8);
}
END_TEST

START_TEST(pow_test30) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -0.5), pow(2.4, -0.5), 1E-8);
}
END_TEST

START_TEST(pow_test31) { ck_assert_ldouble_nan(s21_pow(-2.4, 0.5)); }
END_TEST

START_TEST(pow_test32) { ck_assert_ldouble_nan(s21_pow(-2.4, -0.5)); }
END_TEST

START_TEST(pow_test33) { ck_assert_ldouble_nan(s21_pow(-2.4, 2.1)); }
END_TEST

START_TEST(pow_test34) { ck_assert_ldouble_nan(s21_pow(-2.4, -2.1)); }
END_TEST

START_TEST(pow_test35) {
  ck_assert_ldouble_eq_tol(s21_pow(-2.4, 2), pow(-2.4, 2), 1E-8);
}
END_TEST

START_TEST(pow_test36) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 2), pow(2.4, 2), 1E-8);
}
END_TEST

START_TEST(pow_test37) {
  ck_assert_ldouble_eq_tol(s21_pow(-2.4, -1), pow(-2.4, -1), 1E-8);
}
END_TEST

START_TEST(pow_test38) { ck_assert_ldouble_nan(s21_pow(-2.4, -1.2)); }
END_TEST

START_TEST(pow_test39) { ck_assert_ldouble_nan(s21_pow(-2.4, -0.4)); }
END_TEST

START_TEST(pow_test40) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 1), pow(2.4, 1), 1E-8);
}
END_TEST

START_TEST(pow_test41) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, 3), pow(2.4, 3), 1E-8);
}
END_TEST

START_TEST(pow_test42) {
  ck_assert_ldouble_eq_tol(s21_pow(2.4, -3), pow(2.4, -3), 1E-8);
}
END_TEST

START_TEST(pow_test43) {
  ck_assert_ldouble_eq_tol(s21_pow(666666.4, 1.5), pow(666666.4, 1.5), 1e-6);
}
END_TEST

START_TEST(pow_test44) {
  ck_assert_ldouble_eq_tol(s21_pow(666666.4, -1.5), pow(666666.4, -1.5), 1E-8);
}
END_TEST

START_TEST(pow_test45) {
  ck_assert_ldouble_eq_tol(s21_pow(3.3, 13.2), pow(3.3, 13.2), 1e-6);
}
END_TEST

START_TEST(pow_test46) {
  ck_assert_ldouble_eq_tol(s21_pow(3.3, -24.2), pow(3.3, -24.2), 1E-8);
}
END_TEST

START_TEST(pow_test47) { ck_assert_ldouble_nan(s21_pow(-3.3, -24.2)); }
END_TEST

START_TEST(pow_test48) {
  ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 24.2),
                           pow(0.0000000005543, 24.2), 1E-8);
}
END_TEST

START_TEST(pow_test49) {
  ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 0.00000003),
                           pow(0.0000000005543, 0.00000003), 1E-8);
}
END_TEST

START_TEST(pow_test50) {
  ck_assert_ldouble_eq(s21_pow(-0.0, -3), pow(-0.0, -3));
}
END_TEST

START_TEST(pow_test51) {
  ck_assert_ldouble_eq(s21_pow(-1.0, 1 / 3), pow(-1, 1 / 3));
}
END_TEST

Suite *pow_suite(void) {
  Suite *test_suite = suite_create("pow_suite");
  TCase *test_case = tcase_create("pow_case");

  tcase_add_test(test_case, pow_test1);
  tcase_add_test(test_case, pow_test2);
  tcase_add_test(test_case, pow_test3);
  tcase_add_test(test_case, pow_test4);
  tcase_add_test(test_case, pow_test5);
  tcase_add_test(test_case, pow_test6);
  tcase_add_test(test_case, pow_test7);
  tcase_add_test(test_case, pow_test8);
  tcase_add_test(test_case, pow_test9);
  tcase_add_test(test_case, pow_test10);
  tcase_add_test(test_case, pow_test11);
  tcase_add_test(test_case, pow_test12);
  tcase_add_test(test_case, pow_test13);
  tcase_add_test(test_case, pow_test14);
  tcase_add_test(test_case, pow_test15);
  tcase_add_test(test_case, pow_test16);
  tcase_add_test(test_case, pow_test17);
  tcase_add_test(test_case, pow_test18);
  tcase_add_test(test_case, pow_test19);
  tcase_add_test(test_case, pow_test20);
  tcase_add_test(test_case, pow_test21);
  tcase_add_test(test_case, pow_test22);
  tcase_add_test(test_case, pow_test23);
  tcase_add_test(test_case, pow_test24);
  tcase_add_test(test_case, pow_test25);
  tcase_add_test(test_case, pow_test26);
  tcase_add_test(test_case, pow_test27);
  tcase_add_test(test_case, pow_test28);
  tcase_add_test(test_case, pow_test29);
  tcase_add_test(test_case, pow_test30);
  tcase_add_test(test_case, pow_test31);
  tcase_add_test(test_case, pow_test32);
  tcase_add_test(test_case, pow_test33);
  tcase_add_test(test_case, pow_test34);
  tcase_add_test(test_case, pow_test35);
  tcase_add_test(test_case, pow_test36);
  tcase_add_test(test_case, pow_test37);
  tcase_add_test(test_case, pow_test38);
  tcase_add_test(test_case, pow_test39);
  tcase_add_test(test_case, pow_test40);
  tcase_add_test(test_case, pow_test41);
  tcase_add_test(test_case, pow_test42);
  tcase_add_test(test_case, pow_test43);
  tcase_add_test(test_case, pow_test44);
  tcase_add_test(test_case, pow_test45);
  tcase_add_test(test_case, pow_test46);
  tcase_add_test(test_case, pow_test47);
  tcase_add_test(test_case, pow_test48);
  tcase_add_test(test_case, pow_test49);
  tcase_add_test(test_case, pow_test50);
  tcase_add_test(test_case, pow_test51);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}