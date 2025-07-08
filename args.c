#include "args.h"

args_struct rcc_args;
args_struct* prcc_args = &rcc_args;

void set_rcc_args(int* pargc, char** pargv[])
{
    rcc_args.args_quantity = (*pargc) - 1;
    rcc_args.args = (char**)(malloc(((*pargc)-1)*sizeof(char*)));
    if(rcc_args.args == NULL) printf("ERROR0\n");
    for(unsigned argv_counter = 1; argv_counter < (*pargc); ++argv_counter)
    {
        rcc_args.args[argv_counter-1] = (char*)(malloc((strlen((*pargv)[argv_counter])+1)*sizeof(char)));
        if(rcc_args.args[argv_counter - 1] == NULL) printf("ERROR0\n");
        strcpy(rcc_args.args[argv_counter-1], (*pargv)[argv_counter]);
        printf("%s\n",(*pargv)[argv_counter]);
        printf("%s\n",rcc_args.args[argv_counter-1]);
    }
}

void free_rcc_args(void)
{
        for(unsigned args_counter = 0; args_counter < rcc_args.args_quantity; ++args_counter)
    {
        free(rcc_args.args[args_counter]);
    }
    free(rcc_args.args);
}
