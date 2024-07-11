#include<stdio.h>
#include<stdlib.h>

int main(){
int i=0;
int arr[32];

for(i=0;i<32;i++){
    printf("Entrez un nombre : ");
    scanf("%d",&arr[i]);
}

for(int j=0;j<32;j++){
    printf("%d",arr[j]);
}

}