#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Program generates a random numbers
*
* Description: Program generates a random number
* and prints it as well as its designation as positive,
* negative or zero.
*
* Return: 0 if execution has no errors
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
          printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
          printf("%d is positive\n", n);
	}
        else 
	{
          printf("%d is negative\n", n);
	}
	return (0);
}
