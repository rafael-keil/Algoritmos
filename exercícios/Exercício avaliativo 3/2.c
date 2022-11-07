#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

float salario, indice;

float reajuste(float salario, float indice){
    return salario + (salario * (indice/100));
}


main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Salário: ");
    scanf("%f", &salario);

    printf("Índice de reajuste (%%): ");
    scanf("%f", &indice);

    printf("Salário atualizado: %.2f", reajuste(salario, indice));
}
