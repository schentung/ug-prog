#include <stdio.h>

void ft_print_even_odd(int start, int end)
{
    int evenExist = 0;
    int oddExist = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            if (evenExist != 1) {
                evenExist = 1;
                printf("Even : ");
            }
            printf("%d", i);
        }
    }
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            if (oddExist != 1) {
                oddExist = 1;
                printf("\nOdd : ");
            }
            printf("%d", i);
        }
    }
}