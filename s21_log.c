#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

int main() {
  double x = 6650.587500;
  printf("Math sys = %lf\n", log(x));
  printf("math s21 = %Lf\n", s21_log(x));
  return 0;
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
  while (fabs(step) >= 1e-24) {
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