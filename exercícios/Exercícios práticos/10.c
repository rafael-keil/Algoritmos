#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float raio;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Valor do raio: ");
    scanf("%f",&raio);

    printf("Perímetro: %.2f \n", 2*3.14*raio);
    printf("Área: %.2f \n", 3.14*(raio*raio));
}
