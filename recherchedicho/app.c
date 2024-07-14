#include<stdlib.h> // impoter dépendance
#include<stdio.h>


int triDichotomique(int *arr,int valeurachercher, int nbrcases); // prototyper la fonction afin qu'elle puisse s'executer --> elle est mise après la fonction main ( fonction d'éxecution ) donc il faut la prototyper pour que l'algorithme la lise dans l'odre

int main(){
    
    int nbrcases = 0;
    int i = 0;
    int min_idx = 0;
    int temp =0;
    int valeurachercher =0;


// Allocation de l'espace mémoire nécessaire dynamiquement en fonction de l'entrée


    printf("Enter le nombre de case dans le tableau : \n");
    scanf("%d",&nbrcases);


    int *arr = (int*)malloc(nbrcases * sizeof(int));

    for(int z=0;z<nbrcases;z++){
    printf("Entrez un nombre à ajouter au tableau : \n");
    scanf("%d",&arr[z]);
}


// Mise en place du tri par selection pour obtenir un tableau rangée dans l'odre croissant qui permet d'envisager une recherche dichotomique


for(i=0;i<nbrcases;i++){
    min_idx = i;
    for(int j=i+1;j<nbrcases;j++){
        if(arr[j]<arr[min_idx]){
            min_idx =j;
        }
    }

    temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;

}

// Condition d'affichage en fonction du resultat de la recherche dicho

printf("Entrez une valeur pour savoir si elle existe dans le tableau : ");
scanf("%d",&valeurachercher);


if(triDichotomique(arr,valeurachercher,nbrcases)){
    printf("\nCe nombre existe dans le tableau");
}else{
        printf("\nCe nombre n'existe pas dans le tableau");

}



}


//  Recherche dicho

int triDichotomique(int *arr,int valeurachercher, int nbrcases){

int m=0;
int borneInf = 0;
int borneSup = nbrcases-1;


while(borneInf<=borneSup){
    m = (borneInf + borneSup) /2;
    if(valeurachercher == arr[m]){
        return 1;                           // Arret de la fonction puisque le résultat est trouvé
    }else if(valeurachercher > arr[m]){
        borneInf = m+1;
    }else{                                  
        borneSup = m-1;
    }
}
    return 0;                               // Sinon on sort de la boucle et la fonction retourne 0 --> bool : false 
}
