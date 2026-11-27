#include <stdio.h>

int ft_sqrt(int number)
{
    int i;
    if (number < 0) 
    {
        return -1;
    }
    i = 0;
    while (i <= number / (i + 1))
    {
        i++;
    }
    if (i * i == number)
    {
        return i;
    }
     return -1;
}