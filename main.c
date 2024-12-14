#include <stdio.h>

int main(void){
#ifdef Board
	printf("TARGET BOARD: %s\n", Board);
#endif

	printf("Running\n");
	return 0;
}
