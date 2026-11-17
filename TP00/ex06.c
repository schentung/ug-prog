#include <stdio.h>
int main(void) {
    int age;
    age = 18;

    if (age <= 1) {
        printf("bonjour bébé !");
    }
    else if (1 < age && age <= 14) {
        printf("bonjour mes petits !");
    }
    else if (14 < age && age <= 30) {
        printf("bonjour jeune homme !");
    }
    else if  (30 < age && age <= 60) {
        printf("bonjour monsieur !");
    }
    else {
        printf("bonjour papy !");
    }
    
    return 0;
}