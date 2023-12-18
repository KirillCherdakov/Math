#include "s21_math_test.h"

START_TEST(fmod_test1) { ck_assert_ldouble_nan(s21_fmod(MAX_INF, MAX_INF)); }
END_TEST

START_TEST(fmod_test2) { ck_assert_ldouble_nan(s21_fmod(MAX_INF, MIN_INF)); }
END_TEST

START_TEST(fmod_test3) { ck_assert_ldouble_nan(s21_fmod(MAX_INF, MAX_NAN)); }
END_TEST

START_TEST(fmod_test4) { ck_assert_ldouble_nan(s21_fmod(MAX_INF, MIN_NAN)); }
END_TEST

START_TEST(fmod_test5) { ck_assert_ldouble_nan(s21_fmod(MIN_INF, MAX_INF)); }
END_TEST

START_TEST(fmod_test6) { ck_assert_ldouble_nan(s21_fmod(MIN_INF, MIN_INF)); }
END_TEST

START_TEST(fmod_test7) { ck_assert_ldouble_nan(s21_fmod(MIN_INF, MAX_NAN)); }
END_TEST

START_TEST(fmod_test8) { ck_assert_ldouble_nan(s21_fmod(MIN_INF, MIN_NAN)); }
END_TEST

START_TEST(fmod_test9) { ck_assert_ldouble_nan(s21_fmod(MAX_NAN, MAX_INF)); }
END_TEST

START_TEST(fmod_test10) { ck_assert_ldouble_nan(s21_fmod(MAX_NAN, MIN_INF)); }
END_TEST

START_TEST(fmod_test11) { ck_assert_ldouble_nan(s21_fmod(MAX_NAN, MAX_NAN)); }
END_TEST

START_TEST(fmod_test12) { ck_assert_ldouble_nan(s21_fmod(MAX_NAN, MIN_NAN)); }
END_TEST

START_TEST(fmod_test13) { ck_assert_ldouble_nan(s21_fmod(MIN_NAN, MAX_INF)); }
END_TEST

START_TEST(fmod_test14) { ck_assert_ldouble_nan(s21_fmod(MIN_NAN, MIN_INF)); }
END_TEST

START_TEST(fmod_test15) { ck_assert_ldouble_nan(s21_fmod(MIN_NAN, MAX_NAN)); }
END_TEST

START_TEST(fmod_test16) { ck_assert_ldouble_nan(s21_fmod(MIN_NAN, MIN_NAN)); }
END_TEST

START_TEST(fmod_test17) { ck_assert_ldouble_nan(s21_fmod(MAX_INF, 2.4)); }
END_TEST

START_TEST(fmod_test18) { ck_assert_ldouble_nan(s21_fmod(MIN_INF, 2.4)); }
END_TEST

START_TEST(fmod_test19) { ck_assert_ldouble_nan(s21_fmod(MAX_NAN, 2.4)); }
END_TEST

START_TEST(fmod_test20) { ck_assert_ldouble_nan(s21_fmod(MIN_NAN, 2.4)); }
END_TEST

START_TEST(fmod_test21) {
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, MAX_INF), fmod(2.4, MAX_INF), 1E-8);
}
END_TEST

START_TEST(fmod_test22) {
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, MIN_INF), fmod(2.4, MIN_INF), 1E-8);
}
END_TEST

START_TEST(fmod_test23) { ck_assert_ldouble_nan(s21_fmod(2.4, MAX_NAN)); }
END_TEST

START_TEST(fmod_test24) { ck_assert_ldouble_nan(s21_fmod(2.4, MIN_NAN)); }
END_TEST

START_TEST(fmod_test25) {
  ck_assert_ldouble_eq_tol(s21_fmod(0, 2.4), fmod(0, 2.4), 1E-8);
}
END_TEST

START_TEST(fmod_test26) {
  ck_assert_ldouble_eq_tol(s21_fmod(-0, 2.4), fmod(-0, 2.4), 1E-8);
}
END_TEST

START_TEST(fmod_test27) { ck_assert_ldouble_nan(s21_fmod(2.4, 0)); }
END_TEST

START_TEST(fmod_test28) { ck_assert_ldouble_nan(s21_fmod(2.4, -0)); }
END_TEST

