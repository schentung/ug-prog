#include <stdio.h>

void ft_print_number_len(int number)
{
    int length = 0;
    if (number == 0)
    {
        length = 1;
    }
    else
    {
        while (number != 0)
        {
            number = number / 10;
            length++;
        }
    }
    
    printf("%d", length);
}