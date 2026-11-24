#include <stdio.h>

int ft_power(int number, int power)
{
    int resultat = 1;
    
    if (power < 0)
    {
        return 0;
    }
    else
    {
        if (number == 0 && power == 0)
        {
            return 1;
        }
        else
        {
            for (int i = 0; i < power; i++)
            {
                resultat = resultat * number;
            }
            return resultat;
        }
    }
}