GCC = gcc
CFLAGS = -std=c11 -g
WFLAGS = -Wall -Werror -Wextra
all: s21_math
rebuild: clear s21_math

all: clear s21_math
clear:
	rm -rf s21_math ./*.o
	
s21_math: 
	$(GCC) $(CFLAGS) s21_math.c  -lm -o s21_math 

rebuild: clear all




