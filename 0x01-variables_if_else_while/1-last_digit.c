#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 
 * main Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int T;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	T = n % 10;

	if (T >5)
		printf("%s %d is %d and is grater than 5\n", str, n, T);
	else if (T == 0)
		printf("%s %d is %d and is 0\n" , str, n, T);
	else if (T < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, T);

	return (0);
}

	
