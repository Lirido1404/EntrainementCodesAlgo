#include<stdio.h>
#include<stdlib.h>
int estCroissant(int n);
int main(){
    int number = 0;

    printf("Entrez un nombre : ");
    scanf("%d",&number);

    if(estCroissant(number)){
        printf("Ok");
    }else{
        printf("NaN");
    }

}


int estCroissant(int n){
    int chiffre = n%10;
    n=n/10;

    while(n>0){
        if(chiffre < n%10){
            return(0);
        }else{
            chiffre = n%10;
            n = n/10;
        }
    }

    return(1);



}

