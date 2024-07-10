#include<stdio.h>
#include<stdlib.h>

int main(){

    char c;
    int nbr =0;
    char prev = ' ';
    int taille =0, nbmTaille =0, tailleMot =0;

    printf("Saisissez des informations : ");

    while((c = getchar()) != '#'){
        if(c != ' ' && c != '\n'){
            if(prev == ' ' || prev=='\n'){
                nbr++;
            }
        }
        prev = c;
    }

    printf("Nombre de mots : %d\n",nbr);





   

    return 0;
}


