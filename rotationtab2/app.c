#include<stdio.h>
#include<stdlib.h>


void decalage(int *arr,int nbrcase);

int main(){


    int nbrcase =0;


    printf("Entre le nombre de case que vous voulez allouer au tableau : \n");
    scanf("%d",&nbrcase);

    int *arr = (int *)malloc(nbrcase * sizeof(int));

    for(int i=0;i<nbrcase;i++){
        int number = 0;
        printf("Entrez un nombre à ajouter au tableau : \n");
        scanf("%d",&number);
        arr[i] = number;
    }

    printf("Tableau initial\n");
    for(int j =0;j<nbrcase;j++){
        printf("%d\n",arr[j]);
    }


    int nbrpas = 0;
    printf("Entrez un nombre de pas avec laquelle la rotation s'effectuera : \n");
    scanf("%d",&nbrpas);

    for(int z=0;z<nbrpas;z++){
        int x= arr[nbrcase-1];
        decalage(arr,nbrcase);
        arr[0] = x;

    }

    printf("Tableau Final\n");
    for(int g=0;g<nbrcase;g++){
        printf("%d\n",arr[g]);
    }

    free(arr);




    return 0;

}

void decalage(int *arr,int nbrcase){
for(int h=nbrcase-1;h>0;h--){
    arr[h] = arr[h-1];
}
}