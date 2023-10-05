#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int speisekarte(){
    int gerichteKosten[] = {13, 10, 8, 3, 2};
    char *gerichteNamen[] = {"Kalbsfilet", "Pizza", "Nudeln", "Cola", "Wasser"};
    printf("Hier ist unsere Speisekarte: \n");
    for(int i = 0; i < sizeof(gerichteKosten) / sizeof(int); i++){
        printf("%d. %s (%d€) \n", (i), gerichteNamen[i], gerichteKosten[i]);
    }
    printf("Wieviele Dinge möchtest du bestellen? ");
    int anzahlGerichte = 0;
    scanf("%d", &anzahlGerichte);
    int gerichte[anzahlGerichte];
    int mengeGerichte[anzahlGerichte];
    for(int i = 0; i < anzahlGerichte; i++){
        printf("Schreibe hier die Nummer deines %d. Gerichtes \n", (i));
        scanf("%d", &gerichte[i]);
        printf("Schreibe hier wie häufig du das Gerichte bestellen möchtest \n");
        scanf("%d", &mengeGerichte[i]);
    }
    int sum = 0;
    printf("Rechnung: \n");
    for(int i = 0; i < anzahlGerichte; i++){
        sum += gerichteKosten[gerichte[i]]*mengeGerichte[i];
        printf("%d %s %d€ \n", mengeGerichte[i], gerichteNamen[gerichte[i]], mengeGerichte[i]*gerichteKosten[gerichte[i]]);
    }
    printf("Gesamt: %d€ \n", sum);
}

int main() {
    speisekarte();
    return 0;
}

