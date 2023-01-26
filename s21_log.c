
#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define LOG_2 0.693147180575002
#define s21_EPS 1e-25

double s21_log(double x);

double s21_log(double x) {
  double cur_pos, step = 1, period, totalValue;
  int n_pow = 0;
  int count = 1, cur_pow = 0;
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