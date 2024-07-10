#include <stdio.h>
#include <stdlib.h>

int sommeDiviseur(int n);

int main() {
    int nombre1 = 0;
    int nombre2 = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez un deuxieme nombre : ");
    scanf("%d", &nombre2);

    if (sommeDiviseur(nombre1) == nombre2 && sommeDiviseur(nombre2) == nombre1) {
        printf("Les nombres que vous avez choisis sont amis\n");
    } else {
        printf("Les nombres que vous avez choisis ne sont pas amis\n");
    }

    return 0;
}

int sommeDiviseur(int n){
    int result =0;
    for(int i=1;i<n;i++){
        if(n%i ==0){
            result += i;
        }
    }

    return result;
}
