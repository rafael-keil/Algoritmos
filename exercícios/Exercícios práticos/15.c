#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>;

float vendedor, cod, preco, quant, total;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o vendedor: ");
    scanf("%f",&vendedor);
    printf("Digite o c�digo da pe�a: ");
    scanf("%f",&cod);
    printf("Digite o pre�o unit�rio: ");
    scanf("%f",&preco);
    printf("Digite a quantidade vendida: ");
    scanf("%f",&quant);

    total = preco * quant;

    printf("Valor total: %.2f \n", total);
    printf("Valor da comiss�o: %.2f", total*0.05);
}
