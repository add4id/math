GCC = gcc
CFLAGS = -std=c11 -g
WFLAGS = -Wall -Werror -Wextra
all: s21_math
debug: debug-grep.out
rebuild: clear s21_math

all: clean s21_math

s21_math: 
	$(GCC) $(CFLAGS) *.c  -o s21_math 

rebuild: clear all

clear:
	rm -rf s21_math ./*.o


