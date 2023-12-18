#ifndef SRC_UNIT_TESTS_S21_MATH_TEST_H_
#define SRC_UNIT_TESTS_S21_MATH_TEST_H_

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite *abs_suite(void);
Suite *acos_suite(void);
Suite *asin_suite(void);
Suite *atan_suite(void);
Suite *ceil_suite(void);
Suite *cos_suite(void);
Suite *exp_suite(void);
Suite *fabs_suite(void);
Suite *floor_suite(void);
Suite *fmod_suite(void);
Suite *log_suite(void);
Suite *pow_suite(void);
Suite *sin_suite(void);
Suite *sqrt_suite(void);
Suite *tan_suite(void);

void run_testcase(Suite *testcase);

#endif  //  SRC_UNIT_TESTS_S21_MATH_TEST_H_