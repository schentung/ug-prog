#include <stdio.h>

void ft_print_even_numbers_in_range(int start, int end)
{
    if (start <= end) {
        int i = start;
        while (i <= end) {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            i++;
        }
    }
    else {
        int i = end;
        while (i <= start) {
           if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            i--;
        }
    }
}