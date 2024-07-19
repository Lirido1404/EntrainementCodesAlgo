#include<stdio.h>
#include<stdlib.h>


int triDicho(int valeurachercher,int *arr,int nbrcase);

int main(){


    int nbrcase = 0;
    int min_idx =0;
    int temp =0;

printf("Entrez un nombre de case a allouer au tableau : \n");
scanf("%d",&nbrcase);

int *arr = (int *)malloc(nbrcase * sizeof(int));


for(int i=0;i<nbrcase;i++){
    int number = 0;
    printf("Entrez un nombre a ajouter au tableau : \n");
    scanf("%d",&number);
    arr[i] = number;
}


int valeurachercher =0;
printf("Entrez une valeur pour savoir si elle existe dans le tableau : \n");
scanf("%d",&valeurachercher);

for(int j=0;j<nbrcase;j++){
    min_idx=j;
    for(int w=j+1;w<nbrcase;w++){
        if(arr[w]<arr[j]){
            min_idx = w;
        }
    }

    temp = arr[min_idx];
    arr[min_idx] = arr[j];
    arr[j] = temp;


}



if(triDicho(valeurachercher,arr,nbrcase)){
    printf("Existe");
}else{
    printf("NaN");
}






}


int triDicho(int valeurachercher,int *arr,int nbrcase){
    int m=0;
    int borneInf =0;
    int borneSup = nbrcase -1;

    while(borneInf <= borneSup){
        m = (borneInf + borneSup) / 2;
        if(valeurachercher == arr[m] ){
            return 1;
        } else if(valeurachercher > arr[m]){
            borneInf = m +1;
        }else{
            borneSup = m-1;
        }
    }
    return 0;

}