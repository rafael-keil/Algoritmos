#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float peso, preco, total, ICMS;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o peso total: ");
    scanf("%f",&peso);
    printf("Digite o preço do KG: ");
    scanf("%f",&preco);

    total = preco * peso;
    ICMS = total * 0.17;

    printf("Valor total: %.2f \n", total);
    printf("Valor Pago ao ICMS: %.2f \n", ICMS);
    printf("Lucro líquido: %.2f \n", total - ICMS);
}
