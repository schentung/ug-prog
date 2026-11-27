#include <unistd.h>

void ft_triangle(int number)
{
    int i;
    int j;
    int ligne = 0;
    i = 1;
    
    while (i <= number)
    {
        j = 0;
        while (j < i)
        {
            write(1, "*", 1);
            j++;
        }
        ligne++;
        if (ligne < number)
            write(1, "\n", 1);
        i++;
    }
}