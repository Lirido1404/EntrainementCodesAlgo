#include<stdio.h>
#include<stdlib.h>



void decalage(int *arr,int nbrcase);

int main(){

int nbrcase = 0;

printf("Entrez un nombre de case a allouer au tableau : \n");
scanf("%d",&nbrcase);

int *arr = (int *)malloc(nbrcase * sizeof(int));


for(int i=0;i<nbrcase;i++){
    int number =0;
    printf("Entrez un nombre a ajouter au tableau : \n");
    scanf("%d",&number);
    arr[i] = number ;

}

printf("Tableau initial : \n");
for(int z=0;z<nbrcase;z++){
    printf("%d\n",arr[z]);
}


int nbrpas =0;
printf("Indiquer le nombre de pas à effectuer pour la rotation : \n");
scanf("%d",&nbrpas);

for(int h=0;h<nbrpas;h++){
    int x = arr[nbrcase - 1];
    decalage( arr,nbrcase);
    arr[0] = x;
}


printf("Tableau final : \n");
for(int u=0;u<nbrcase;u++){
    printf("%d\n",arr[u]);
}



}



void decalage(int *arr,int nbrcase){
    for(int r=nbrcase-1;r>0;r--){
        arr[r] = arr[r-1];
    }
    
   
}