#include <studio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Program entry point
 * Description- This program will assign a random number to the variable n each time it is executed.
 * Return -Always zero
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0){
		printf ("%d is positive\n")
	else if(n<0){
		printf ("%d is negative\n");
	}
	else {
		printf ("%d is zero\n");
	
	}
	
	return(0);
	}






}
