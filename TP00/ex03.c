#include <stdio.h>
int main(void) {
    int cote;
    cote = 5;
    
    int perimetre_carre;
    perimetre_carre = cote * 4;
    
    int surface_carre;
    surface_carre = cote * cote;
    
    printf("Périmètre du carré: %d\n", perimetre_carre);
    printf("Surface du carré: %d\n", surface_carre);
    
    return 0;
}