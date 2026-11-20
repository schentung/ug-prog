#include <stdio.h>

int main(void)
{
    for (int i = 42; i <= 1337; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
