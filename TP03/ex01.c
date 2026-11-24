#include <stdio.h>

void ft_print_even_numbers_in_range(int start, int end)
{
    if (start <= end)
    {
        for (int i = start; i <= end; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        for (int i = start; i >= end; i--)
        {
           if (i % 2 == 0)
            {
                printf("%d ", i);
            } 
        }
    }
}