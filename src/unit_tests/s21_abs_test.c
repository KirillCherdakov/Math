#include "s21_math_test.h"

START_TEST(abs_test1) { ck_assert_int_eq(s21_abs(-1), abs(-1)); }
END_TEST

START_TEST(abs_test2) { ck_assert_int_eq(s21_abs(5), abs(5)); }
END_TEST

START_TEST(abs_test3) {
  ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
}
END_TEST

START_TEST(abs_test4) { ck_assert_int_eq(s21_abs(-0xA13), abs(-0xA13)); }
END_TEST

START_TEST(abs_test5) { ck_assert_int_eq(s21_abs(13), abs(13)); }
END_TEST

START_TEST(abs_test6) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_test7) { ck_assert_int_eq(s21_abs(-05), abs(-05)); }
END_TEST

START_TEST(abs_test8) {
  ck_assert_int_eq(s21_abs(-00002345670), abs(-00002345670));
}
END_TEST

START_TEST(abs_test9) { ck_assert_int_eq(s21_abs(123456789), abs(123456789)); }
END_TEST

START_TEST(abs_test10) { ck_assert_int_eq(s21_abs(100), abs(100)); }
END_TEST

START_TEST(abs_test11) { ck_assert_int_eq(s21_abs(-100), abs(-100)); }
END_TEST

START_TEST(abs_test12) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(abs_test13) {
  int inf_max = 1.0 / 0.0;
  int inf_min = -1.0 / 0.0;
  int nan_max = 0.0 / 0.0;
  int nan_min = -0.0 / 0.0;
  ck_assert_int_eq(s21_abs(inf_max), abs(inf_max));
  ck_assert_int_eq(s21_abs(inf_min), abs(inf_min));
  ck_assert_int_eq(s21_abs(nan_max), abs(nan_max));
  ck_assert_int_eq(s21_abs(nan_min), abs(nan_min));
}
END_TEST

Suite *abs_suite(void) {
  Suite *test_suite = suite_create("abs_suite");
  TCase *test_case = tcase_create("abs_case");

  tcase_add_test(test_case, abs_test1);
  tcase_add_test(test_case, abs_test2);
  tcase_add_test(test_case, abs_test3);
  tcase_add_test(test_case, abs_test4);
  tcase_add_test(test_case, abs_test5);
  tcase_add_test(test_case, abs_test6);
  tcase_add_test(test_case, abs_test7);
  tcase_add_test(test_case, abs_test8);
  tcase_add_test(test_case, abs_test9);
  tcase_add_test(test_case, abs_test10);
  tcase_add_test(test_case, abs_test11);
  tcase_add_test(test_case, abs_test12);
  tcase_add_test(test_case, abs_test13);

  suite_add_tcase(test_suite, test_case);

  return test_suite;
}