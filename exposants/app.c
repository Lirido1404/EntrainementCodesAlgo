#include<stdlib.h>
#include<stdio.h>

int main(){

int x =0;
int n=0;
int i =0;

int result =1;


printf("Entrez un nombre : ");
scanf("%d",&x);

do{
    printf("Entrez une puissance : ");
scanf("%d",&n);
}while(n<0);

for(i=0;i<n;i++){
    result = result*x;
}


printf("= %d",result);
}