#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _isupper(int c);
int mul(int a, int b);
int _isdigit(int c);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void fizz_buzz(void);
void print_triangle(int size);
void print_number(int n);

#endif
