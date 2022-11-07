#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

float a, b;

float hipotenusa(float a, float b){
    return sqrt(pow(a,2) + pow(b,2));
}


main(){
    printf("Cateto adjacente: ");
    scanf("%f", &a);

    printf("Cateto oposto: ");
    scanf("%f", &b);

    printf("Hipotenusa: %.2f", hipotenusa(a,b));
}
