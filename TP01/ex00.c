#include <stdio.h>

int main(void) {
    int a;
    int b;
    int total;
    
    a = 0;
    total = 0;
    
    while (a < 3) {
        b = 0;
        while (b < 2) {
            total = total + 1;
            b = b + 1;
        }
        a = a + 1;
    }
    printf("%d", total);
    return 0;
}