#include "main.h"


int main(int argc, char* argv[])
{
	// storing arguments
	set_rcc_args(&argc, &argv);
	
    // freeing arguments
    free_rcc_args();
	return EXIT_SUCCESS;
}
