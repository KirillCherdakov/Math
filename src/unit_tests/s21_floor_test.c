#include "s21_math_test.h"

START_TEST(floor_test1) { ck_assert_ldouble_infinite(s21_floor(MAX_INF)); }
END_TEST

START_TEST(floor_test2) { ck_assert_ldouble_infinite(s21_floor(MIN_INF)); }
END_TEST

START_TEST(floor_test3) { ck_assert_ldouble_nan(s21_floor(MAX_NAN)); }
END_TEST

START_TEST(floor_test4) {
  ck_assert_ldouble_eq(s21_floor(MAX_INF), floor(MAX_INF));
}
END_TEST

START_TEST(floor_test5) {
  ck_assert_ldouble_eq(s21_floor(MIN_INF), floor(MIN_INF));
}
END_TEST

START_TEST(floor_test6) { ck_assert_ldouble_eq(s21_floor(0), floor(0)); }
END_TEST

START_TEST(floor_test7) { ck_assert_ldouble_eq(s21_floor(-0), floor(-0)); }
END_TEST

START_TEST(floor_test8) {
  ck_assert_ldouble_eq(s21_floor(-876554310.23455), floor(-876554310.23455));
}
END_TEST

START_TEST(floor_test9) {
  ck_assert_ldouble_eq(s21_floor(876554310.23455), floor(876554310.23455));
}
END_TEST

START_TEST(floor_test10) {
  ck_assert_ldouble_eq(s21_floor(-0.45), floor(-0.45));
}
END_TEST

START_TEST(floor_test11) { ck_assert_ldouble_eq(s21_floor(0.45), floor(0.45)); }
END_TEST
START_TEST(floor_test12) {
  ck_assert_ldouble_eq(s21_floor(-0.0000000000000000000045),
                       floor(-0.0000000000000000000045));
}
END_TEST

Suite *floor_suite(void) {
  Suite *test_suite = suite_create("floor_suite");
  TCase *test_case = tcase_create("floor_case");

  tcase_add_test(test_case, floor_test1);
  tcase_add_test(test_case, floor_test2);
  tcase_add_test(test_case, floor_test3);
  tcase_add_test(test_case, floor_test4);
  tcase_add_test(test_case, floor_test5);
  tcase_add_test(test_case, floor_test6);
  tcase_add_test(test_case, floor_test7);
  tcase_add_test(test_case, floor_test8);
  tcase_add_test(test_case, floor_test9);
  tcase_add_test(test_case, floor_test10);
  tcase_add_test(test_case, floor_test11);
  tcase_add_test(test_case, floor_test12);

  suite_add_tcase(test_suite, test_case);

  return test_suite;
}