#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("pow(1, 0) =%lf\n", pow(1, 0));
  printf("pow(-1, 3) =%lf\n", pow(-1, 3));
  printf("pow(-1, 4) =%lf\n", pow(-1, 4));
  printf("pow(0, 0) =%lf\n", pow(0, 0));
  printf("pow(0, -1) =%lf\n", pow(0, -1));
  printf("pow(0, 1) =%lf\n", pow(0, 1));
  printf("pow(INFINITY, 0) =%lf\n", pow(INFINITY, 0));
  printf("pow(INFINITY, -1) =%lf\n", pow(INFINITY, -1));
  printf("pow(-1, -INFINITY) =%lf\n", pow(-1, -INFINITY));
  printf("pow(0, INFINITY) =%lf\n", pow(0, INFINITY));
  printf("pow(NAN, 0) =%lf\n", pow(NAN, 0));
  printf("pow(INFINITY, INFINITY) =%lf\n", pow(INFINITY, INFINITY));
  printf("pow(INFINITY, -INFINITY) =%lf\n", pow(INFINITY, -INFINITY));
  printf("pow(-INFINITY, INFINITY) =%lf\n", pow(-INFINITY, INFINITY));
  printf("pow(-INFINITY, -INFINITY) =%lf\n", pow(-INFINITY, -INFINITY));
  printf("pow(1, -INFINITY) =%lf\n", pow(1, -INFINITY));
  printf("pow(1, NAN) =%lf\n", pow(1, NAN));
  printf("pow(2, INFINITY) =%lf\n", pow(2, INFINITY));
  printf("pow(0.5, INFINITY) =%lf\n", pow(0.5, INFINITY));
  printf("pow(-2, INFINITY) =%lf\n", pow(-2, INFINITY));
  printf("pow(2, -INFINITY) =%lf\n", pow(2, -INFINITY));
  printf("pow(0.5, -INFINITY) =%lf\n", pow(0.5, -INFINITY));
  printf("pow(-2, -INFINITY) =%lf\n", pow(-2, -INFINITY));
}