#include <unistd.h>

int main(void)
{
    int number = 3;
    char *text = "Une phrase";
    
    for (int i = 1; i <= number; i++)
    {
        write(1, text, 10);
    }

    return 0;
}
