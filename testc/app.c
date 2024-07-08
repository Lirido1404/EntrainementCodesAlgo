#include<stdio.h>
#include<stdlib.h>


void toBinaire(int number);
void toHexa(int number);
void billeterie();
void toKelvin();
void toCelsius();
void fromFahrenheitToCelsius();
void toFahrenheit();


int main(){

    int number =0;
    char choix;
    char choixConvTemp;

    printf("Choisissez ce que vous voulez faire: \nTapez 'c' pour realiser des conversions hexa et binaires,\nTapez 'b' pour un rendu de monnaie,\nTapez 'd' pour une conversion de température\n:\n");
    scanf("%c",&choix);

    switch(choix){
        case 'C' :
        case 'c' :
            printf("Entrez un nombre pour qu'il soit convertit en binaire et en hexadecimal : \n");
            scanf("%d",&number);
            printf("Conversion du nombre %d : \n",number);
            toBinaire(number);
            toHexa(number);
            break;
        case 'B' :
        case 'b' :
            billeterie();
            break;
        case 'D' :
        case 'd' :
            printf("Tapez 'c' Pour passer de kelvin en celsius, ou 'k' pour passer de celsius en kelvin : ");
            scanf(" %c",&choixConvTemp);
            switch(choixConvTemp){
                case 'c' :
                case 'C' :
                    toCelsius();
                    break;
                case 'k' :
                case 'K' :
                    toKelvin();
                    break;
                default :
                    printf("NaN");
            }
            break;
        default :
            printf("NaN");
    }


    return 0;
}


void toBinaire(int number){
    int i =0;
    int j =0;
    int binary[32];

    while(number>0){
        binary[i] = number%2;
        number = number/2;
        i++;
    }


    printf("Binaire : ");
    for(j = i - 1;j>=0;j--){

        printf("%d",binary[j]);
    }

    printf("\n");

}


void toHexa(int number){
    int hexa[32];
    int temp = 0;
    int i = 0;
    int j=0;


    while(number>0){
        temp = number%16;
        if(temp<10){
        hexa[i]=temp + '0';
        }else{
        hexa[i] = temp - 10 + 'a';
        }
        number = number/16;
        i++;
    }


    printf("Hexa : ");
    for(j = i-1;j>=0;j--){
        printf("%c",hexa[j]);
    }



    printf("\n");

}


void billeterie(){
    int montant;

    int billet10=0,billet5=0,piece2=0,piece1=0;

    printf("Entrez un montant : \n");
    scanf("%d",&montant);

    billet10 = montant/10;
    montant = montant%10;

    billet5 = montant/5;
    montant = montant%5;

    piece2 = montant/2;
    montant = montant%2;

    piece1 = montant;

    printf("Billet de 10 : %d\n",billet10);
    printf("Billet de 5 : %d\n",billet5);
    printf("piece de 2 : %d\n",piece2);
    printf("piece de 1 : %d\n",piece1);



}


void toKelvin(){
    int number = 0;
    int kelvin = 0;

    printf("Enter a value to convert to kelvin : \n");
    scanf("%d",&number);

    kelvin = number + 273.15;
    printf("%d celsius is equal to %d kelvin.",number,kelvin);

}


void toCelsius(){
    int number = 0;
    int celsius = 0;

    printf("Enter a value to convert to celsius : \n");
    scanf("%d",&number);

    celsius = number - 273.15;
    printf("%d kelvin is equal to %d celsius.",number,celsius);
}

void toFahrenheit(){
    int number = 0;
    int fahrenheit = 0;

    printf("Enter a value to convert to fahrenheit : \n");
    scanf("%d",&number);

    fahrenheit = number * 1.8 + 32;
    printf("%d celsius is equal to %d fahrenheit.",number,fahrenheit);
}


void fromFahrenheitToCelsius(){
    int number = 0;
    int celsius = 0;

    printf("Enter a value to convert to celsius : \n");
    scanf("%d",&number);

    celsius = number - 32 / 1.8;
    printf("%d Fahrenheit is equal to %d celsius.",number,celsius);
}
