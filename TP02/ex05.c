#include <stdio.h>

void ft_print_even_odd(int start, int end)
{
    printf("Even: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            printf("%d", i);
    }
    
    printf("\nOdd: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
            printf("%d", i);
    }
}

int main(void)
{
    ft_print_even_odd(1, 10);
    return 0;
}