#include<stdlib.h>
#include<stdio.h>

int main(){

    int rangSuite = 0;


    int m=2;
    int c=1;

    printf("Entrez un nombre : \n");
    scanf("%d",&rangSuite);


    for(int i =2;i<=rangSuite;i++){
        c = 3*c+m;
        m=2*m+1;
    }

    printf("C%d = %d",rangSuite,c);



}