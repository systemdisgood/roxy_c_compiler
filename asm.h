#ifndef ASM_H
#include <stdbool.h>
#include "args.h"

extern args_struct rcc_args;
extern args_struct* prcc_args;
void read_args_asm(args_struct* prcc_args);

#define ASM_H
#endif
