#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float base, altura;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a base: ");
    scanf("%f",&base);
    printf("Digite a altura: ");
    scanf("%f",&altura);

    printf("Per�metro: %0.2f \n", (altura*2)+(base*2));
    printf("�rea: %0.2f", base*altura);
}
