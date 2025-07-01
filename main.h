#ifndef MAIN_H
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
} args;
args rcc_args;

#define MAIN_H
#endif
