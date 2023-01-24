#ifndef _CHECK_H_
  #include  <check.h>
#endif
#ifndef _MATH_H_
  #include  <math.h>    // оригинальную библ. можно подключать только здесь в тестах
#endif
#include "s21_math.h"

double max_inf = 1.0 / 0.0;
double min_inf = -1.0 / 0.0;
double max_nan = 0.0 / 0.0;
double min_nan = -0.0 / 0.0;

START_TEST(sin_test) {
    ck_assert_ldouble_nan(s21_sin(max_inf));
    ck_assert_ldouble_nan(s21_sin(min_inf));
    ck_assert_ldouble_nan(s21_sin(max_nan));
    ck_assert_ldouble_nan(s21_sin(min_nan));
    ck_assert_ldouble_eq_tol(s21_sin(0.5), sin(0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(-0.5), sin(-0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(1.1), sin(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(-2.1), sin(-2.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(-0), sin(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(5.123456789123), sin(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(0.00000004564897), sin(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sin(17000000000.1), sin(17000000000.1), 1e-6);
} END_TEST

START_TEST(cos_test) {
    ck_assert_ldouble_nan(s21_cos(max_inf));
    ck_assert_ldouble_nan(s21_cos(min_inf));
    ck_assert_ldouble_nan(s21_cos(max_nan));
    ck_assert_ldouble_nan(s21_cos(min_nan));
    ck_assert_ldouble_eq_tol(s21_cos(0.5), cos(0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(-0.5), cos(-0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(-1), cos(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(1.1), cos(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(-2.1), cos(-2.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(-0), cos(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(5.123456789123), cos(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(0.00000004564897), cos(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_cos(17000000000.1), cos(17000000000.1), 1e-7);
} END_TEST

START_TEST(tan_test) {
    ck_assert_ldouble_nan(s21_cos(max_inf));
    ck_assert_ldouble_nan(s21_cos(min_inf));
    ck_assert_ldouble_nan(s21_cos(max_nan));
    ck_assert_ldouble_nan(s21_cos(min_nan));
    ck_assert_ldouble_eq_tol(s21_tan(0.5), tan(0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(-0.5), tan(-0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(1.1), tan(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(-2.1), tan(-2.1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(-0), tan(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(5.123456789123), tan(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(0.00000004564897), tan(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_tan(170000000.1), tan(170000000.1), 1e-7);
} END_TEST

START_TEST(asin_test) {
    ck_assert_ldouble_nan(s21_asin(max_inf));
    ck_assert_ldouble_nan(s21_asin(min_inf));
    ck_assert_ldouble_nan(s21_asin(max_nan));
    ck_assert_ldouble_nan(s21_asin(min_nan));
    ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-15);
    ck_assert_ldouble_nan(s21_asin(1.1));
    ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_asin(-0), asin(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_asin(0.00000004564897), asin(0.00000004564897), 1e-15);
} END_TEST

START_TEST(acos_test) {
    ck_assert_ldouble_nan(s21_acos(max_inf));
    ck_assert_ldouble_nan(s21_acos(min_inf));
    ck_assert_ldouble_nan(s21_acos(max_nan));
    ck_assert_ldouble_nan(s21_acos(min_nan));
    ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-15);
    ck_assert_ldouble_nan(s21_acos(1.1));
    ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_acos(-0), acos(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_acos(0.00000004564897), acos(0.00000004564897), 1e-15);
} END_TEST

START_TEST(atan_test) {
    ck_assert_ldouble_nan(s21_atan(max_nan));
    ck_assert_ldouble_nan(s21_atan(min_nan));
    ck_assert_ldouble_eq_tol(s21_atan(min_inf), atan(min_inf), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(max_inf), atan(max_inf), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(-2.1), atan(-2.1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_atan(-0), atan(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_atan(5.123456789123), atan(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_atan(0.00000004564897), atan(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_atan(170000000000000.1), atan(170000000000000.1), 1e-15);
} END_TEST

START_TEST(exp_test) {
    ck_assert_ldouble_infinite(s21_exp(max_inf));
    ck_assert_ldouble_eq_tol(s21_exp(min_inf), exp(min_inf), 1e-8);
    ck_assert_ldouble_nan(s21_exp(max_nan));
    ck_assert_ldouble_nan(s21_exp(min_nan));
    ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(-0.5), exp(-0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(1.1), exp(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(-2.1), exp(-2.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(-0), exp(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(5.123456789123), exp(5.123456789123), 1e-8);
    ck_assert_ldouble_eq_tol(s21_exp(0.00000004564897), exp(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_exp(20.1), exp(20.1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_exp(-20.1), exp(-20.1), 1e-8);
} END_TEST

START_TEST(log_test) {
    ck_assert_ldouble_infinite(s21_log(max_inf));
    ck_assert_ldouble_nan(s21_log(min_inf));
    ck_assert_ldouble_nan(s21_log(max_nan));
    ck_assert_ldouble_nan(s21_log(min_nan));
    ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-15);
    ck_assert_ldouble_nan(s21_log(-0.5));
    ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_log(1.1), log(1.1), 1e-15);
    ck_assert_ldouble_infinite(s21_log(0));
    ck_assert_ldouble_infinite(s21_log(-0));
    ck_assert_ldouble_eq_tol(s21_log(5.123456789123), log(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_log(0.00000004564897), log(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_log(170000000000000.1), log(170000000000000.1), 1e-8);
} END_TEST

START_TEST(sqrt_test) {
    ck_assert_ldouble_nan(s21_sqrt(min_inf));
    ck_assert_ldouble_infinite(s21_sqrt(max_inf));
    ck_assert_ldouble_nan(s21_sqrt(max_nan));
    ck_assert_ldouble_nan(s21_sqrt(min_nan));
    ck_assert_ldouble_eq_tol(s21_sqrt(0.5), sqrt(0.5), 1e-15);
    ck_assert_ldouble_nan(s21_sqrt(-0.5));
    ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(-0), sqrt(-0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(5.123456789123), sqrt(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(0.00000004564897), sqrt(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_sqrt(170000000000000.1), sqrt(170000000000000.1), 1e-8);
} END_TEST

START_TEST(pow_test) {
    ck_assert_ldouble_eq(s21_pow(max_inf, max_inf), pow(max_inf, max_inf));
    ck_assert_ldouble_eq_tol(s21_pow(max_inf, min_inf), pow(max_inf, min_inf), 1e-8);
    ck_assert_ldouble_nan(s21_pow(max_inf, max_nan));
    ck_assert_ldouble_nan(s21_pow(max_inf, min_nan));

    ck_assert_ldouble_eq(s21_pow(min_inf, max_inf), pow(min_inf, max_inf));
    ck_assert_ldouble_eq_tol(s21_pow(min_inf, min_inf), pow(min_inf, min_inf), 1e-8);
    ck_assert_ldouble_nan(s21_pow(min_inf, max_nan));
    ck_assert_ldouble_nan(s21_pow(min_inf, min_nan));

    ck_assert_ldouble_nan(s21_pow(max_nan, max_inf));
    ck_assert_ldouble_nan(s21_pow(max_nan, min_inf));
    ck_assert_ldouble_nan(s21_pow(max_nan, max_nan));
    ck_assert_ldouble_nan(s21_pow(max_nan, min_nan));

    ck_assert_ldouble_nan(s21_pow(min_nan, max_inf));
    ck_assert_ldouble_nan(s21_pow(min_nan, min_inf));
    ck_assert_ldouble_nan(s21_pow(min_nan, max_nan));
    ck_assert_ldouble_nan(s21_pow(min_nan, min_nan));

    ck_assert_ldouble_infinite(s21_pow(max_inf, 2.4));
    ck_assert_ldouble_infinite(s21_pow(min_inf, 2.4));
    ck_assert_ldouble_nan(s21_pow(max_nan, 2.4));
    ck_assert_ldouble_nan(s21_pow(min_nan, 2.4));

    ck_assert_ldouble_infinite(s21_pow(2.4, max_inf));
    ck_assert_ldouble_eq_tol(s21_pow(2.4, min_inf), pow(2.4, min_inf), 1e-8);
    ck_assert_ldouble_nan(s21_pow(2.4, max_nan));
    ck_assert_ldouble_nan(s21_pow(2.4, min_nan));

    ck_assert_ldouble_eq_tol(s21_pow(0, 2.4), pow(0, 2.4), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(-0, 2.4), pow(-0, 2.4), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, 0), pow(2.4, 0), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, -0), pow(2.4, -0), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, 0.5), pow(2.4, 0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, -0.5), pow(2.4, -0.5), 1e-8);
    ck_assert_ldouble_nan(s21_pow(-2.4, 0.5));
    ck_assert_ldouble_nan(s21_pow(-2.4, -0.5));
    ck_assert_ldouble_nan(s21_pow(-2.4, 2.1));
    ck_assert_ldouble_nan(s21_pow(-2.4, -2.1));
    ck_assert_ldouble_eq_tol(s21_pow(-2.4, 2), pow(-2.4, 2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, 2), pow(2.4, 2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(-2.4, -1), pow(-2.4, -1), 1e-8);
    ck_assert_ldouble_nan(s21_pow(-2.4, -1.2));
    ck_assert_ldouble_nan(s21_pow(-2.4, -0.4));
    ck_assert_ldouble_eq_tol(s21_pow(2.4, 1), pow(2.4, 1), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, 3), pow(2.4, 3), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(2.4, -3), pow(2.4, -3), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(666666.4, 1.5), pow(666666.4, 1.5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(666666.4, -1.5), pow(666666.4, -1.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(3.3, 13.2), pow(3.3, 13.2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(3.3, -24.2), pow(3.3, -24.2), 1e-8);
    ck_assert_ldouble_nan(s21_pow(-3.3, -24.2));
    ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 24.2), pow(0.0000000005543, 24.2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_pow(0.0000000005543, 0.00000003), pow(0.0000000005543, 0.00000003), 1e-8);
} END_TEST

START_TEST(fmod_test) {
    ck_assert_ldouble_nan(s21_fmod(max_inf, max_inf));
    ck_assert_ldouble_nan(s21_fmod(max_inf, min_inf));
    ck_assert_ldouble_nan(s21_fmod(max_inf, max_nan));
    ck_assert_ldouble_nan(s21_fmod(max_inf, min_nan));

    ck_assert_ldouble_nan(s21_fmod(min_inf, max_inf));
    ck_assert_ldouble_nan(s21_fmod(min_inf, min_inf));
    ck_assert_ldouble_nan(s21_fmod(min_inf, max_nan));
    ck_assert_ldouble_nan(s21_fmod(min_inf, min_nan));

    ck_assert_ldouble_nan(s21_fmod(max_nan, max_inf));
    ck_assert_ldouble_nan(s21_fmod(max_nan, min_inf));
    ck_assert_ldouble_nan(s21_fmod(max_nan, max_nan));
    ck_assert_ldouble_nan(s21_fmod(max_nan, min_nan));

    ck_assert_ldouble_nan(s21_fmod(min_nan, max_inf));
    ck_assert_ldouble_nan(s21_fmod(min_nan, min_inf));
    ck_assert_ldouble_nan(s21_fmod(min_nan, max_nan));
    ck_assert_ldouble_nan(s21_fmod(min_nan, min_nan));

    ck_assert_ldouble_nan(s21_fmod(max_inf, 2.4));
    ck_assert_ldouble_nan(s21_fmod(min_inf, 2.4));
    ck_assert_ldouble_nan(s21_fmod(max_nan, 2.4));
    ck_assert_ldouble_nan(s21_fmod(min_nan, 2.4));

    ck_assert_ldouble_eq_tol(s21_fmod(2.4, max_inf), fmod(2.4, max_inf), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(2.4, min_inf), fmod(2.4, min_inf), 1e-8);
    ck_assert_ldouble_nan(s21_fmod(2.4, max_nan));
    ck_assert_ldouble_nan(s21_fmod(2.4, min_nan));

    ck_assert_ldouble_eq_tol(s21_fmod(0, 2.4), fmod(0, 2.4), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(-0, 2.4), fmod(-0, 2.4), 1e-8);
    ck_assert_ldouble_nan(s21_fmod(2.4, 0));
    ck_assert_ldouble_nan(s21_fmod(2.4, -0));
    ck_assert_ldouble_eq_tol(s21_fmod(2.4, 0.5), fmod(2.4, 0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(2.4, -0.5), fmod(2.4, -0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(-2.4, 0.5), fmod(-2.4, 0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(-2.4, -0.5), fmod(-2.4, -0.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(666666.4, 1.5), fmod(666666.4, 1.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(666666.4, -1.5), fmod(666666.4, -1.5), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(3.3, 24.2), fmod(3.3, 24.2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(3.3, -24.2), fmod(3.3, -24.2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(-3.3, -24.2), fmod(-3.3, -24.2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 24.2), fmod(0.0000000005543, 24.2), 1e-8);
    ck_assert_ldouble_eq_tol(s21_fmod(0.0000000005543, 0.000003), fmod(0.0000000005543, 0.000003), 1e-8);
} END_TEST

START_TEST(ceil_test) {
    ck_assert_ldouble_eq(s21_ceil(max_inf), ceil(max_inf));
    ck_assert_ldouble_eq(s21_ceil(min_inf), ceil(min_inf));
    ck_assert_ldouble_nan(s21_floor(max_nan));
    ck_assert_ldouble_nan(s21_floor(min_nan));
    ck_assert_ldouble_eq(s21_ceil(-876554310.23455), ceil(-876554310.23455));
    ck_assert_ldouble_eq(s21_ceil(876554310.23455), ceil(876554310.23455));
    ck_assert_ldouble_eq(s21_ceil(-0.45), ceil(-0.45));
    ck_assert_ldouble_eq(s21_ceil(0.45), ceil(0.45));
    ck_assert_ldouble_eq(s21_ceil(-0.00000000000000045), ceil(-0.00000000000000045));
} END_TEST

START_TEST(floor_test) {  // Done
    ck_assert_ldouble_infinite(s21_floor(s21_MAX_INF));
    ck_assert_ldouble_infinite(s21_floor(s21_MIN_INF));
    ck_assert_ldouble_nan(s21_floor(s21_NAN));
    ck_assert_ldouble_eq(s21_floor(s21_MAX_INF), floor(s21_MAX_INF));
    ck_assert_ldouble_eq(s21_floor(s21_MIN_INF), floor(s21_MIN_INF));
    ck_assert_ldouble_eq(s21_floor(0), floor(0));
    ck_assert_ldouble_eq(s21_floor(-0), floor(-0));
    ck_assert_ldouble_eq(s21_floor(-876554310.23455), floor(-876554310.23455));
    ck_assert_ldouble_eq(s21_floor(876554310.23455), floor(876554310.23455));
    ck_assert_ldouble_eq(s21_floor(-0.45), floor(-0.45));
    ck_assert_ldouble_eq(s21_floor(0.45), floor(0.45));
    ck_assert_ldouble_eq(s21_floor(-0.0000000000000000000045), floor(-0.0000000000000000000045));
} END_TEST

START_TEST(abs_test) {
    int inf_max = 1.0 / 0.0;
    int inf_min = -1.0 / 0.0;
    int nan_max = 0.0 / 0.0;
    int nan_min = -0.0 / 0.0;
    ck_assert_int_eq(s21_abs(inf_max), abs(inf_max));
    ck_assert_int_eq(s21_abs(inf_min), abs(inf_min));
    ck_assert_int_eq(s21_abs(nan_max), abs(nan_max));
    ck_assert_int_eq(s21_abs(nan_min), abs(nan_min));
    ck_assert_int_eq(s21_abs(-10), abs(-10));
    ck_assert_int_eq(s21_abs(-0), abs(-0));
} END_TEST

START_TEST(fabs_test) {
    ck_assert_ldouble_infinite(s21_fabs(min_inf));
    ck_assert_ldouble_infinite(s21_fabs(max_inf));
    ck_assert_ldouble_nan(s21_fabs(max_nan));
    ck_assert_ldouble_nan(s21_fabs(min_nan));
    ck_assert_ldouble_eq_tol(s21_fabs(0.5), fabs(0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-0.5), fabs(-0.5), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-1.0), fabs(-1.0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(1.0), fabs(1.0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-2.1), fabs(-2.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-0.0), fabs(-0.0), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(5.123456789123), fabs(5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(0.00000004564897), fabs(0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(170000000000000.1), fabs(170000000000000.1), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-5.123456789123), fabs(-5.123456789123), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-0.00000004564897), fabs(-0.00000004564897), 1e-15);
    ck_assert_ldouble_eq_tol(s21_fabs(-170000000000000.1), fabs(-170000000000000.1), 1e-15);
} END_TEST

int main(void) {
    Suite *suite = suite_create("UNITS");        // test suite - это набор тестовых случаев
    TCase *tcase = tcase_create("TESTS");        // test case — это набор тестовых примеров
    SRunner *srunner = srunner_create(suite);    // Suite runner - это функция, которая берет набор тестов
                                                 // и запускает все тестовые случаи и их тестовые функции
    int val = 0;

    suite_add_tcase(suite, tcase);
    tcase_add_test(tcase, sin_test);
    tcase_add_test(tcase, cos_test);
    tcase_add_test(tcase, tan_test);
    tcase_add_test(tcase, asin_test);
    tcase_add_test(tcase, acos_test);
    tcase_add_test(tcase, atan_test);
    tcase_add_test(tcase, exp_test);
    tcase_add_test(tcase, log_test);
    tcase_add_test(tcase, sqrt_test);
    tcase_add_test(tcase, pow_test);
    tcase_add_test(tcase, fmod_test);
    tcase_add_test(tcase, ceil_test);
    tcase_add_test(tcase, floor_test);
    tcase_add_test(tcase, abs_test);
    tcase_add_test(tcase, fabs_test);

    // Запуск всех наборов тестов (suite - набор). CK_NORMAL - что бы выводить только неудачные тесты.
    srunner_run_all(srunner, CK_NORMAL);
    // Количество проваленных тестов.
    val = srunner_ntests_failed(srunner);
    // Освобождаем память срунеру, при этом suite и tcase освобождать почему то не нужно
    srunner_free(srunner);

    return val == 0 ? 0 : 1;
}
