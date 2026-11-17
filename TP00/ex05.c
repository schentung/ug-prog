#include <stdio.h>
int main(void) {
    int number;
    number = 12;
    
    if (number % 2 == 0) {
        printf("Le nombre %d est pair.", number);
    } else {
        printf("Le nombre %d est impair.", number);
    }
    
    return 0;
}