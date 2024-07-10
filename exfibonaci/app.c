#include<stdio.h>
#include<stdlib.h>

int main(){

    int number = 0;
    int f1 = 0;
    int f2 = 1;

    printf("Entrez un nombre n pour obtenir n terme de la suite de Fibonaci : ");
    scanf("%d",&number);

    printf("F0 = 0\n");
    if(number > 1){
        printf("F1 = 1\n");
    }

    for(int i = 2; i <= number; i++){
        int next = f1 + f2; // 1 ; 2 ; 3 ;
        f1 = f2; // 1 ; 1 ;
        f2 = next; // 1 ; 2 ; 
        printf("F%d = %d\n",i,next);
    }

    return 0;
}
