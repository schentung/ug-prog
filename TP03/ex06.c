#include <stdio.h>

int ft_is_prime(int number)
{
    if (number <= 1)
        return 0;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int ft_find_next_prime(int number)
{
    int i = 0;
    int resultat;
    while (ft_is_prime(number + i) == 0)
    {
        i++;
    }
    resultat = number + i;
    return resultat;
}