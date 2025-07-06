#ifndef ARGS_H
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	unsigned args_quantity;
	char** args;
	bool* understood_args;
} args_struct;


void set_rcc_args(int* pargc, char** pargv[]);

void free_rcc_args(void);

#define ARGS_H
#endif
