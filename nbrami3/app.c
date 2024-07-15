#include<stdlib.h> 
#include<stdio.h>

int sommeDiviseurs(int n);

int main(){
    
    int nombre1 = 0;
    int nombre2 =0;

    printf("Entrer un nombre : \n");
    scanf("%d",&nombre1);
    
    printf("Entrer un deuxième nombre : \n");
    scanf("%d",&nombre2);


if(sommeDiviseurs(nombre1) == nombre2 && sommeDiviseurs(nombre2) == nombre1){
    printf("ami");
}else{
    printf("NaN");
}

    
return 0;          
}


int sommeDiviseurs(int n){
    int result = 0;
for(int i=1;i<n;i++){
    
    if(n%i == 0){
        result = result + i;
    }
    
}

return result;
}
