#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define LOG_10 2.30258509299
#define LOG_2 0.69314718056

double s21_taylor(double x);
double s21_ln(double d, int n);
double ostatok_2(double a, int *k);
double s21_pow(double a, double b);

int main() {
  const double input = 934000;
  double d = 9.34;  //основание входящего числа
  int n = 5;        //степень 10 во входном числе
  printf("LN = %lf\n", s21_ln(d, n));
  printf("LN SYS = %lf\n", log(input));
  return 0;
}

double s21_taylor(double x) {
  double tay_res = x;
  for (int i = 2; i < 4; i++) {
    if (i % 2 == 0) {
      tay_res = tay_res - (s21_pow(x, i) / i);
    } else {
      tay_res = tay_res + (s21_pow(x, i) / i);
    }
  }
  return tay_res;
};
double s21_ln(double d, int n) {
  int k = 0;
  double ln_res, lnf_1;
  double f = ostatok_2(d, &k) - 1;
  lnf_1 = s21_taylor(f);
  ln_res = n * LOG_10 - k * LOG_2 + lnf_1;
  return ln_res;
}
double ostatok_2(double a, int *k) {
  while (1) {
    if (a >= 1 && a <= 2) {
      break;
    }
    a = a / 2;
    *(k) = *(k) + 1;
  }
  printf("ostatok = %lf, k = %d\n", a, *(k));
  return a;
}
double s21_pow(double a, double b) { return pow(a, b); };