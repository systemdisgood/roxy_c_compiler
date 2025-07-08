#include "asm.h"

void read_args_asm(args_struct* prcc_args)
{
	for(unsigned args_counter = 0;args_counter < rcc_args.args_quantity; ++args_counter)
	{
		printf("%s\n", (*prcc_args).args[args_counter]);
	}
}
