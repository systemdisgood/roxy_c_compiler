#include "main.h"

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

void free_rcc_args()
{
	for(unsigned args_counter = 0; args_counter < rcc_args.args_quantity; ++args_counter)
    {
        free(rcc_args.args[args_counter]);
    }
    free(rcc_args.args);
}

int main(int argc, char* argv[])
{
	// storing arguments
	set_rcc_args(&argc, &argv);
	
    // freeing arguments
    free_rcc_args();
	return EXIT_SUCCESS;
}
