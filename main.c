#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	for(unsigned args_counter = 1; args_counter < argc; ++args_counter)
	{
		printf("%s\n",argv[args_counter]);
	}
	return EXIT_SUCCESS;
}
