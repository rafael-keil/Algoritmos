#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float n1, n2, n3, n4, media;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Primeiro n�mero: ");
    scanf("%f",&n1);
    printf("Segundo n�mero: ");
    scanf("%f",&n2);
    printf("Terceiro n�mero: ");
    scanf("%f",&n3);
    printf("Quarto n�mero: ");
    scanf("%f",&n4);

    media = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;

    printf("M�dia ponderada: %0.1f", media);
}
