#include<stdio.h>
#include<stdlib.h>


int main(){

    int nbrcase = 0;

    printf("Entrez un nombre de case a allouer au tableau : \n");
    scanf("%d",&nbrcase);

    int *arr = (int*)malloc(nbrcase * sizeof(int));
    int *unique_arr = (int*)malloc(nbrcase * sizeof(int));
    int unique_count =0;

    for(int i=0; i<nbrcase;i++){
        int number = 0;
        printf("Entrez un nombre à ajouter au tableau : \n");
        scanf("%d",&number );
        arr[i] = number;
    }

    for(int w=0;w<nbrcase;w++){
        int is_unique=1;
        for(int u=0;u<unique_count;u++){
            if(arr[w] == unique_arr[u]){
                is_unique=0;
                break;
            }
        }
        if(is_unique){
            unique_arr[unique_count] = arr[w];
            unique_count++;
        }
    }

    printf("\n");

    for(int z=0;z<unique_count;z++){
        printf("%d\n",unique_arr[z]);
    }


}
