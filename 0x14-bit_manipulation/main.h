#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int number);
int get_bit(unsigned long int number, unsigned int idx);

#endif
