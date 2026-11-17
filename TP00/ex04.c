#include <stdio.h>
int main(void) {
    int T;
    
    T = 903219;
    
    int heures;
    int minutes;
    int secondes;
    
    heures = T / 3600;
    minutes = (T - (heures * 3600)) / 60;
    secondes = T - (minutes * 60) - (heures * 3600) ;
    
    printf("Heures: %d\n", heures);
    printf("Minutes: %d\n", minutes);
    printf("Secondes: %d\n", secondes);
    
    return 0;
}