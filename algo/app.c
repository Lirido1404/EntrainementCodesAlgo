#include<stdio.h>
#include<stdlib.h>

int main() {
    int notes[15] = {8, 16, 20, 14, 7, 14, 18, 2, 6, 8, 19, 15, 16, 18, 17};
    
    int i =0; int j =0; int temp =0; int min_idx =0; int z=0;

    for(i=0;i<15;i++){
        min_idx=i;
        for(j=i+1;j<15;j++){
            if(notes[j]<notes[min_idx]){
                min_idx =j;
            }
        }
        temp = notes[min_idx];
        notes[min_idx] = notes[i];
        notes[i] = temp;

        printf("%d\n",notes[i]);
    }

    int meilleure_note = notes[0];

    for(i=0;i<15;i++){
        if(notes[i]>meilleure_note){
            meilleure_note = notes[i];
        }
    }

    printf("meilleure note : %d\n",meilleure_note);


    int pire_note = notes[0];

    for(i=0;i<15;i++){
        if(notes[i]<pire_note){
            pire_note=notes[i];
        }
    }

        printf("pire note : %d\n",pire_note);

    int somme = 0;
    for(i=0;i<15;i++){
        somme = somme + notes[i];
    }
    printf("somme : %d",somme);
    

    

    return 0;
}

