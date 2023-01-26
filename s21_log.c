#include <check.h>
#include <check_stdint.h>
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(s21_log_test) {
  ck_assert_ldouble_eq_tol(log(123.895304), s21_log(123.895304), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.003), s21_log(0.003), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.5), s21_log(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.783645), s21_log(0.783645), 1e-6);
  ck_assert_ldouble_eq_tol(log(1), s21_log(1), 1e-6);
  ck_assert_ldouble_eq_tol(log(1.0), s21_log(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(log(200), s21_log(200), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(9.5463728645e6), log(9.5463728645e6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(5637385895.018274), log(5637385895.018274),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1e-10), log(1.1e-10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1e-55), log(1.1e-55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1e-70), log(1.1e-70), 1e-6);
}
END_TEST;

int main() {
  int failed = 0;
  Suite *s = suite_create("Core");
  TCase *tc = tcase_create("Core");
  SRunner *runner = srunner_create(s);

  suite_add_tcase(s, tc);

  tcase_add_test(tc, s21_log_test);

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (failed == 0) ? 0 : 1;
}

long double s21_log(long double x) {
  long double cur_pos, step = 1, period, totalValue;
  int n_pow = 0, count = 1, cur_pow = 0;
  while (x >= 1) {
    x = x / 2;
    n_pow++;
    // printf("x = %lf,n_pow = %d\n", x, n_pow);
  }
  // printf("Reduce end x =%lf\n", x);
  cur_pos = x - 1;
  totalValue = cur_pos;
  while (fabs(step) >= 1e-18) {
    int znak = 1;
    count++;
    if (count % 2 == 0) {
      znak = -1;
    }
    step = znak * (pow(cur_pos, count) / count);
    totalValue = totalValue + step;
  }
  totalValue = totalValue + n_pow * LOG_2;
  return (totalValue);
}