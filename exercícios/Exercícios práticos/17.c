#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float a, b, temp;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor A: ");
    scanf("%f",&a);
    printf("Digite o valor B: ");
    scanf("%f",&b);

    temp = a;
    a = b;
    b = temp;

    printf("Valor A: %.2f \n", a);
    printf("Valor B: %.2f \n", b);
}
