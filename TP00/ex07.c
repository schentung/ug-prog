#include <stdio.h>
int main(void) {
    int age = 15;
    int joueurs = 3;
    int adulte = 0;
    int reservation = 1;
    
    if (reservation == 0) {
        printf("Réservation obligatoire");
    }
    else if (reservation == 1) {
        if (joueurs < 2) {
            printf("Groupe trop petit");
        }
        else if (joueurs > 6) {
            printf("Groupe trop grand");
        }
        else {
            if (((10 <= age && age <= 13) && (adulte == 1 && joueurs >= 3))
            || ((14 <= age && age <= 17) && (joueurs >= 4 || adulte == 1))
            || (age >= 18)) {
                printf("Accès autorisé");
            }
            else {
                printf("Accès refusé");
            }
        }
    }
    
    return 0;
}