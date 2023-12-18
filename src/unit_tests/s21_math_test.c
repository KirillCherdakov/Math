#include "s21_math_test.h"

int main() {
  Suite *list_testcases[] = {
      abs_suite(),  fabs_suite(), sqrt_suite(), log_suite(),
      pow_suite(),  exp_suite(),  fmod_suite(), floor_suite(),
      ceil_suite(), sin_suite(),  cos_suite(),  tan_suite(),
      asin_suite(), acos_suite(), atan_suite(), NULL};
  for (Suite **current_testcase = list_testcases; *current_testcase != NULL;
       ++current_testcase) {
    run_testcase(*current_testcase);
  }
  return 0;
}

void run_testcase(Suite *testcase) {
  static int testcases_count = 1;

  if (testcases_count > 0) {
    putchar('\n');
  }
  printf("%s%d%s", "CURRENT TEST: ", testcases_count, "\n");
  ++testcases_count;
  SRunner *suiteRun = srunner_create(testcase);

  srunner_set_fork_status(suiteRun, CK_NOFORK);
  srunner_run_all(suiteRun, CK_NORMAL);

  srunner_free(suiteRun);
}