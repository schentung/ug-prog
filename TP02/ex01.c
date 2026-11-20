#include <unistd.h>

void ft_print(void)
{
    write(1, "Une citation\n", 13);
}

void ft_print_more(int number)
{
    for (int i = 0; i < number; i++)
    {
        ft_print();
    }
}