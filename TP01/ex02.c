#include <unistd.h>

int main(void)
{
    int number = 3;
    char *text = "Une phrase";
    
    for (number; number <= 3; number++)
    {
        write(1, text, 10);
    }

    return 0;
}
