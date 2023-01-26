GCC = gcc
CFLAGS = -std=c11 -g
WFLAGS = -Wall -Werror -Wextra
all: clear s21_log s21_pow
rebuild: clear s21_log s21_pow
clear:
	rm -rf s21_log ./*.o s21_pow
	
s21_log: s21_log.c
	$(GCC) $(CFLAGS) s21_log.c  -lm -o s21_log 

s21_pow: s21_pow.c
	$(GCC) $(CFLAGS) s21_pow.c  -lm -o s21_pow

rebuild: clear all




