#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float n1, n2, n3, n4, soma;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor 1: ");
    scanf("%f",&n1);
    printf("Digite o valor 2: ");
    scanf("%f",&n2);
    printf("Digite o valor 3: ");
    scanf("%f",&n3);
    printf("Digite o valor 4: ");
    scanf("%f",&n4);

    soma = (n1*n1) + (n2*n2) + (n3*n3) + (n4*n4);

    printf("Soma dos quadrados: %.2f", soma);
}
