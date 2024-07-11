#include<stdio.h>
#include<stdlib.h>

int sommeDiviseurs(int n);

int main(){

    int number1 =0;
    int number2 =0;

    printf("Entrez un nombre : ");
    scanf("%d",&number1);

    printf("Entrez un deuxième nombre : ");
    scanf("%d",&number2);


    if(sommeDiviseurs(number1) == number2 && sommeDiviseurs(number2) == number1 ){
        printf("ami");
    }else{
        printf("pas ami");
    }





}


int sommeDiviseurs(int n){

int result =0;

    for(int i=1;i<n;i++){
        if(n%i==0){
            result += i;
        }
    }

    return result;

}