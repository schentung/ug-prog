#include <unistd.h>

void ft_triangle_v2(int number)
{
    int i;
    int j;
    int ligne = 0;
    i = 0;
    while (i <= number)
    {
        j = 0;
        while (j <= i)
        {
            char c = j + '0';
            write(1, &c, 1);
            j++;
        }
        
        if (ligne < number)
            write(1, "\n", 1);
        ligne++;
        i++;
    }
}