#include <stdio.h>
#include <stdlib.h>
#include <locale.h>;
#include <conio.h>;

float max, atual, diferenca;

main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Qual a velocidade máxima da via? \n");
    scanf("%f", &max);
    printf("Qual a velocidade em que o veículo estava? \n");
    scanf("%f", &atual);

    diferenca = atual - max;

    if(diferenca <= 0){
        printf("Sem multa!");
    }
    else{
        if(diferenca <= (max*0.1)){
            printf("Multa de R$300,00!");
        }
        else{
            if(diferenca <= (max*0.3)){
                printf("Multa de R$700,00");
            }
            else{
                printf("Multa de R$1.000,00");
            }
        }
    }

    getch();
}
