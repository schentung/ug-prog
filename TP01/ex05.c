#include <stdio.h>

int main(void)
{
	int number = 10;
	int somme = 0;
	
	for (int i = 1; i <= number; i++)
	{
	    somme = somme + i;
	    printf("%d + ", i);
	}
	printf("= %d", somme);

	return 0;
}
