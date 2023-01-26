#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

int main() {
  double x = 6650.587500;
  printf("Math sys = %lf\n", log(x));

  return 0;
}

long double s21_pow(long double x, long double y) {
  long double totalValue = x * y;

  return (totalValue);
}