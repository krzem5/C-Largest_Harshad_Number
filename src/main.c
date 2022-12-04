#include <largest_harshard_number.h>
#include <stdint.h>
#include <stdio.h>



#define BOUND_LOWER 0xffffffff11ul
#define BOUND_UPPER 0xfffffffffful
	
	

int main(int argc,const char** argv){
	printf("Largest harshard number between %lx and %lx: %lx\n",BOUND_LOWER,BOUND_UPPER,largest_harshard_number(BOUND_LOWER,BOUND_UPPER));
	return 0;
}
