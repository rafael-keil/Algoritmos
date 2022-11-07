#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float saldo;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Saldo da aplicação: ");
    scanf("%f",&saldo);
    printf("Novo saldo: %0.2f", saldo*1.01);
}
