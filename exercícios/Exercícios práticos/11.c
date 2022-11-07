#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float base, altura;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da base: ");
    scanf("%f",&base);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    printf("Área: %.2f", (base*altura)/2);

}
