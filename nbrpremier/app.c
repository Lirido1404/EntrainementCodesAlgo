#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool estpremier(int nbr);
int main(){


int nbr = 0;

printf("Entrez un nombre pour vérifier si il est premier : ");
scanf("%d",&nbr);


estpremier(nbr);

}


bool estpremier(int nbr){

int i=0;

if(nbr<2){
    return false;
}

for(i=2;i*i<=nbr;i++){
    if(nbr%i == 0){
        printf("false");
        return false;
    }
    printf("true");
    return true;
}

}