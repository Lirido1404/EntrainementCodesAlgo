#include <stdio.h>
#include <string.h>

int main() {
    int TableauNombresCubiques[32]; 
    int index = 0; 

    for (int i = 150; i <= 410; i++) {
        char number_str[32];
        sprintf(number_str, "%d", i);

        int chiffre0 = number_str[0] - '0';
        int chiffre1 = number_str[1] - '0';
        int chiffre2 = number_str[2] - '0';

        int cubeChiffre0 = chiffre0 * chiffre0 * chiffre0;
        int cubeChiffre1 = chiffre1 * chiffre1 * chiffre1;
        int cubeChiffre2 = chiffre2 * chiffre2 * chiffre2;

        int sumCube = cubeChiffre0 + cubeChiffre1 + cubeChiffre2;
        
        if (sumCube == i) {
            TableauNombresCubiques[index] = i; 
            index++; 
            printf("Le nombre %d est un nombre cubique\n", i);
        }
    }

    printf("\nLes nombres cubiques trouves sont : ");
    for (int k = 0; k < index; k++) {
        printf("%d ", TableauNombresCubiques[k]);
    }
    printf("\n");

    return 0;
}
