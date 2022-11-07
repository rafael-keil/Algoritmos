#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float n1,n2;

int main() {
    setlocale(LC_ALL, "Portuguese");
    scanf("%f",&n1);
    scanf("%f",&n2);
    printf("Divisão do primeiro pelo segundo: %.2f", n1/n2);
}
