#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float dolar, valor;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a cotação do dolar: ");
    scanf("%f",&dolar);
    printf("Digite o valor: ");
    scanf("%f",&valor);

    printf("conversão em real: %.2f", valor * dolar);
}
