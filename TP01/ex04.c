#include <stdio.h>
#include <math.h>

int main(void)
{
	int a = 1;
	int b = 5;
	int c = 6;

	int delta;
	int x;
	int x1;
	int x2;

    if (a == 0)
    {
        printf("Pas un polynome du 2nd degrée\n");
    }
    else
    {
        delta = b * b - (4 * a * c);
        
    	if (delta > 0)
    	{
    	    x1 = (-b - sqrt(delta)) / (2 * a);
    	    x2 = (-b + sqrt(delta)) / (2 * a);
    		printf("Delta = %d\nIl existe 2 solutions\nx1 = %d\nx2 = %d", delta, x1, x2);
    	}
    	else if (delta == 0)
    	{
    	    x = -b / (2 * a);
    	    printf("Delta = %d\nIl existe 1 solution\nx = %d\n", delta, x);
    	}
    	else
    	{
    	    printf("Delta = %d\nIl n'existe aucune solution\n", delta);
    	}
    }

	return 0;
}