START_TEST(fmod_test29) {
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, 0.5), fmod(2.4, 0.5), 1E-8);
}
END_TEST

START_TEST(fmod_test30) {
  ck_assert_ldouble_eq_tol(s21_fmod(2.4, -0.5), fmod(2.4, -0.5), 1E-8);
}
END_TEST

START_TEST(fmod_test31) {
  ck_assert_ldouble_eq_tol(s21_fmod(-2.4, 0.5), fmod(-2.4, 0.5), 1E-8);
}
END_TEST

START_TEST(fmod_test32) {
  ck_assert_ldouble_eq_tol(s21_fmod(-2.4, -0.5), fmod(-2.4, -0.5), 1E-8);
}
END_TEST

START_TEST(fmod_test33) {
  ck_assert_ldouble_eq_tol(s21_fmod(666666.4, 1.5), fmod(666666.4, 1.5), 1E-8);
}
END_TEST

START_TEST(fmod_test34) {
  ck_assert_ldouble_eq_tol(s21_fmod(666666.4, -1.5), fmod(666666.4, -1.5),
                           1E-8);
}
END_TEST

START_TEST(fmod_test35) {
  ck_assert_ldouble_eq_tol(s21_fmod(3.3, 24.2), fmod(3.3, 24.2), 1E-8);
}
END_TEST

START_TEST(fmod_test36) {
  ck_assert_ldouble_eq_tol(s21_fmod(3.3, -24.2), fmod(3.3, -24.2), 1E-8);
}
END_TEST

START_TEST(fmod_test37) {
  ck_assert_ldouble_eq_tol(s21_fmod(-3.3, -24.2), fmod(-3.3, -24.2), 1E-8);
}
END_TEST

START_TEST(fmod_test38) {
  ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 24.2),
                           fmod(0.0000000005543, 24.2), 1E-8);
}
END_TEST

START_TEST(fmod_test39) {
  ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 0.000003),
                           fmod(0.0000000005543, 0.000003), 1E-8);
}
END_TEST

Suite *fmod_suite(void) {
  Suite *test_suite = suite_create("fmod_suite");
  TCase *test_case = tcase_create("fmod_case");

  tcase_add_test(test_case, fmod_test1);
  tcase_add_test(test_case, fmod_test2);
  tcase_add_test(test_case, fmod_test3);
  tcase_add_test(test_case, fmod_test4);
  tcase_add_test(test_case, fmod_test5);
  tcase_add_test(test_case, fmod_test6);
  tcase_add_test(test_case, fmod_test7);
  tcase_add_test(test_case, fmod_test8);
  tcase_add_test(test_case, fmod_test9);
  tcase_add_test(test_case, fmod_test10);
  tcase_add_test(test_case, fmod_test11);
  tcase_add_test(test_case, fmod_test12);
  tcase_add_test(test_case, fmod_test13);
  tcase_add_test(test_case, fmod_test14);
  tcase_add_test(test_case, fmod_test15);
  tcase_add_test(test_case, fmod_test16);
  tcase_add_test(test_case, fmod_test17);
  tcase_add_test(test_case, fmod_test18);
  tcase_add_test(test_case, fmod_test19);
  tcase_add_test(test_case, fmod_test20);
  tcase_add_test(test_case, fmod_test21);
  tcase_add_test(test_case, fmod_test22);
  tcase_add_test(test_case, fmod_test23);
  tcase_add_test(test_case, fmod_test24);
  tcase_add_test(test_case, fmod_test25);
  tcase_add_test(test_case, fmod_test26);
  tcase_add_test(test_case, fmod_test27);
  tcase_add_test(test_case, fmod_test28);
  tcase_add_test(test_case, fmod_test29);
  tcase_add_test(test_case, fmod_test30);
  tcase_add_test(test_case, fmod_test31);
  tcase_add_test(test_case, fmod_test32);
  tcase_add_test(test_case, fmod_test33);
  tcase_add_test(test_case, fmod_test34);
  tcase_add_test(test_case, fmod_test35);
  tcase_add_test(test_case, fmod_test36);
  tcase_add_test(test_case, fmod_test37);
  tcase_add_test(test_case, fmod_test38);
  tcase_add_test(test_case, fmod_test39);

  suite_add_tcase(test_suite, test_case);
  return test_suite;
}