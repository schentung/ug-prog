#include <stdio.h>

int ft_cumulative(int number)
{
    int somme = 0;
	
	for (int i = 1; i <= number; i++)
	{
	    somme = somme + i;
	}

	return somme;
}