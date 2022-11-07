#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float valor, taxa, tempo;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor: ");
    scanf("%f",&valor);
    printf("Digite a taxa: ");
    scanf("%f",&taxa);
    printf("Digite O tempo: ");
    scanf("%f",&tempo);

    printf("Prestação: %.2f", valor + (valor * (taxa/100)) * tempo);
}
